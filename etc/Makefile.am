etcconfdir=$(DESTDIR)$(sysconfdir)/apt-dater/
dist_etcconf_DATA=apt-dater.xml hosts.xml

cmd: cmd

install-exec-hook:
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/pre-con.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/post-con.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/pre-ins.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/post-ins.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/pre-ref.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/post-ref.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/pre-upg.d
	$(mkinstalldirs) -m 0750 $(DESTDIR)$(sysconfdir)/apt-dater/post-upg.d
	$(mkinstalldirs) -m 0710 $(DESTDIR)$(sysconfdir)/apt-dater/ssh
	$(mkinstalldirs) -m 02770 $(DESTDIR)$(localstatedir)/lib/apt-dater/history/
	$(mkinstalldirs) -m 02770 $(DESTDIR)$(localstatedir)/cache/apt-dater/stats/
	$(mkinstalldirs) -m 02770 $(DESTDIR)$(localstatedir)/cache/apt-dater/tmux/
if FEAT_TMUX_ENABLED
	$(LN_S) $(DESTDIR)$(pkglibexecdir)/tmux-hint $(DESTDIR)$(sysconfdir)/apt-dater/post-con.d/
	$(LN_S) $(DESTDIR)$(pkglibexecdir)/tmux-hint $(DESTDIR)$(sysconfdir)/apt-dater/post-ins.d/
	$(LN_S) $(DESTDIR)$(pkglibexecdir)/tmux-hint $(DESTDIR)$(sysconfdir)/apt-dater/post-upg.d/
endif
