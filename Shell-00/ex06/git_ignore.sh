#!/bin/sh
git status --ignored --porcelain | grep '^!!' | awk '{print $2}'
