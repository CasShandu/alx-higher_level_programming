#!/bin/bash
# Check if there is exactly one argument passed
curl -so /dev/null -w "%{http_code}" "$1"
