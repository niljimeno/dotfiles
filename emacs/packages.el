(require 'package)
(add-to-list 'package-archives '("melpa" . "https://melpa.org/packages/") t)
(package-initialize)

(setq lua-indent-level 4)

(add-hook 'lua-mode-hook
          (lambda ()
	    (setq-local compile-command
			"cd $(git rev-parse --show-toplevel) && love ./")
	    (define-key lua-mode-map (kbd "M-r") 'compile)))

(setq custom-safe-themes t)
(load-theme 'gruber-darker)
