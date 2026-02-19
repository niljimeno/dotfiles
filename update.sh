#!/bin/sh

# editor configs
cp ~/.config/kak/* ./kakoune/
cp ~/.emacs.d/* ./emacs/
cp ~/.editorconfig ./editorconfig

# suckless
rm -rf ./suckless/*
cp -r ~/tooling/dmenu/ ./suckless/
cp -r ~/tooling/dwm/ ./suckless/
cp -r ~/tooling/st/ ./suckless/

# bash
cp ~/.bashrc ./sh/bashrc
cp ~/.xinitrc ./sh/xinitrc
