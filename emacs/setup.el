(tool-bar-mode -1)
(menu-bar-mode -1)
(toggle-scroll-bar -1)

(setq inhibit-startup-screen t)
(setq make-backup-files nil)

(set-face-attribute 'default nil :height 120)

(global-display-line-numbers-mode)
(global-set-key (kbd "C-x k") 'kill-current-buffer)

(fset 'yes-or-no-p 'y-or-n-p)
