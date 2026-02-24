#!/bin/sh

# editor configs
rm -rf ./kakoune
cp -r ~/.config/kak ./kakoune
cd kakoune && ( find . -type d -name ".git" \
  && find . -name ".gitignore" \
  && find . -name ".gitmodules" ) | xargs rm -rf

cd ..
rm -rf ./kakoune/plugins/.build/

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
