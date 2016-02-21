#!/bin/bash

while [ -f /boot/enable_kiosk ]; do
  echo "Starting kiosk ..."
  startx -e browser &> /dev/null
  sleep 1
done
