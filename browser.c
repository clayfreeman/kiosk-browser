/**
 * @file browser.c
 * @copyright Copyright 2016 Clay Freeman. All rights reserved
 * @license   This project is released under the GNU Lesser General Public
 *            License v3 (LGPL-3.0)
 *
 * GTK+ WebKit implementation of a kiosk-oriented web browser
 */

#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <stdio.h>
#include <webkit/webkit.h>

#define DEFAULT_URL "http://127.0.0.1"

static WebKitWebView* web_view;
static GtkWidget*     window;

int main(int argc, char** argv) {
  gtk_init(&argc, &argv);

  // Fetch the screen resolution
        GdkScreen* screen = gdk_screen_get_default();
  const gint       width  = gdk_screen_get_width(screen);
  const gint       height = gdk_screen_get_height(screen);

  // Create the main application window
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  // Create the web view and browse to the default URL
  web_view = WEBKIT_WEB_VIEW(webkit_web_view_new());
  webkit_web_view_load_uri(web_view, DEFAULT_URL);
  gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(web_view));

  // Set the appropriate resolution and show the web view
  gtk_window_resize(GTK_WINDOW(window), width, height);
  gtk_widget_show_all(window);

  // Call the entrypoint to GTK
  gtk_main();

  return 0;
}
