#!/bin/sh

# kakoune
cp ~/.config/kak/* ./kakoune/

# suckless
rm -rf ./suckless/*
cp -r ~/tooling/dmenu/ ./suckless/
cp -r ~/tooling/dwm/ ./suckless/
cp -r ~/tooling/st/ ./suckless/

# bash
cp ~/.bashrc ./sh/bashrc
cp ~/.xinitrc ./sh/xinitrc
