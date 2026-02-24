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

;; (add-to-list pdf-view-incompatible-modes
;;              display-line-numbers-mode)
(dolist (mode '(pdf-view-mode-hook))
 (add-hook mode (lambda () (display-line-numbers-mode -1))))

(use-package pdf-tools)

(defvar tv/prefer-pdf-tools (fboundp 'pdf-view-mode))
(defun tv/start-pdf-tools-if-pdf ()
  (when (and tv/prefer-pdf-tools
             (eq doc-view-doc-type 'pdf))
    (pdf-view-mode)))

(add-hook 'doc-view-mode-hook 'tv/start-pdf-tools-if-pdf)

(org-babel-do-load-languages
 'org-babel-load-languages
 '((lisp . t)))
