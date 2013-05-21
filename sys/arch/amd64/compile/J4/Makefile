KERNEL_BUILD=J4
IDENT=-DCOMPAT_FREEBSD_32
PARAM=-DMAXUSERS=64
MACHINE=amd64
S=	../../../..
COPTS=-O2 -fno-omit-frame-pointer
#	$NetBSD: Makefile.amd64,v 1.40 2011/12/19 14:06:16 joerg Exp $

# Makefile for NetBSD
#
# This makefile is constructed from a machine description:
#	config machineid
# Most changes should be made in the machine description
#	/sys/arch/amd64/conf/``machineid''
# after which you should do
#	config machineid
# Machine generic makefile changes should be made in
#	/sys/arch/amd64/conf/Makefile.amd64
# after which config should be rerun for all machines of that type.
#
# To specify debugging, add the config line: makeoptions DEBUG="-g"
# A better way is to specify -g only for a few files.
#
#	makeoptions DEBUGLIST="uvm* trap if_*"

MACHINE_ARCH=x86_64
USETOOLS?=	no
NEED_OWN_INSTALL_TARGET?=no
.include <bsd.own.mk>

USE_SSP?=	yes

##
## (1) port identification
##
AMD64=		$S/arch/amd64
GENASSYM_CONF=	${AMD64}/amd64/genassym.cf

##
## (2) compile settings
##
DEFCOPTS=	-O2
CPPFLAGS+=	-Damd64 -Dx86_64
CFLAGS+=	-mcmodel=kernel
CFLAGS+=	-mno-red-zone -mno-sse -mno-sse2 -mno-sse3

##
## (3) libkern and compat
##
KERN_AS=	obj

##
## (4) local objects, compile rules, and dependencies
##
MD_OBJS=	locore.o vector.o copy.o spl.o
MD_CFILES=
MD_SFILES=	${AMD64}/amd64/locore.S ${AMD64}/amd64/vector.S \
		${AMD64}/amd64/copy.S ${AMD64}/amd64/spl.S

locore.o: ${AMD64}/amd64/locore.S assym.h
	${NORMAL_S}

vector.o: ${AMD64}/amd64/vector.S assym.h
	${NORMAL_S}

copy.o: ${AMD64}/amd64/copy.S assym.h
	${NORMAL_S}

spl.o: ${AMD64}/amd64/spl.S assym.h
	${NORMAL_S}

AFLAGS.locore.S= ${${ACTIVE_CC} == "clang":?-no-integrated-as:}
AFLAGS.mptramp.S= ${${ACTIVE_CC} == "clang":?-no-integrated-as:}
AFLAGS.spl.S= ${${ACTIVE_CC} == "clang":?-no-integrated-as:}

##
## (5) link settings
##
TEXTADDR?=	0xffffffff80100000
EXTRA_LINKFLAGS=	-z max-page-size=0x100000
LINKFLAGS_NORMAL=	-X
KERN_LDSCRIPT?= kern.ldscript
LINKFORMAT=	-T ${AMD64}/conf/${KERN_LDSCRIPT}

##
## (6) port specific target dependencies
##

# depend on CPU configuration
locore.o machdep.o: Makefile

acpi_wakeup_low.o amd64func.o busfunc.o cpufunc.o cpu_in_cksum.o: assym.h
linux_support.o linux32_sigcode.o lock_stubs.o mptramp.o: assym.h
netbsd32_sigcode.o: assym.h

##
## (7) misc settings
##

##
## (8) config(8) generated machinery
##

OBJS=	des_ecb.o des_setkey.o des_enc.o des_cbc.o bf_ecb.o bf_enc.o \
	bf_cbc.o bf_skey.o cast128.o rijndael-alg-fst.o \
	rijndael-api-fst.o rijndael.o skipjack.o camellia.o \
	camellia-api.o criov.o xform.o crypto.o cryptosoft.o deflate.o \
	aesxcbcmac.o gmac.o cryptodev.o ocryptodev.o nist_ctr_drbg.o \
	sysmon_taskq.o sysmon_power.o sysmon_envsys.o \
	sysmon_envsys_events.o sysmon_envsys_tables.o \
	sysmon_envsys_util.o sysmon_wdog.o sysmon.o ieee80211.o \
	ieee80211_acl.o ieee80211_amrr.o ieee80211_crypto.o \
	ieee80211_crypto_ccmp.o ieee80211_crypto_none.o \
	ieee80211_crypto_tkip.o ieee80211_crypto_wep.o ieee80211_input.o \
	ieee80211_ioctl.o ieee80211_netbsd.o ieee80211_node.o \
	ieee80211_output.o ieee80211_proto.o ieee80211_rssadapt.o \
	ieee80211_xauth.o aarp.o at_control.o at_proto.o ddp_input.o \
	ddp_output.o ddp_usrreq.o bt_proto.o bt_sysctl.o hci_event.o \
	hci_ioctl.o hci_link.o hci_misc.o hci_socket.o hci_unit.o \
	l2cap_lower.o l2cap_misc.o l2cap_signal.o l2cap_socket.o \
	l2cap_upper.o rfcomm_dlc.o rfcomm_session.o rfcomm_socket.o \
	rfcomm_upper.o sco_socket.o sco_upper.o igmp.o in.o in_offload.o \
	in_pcb.o in_proto.o ip_icmp.o ip_id.o ip_input.o ip_output.o \
	ip_reass.o raw_ip.o tcp_input.o tcp_output.o tcp_sack.o \
	tcp_subr.o tcp_timer.o tcp_usrreq.o tcp_congctl.o tcp_vtw.o \
	udp_usrreq.o rfc6056.o dest6.o frag6.o icmp6.o in6.o in6_cksum.o \
	in6_ifattach.o in6_offload.o in6_pcb.o in6_proto.o in6_src.o \
	ip6_flow.o ip6_forward.o ip6_id.o ip6_input.o ip6_mroute.o \
	ip6_output.o mld6.o nd6.o nd6_nbr.o nd6_rtr.o raw_ip6.o route6.o \
	scope6.o udp6_output.o udp6_usrreq.o iconv.o smb_conn.o \
	smb_crypt.o smb_dev.o smb_iod.o smb_rq.o smb_smb.o smb_subr.o \
	smb_trantcp.o smb_usr.o subr_mchain.o fil.o ip_auth.o \
	ip_fil_netbsd.o ip_frag.o ip_htable.o ip_log.o ip_lookup.o \
	ip_nat.o ip_pool.o ip_proxy.o ip_state.o ip_fil_compat.o \
	db_access.o db_break.o db_command.o db_cpu.o db_examine.o \
	db_expr.o db_input.o db_kernel.o db_lex.o db_lwp.o db_output.o \
	db_proc.o db_print.o db_run.o db_sym.o db_trap.o db_variables.o \
	db_watch.o db_write_cmd.o db_xxx.o dtv_buffer.o dtv_demux.o \
	dtv_device.o dtv_ioctl.o dtv_scatter.o dtv_math.o i2c.o \
	i2c_exec.o i2c_subr.o i2c_bitbang.o au8522.o lg3303.o xc3028.o \
	xc5k.o tvpll.o tvpll_tuners.o nxt2k.o mt2131.o cx24227.o \
	at24cxx.o irframe.o cir.o irframe_tty.o ir.o sir.o lpt.o \
	stb_image.o splash.o videomode.o edid.o vesagtf.o tpm.o ld.o \
	mii.o mii_bitbang.o mii_physubr.o mii_ethersubr.o ukphy_subr.o \
	acphy.o amhphy.o bmtphy.o brgphy.o tlphy.o nsphy.o nsphyter.o \
	gentbi.o glxtphy.o gphyter.o qsphy.o inphy.o iophy.o exphy.o \
	lxtphy.o makphy.o icsphy.o igphy.o ikphy.o sqphy.o tqphy.o \
	dmphy.o pnaphy.o rgephy.o urlphy.o ukphy.o ciphy.o rlphy.o \
	atphy.o ihphy.o etphy.o rf_acctrace.o rf_alloclist.o rf_aselect.o \
	rf_callback.o rf_chaindecluster.o rf_copyback.o rf_cvscan.o \
	rf_dagdegrd.o rf_dagdegwr.o rf_dagffrd.o rf_dagffwr.o \
	rf_dagfuncs.o rf_dagutils.o rf_debugMem.o rf_debugprint.o \
	rf_decluster.o rf_declusterPQ.o rf_diskqueue.o rf_disks.o \
	rf_driver.o rf_engine.o rf_evenodd.o rf_evenodd_dagfuncs.o \
	rf_evenodd_dags.o rf_fifo.o rf_interdecluster.o rf_invertq.o \
	rf_layout.o rf_map.o rf_mcpair.o rf_netbsdkintf.o rf_nwayxor.o \
	rf_options.o rf_paritylog.o rf_paritylogDiskMgr.o \
	rf_paritylogging.o rf_parityloggingdags.o rf_paritymap.o \
	rf_parityscan.o rf_pq.o rf_pqdeg.o rf_pqdegdags.o rf_psstatus.o \
	rf_raid0.o rf_raid1.o rf_raid4.o rf_raid5.o \
	rf_raid5_rotatedspare.o rf_reconbuffer.o rf_reconmap.o \
	rf_reconstruct.o rf_reconutil.o rf_revent.o rf_shutdown.o \
	rf_sstf.o rf_states.o rf_stripelocks.o rf_strutils.o rf_utils.o \
	rf_compat50.o aic6360.o smc93cx6.o aic7xxx.o aic7xxx_osm.o \
	aic7xxx_seeprom.o aic79xx.o aic79xx_osm.o dpt.o cac.o ld_cac.o \
	ciss.o mlx.o ld_mlx.o icp.o icp_ioctl.o ld_icp.o icpsp.o aac.o \
	ld_aac.o adv.o advlib.o advmcode.o adw.o bha.o iha.o isp.o \
	isp_library.o isp_netbsd.o mfi.o mpt.o mpt_debug.o mpt_netbsd.o \
	siop_common.o siop.o esiop.o an.o awi.o am79c930.o wi.o ah.o \
	ah_eeprom_v1.o ah_eeprom_v3.o ah_eeprom_v14.o ah_eeprom_v4k.o \
	ah_regdomain.o ah_osdep.o ar5210_attach.o ar5210_beacon.o \
	ar5210_interrupts.o ar5210_keycache.o ar5210_misc.o ar5210_phy.o \
	ar5210_power.o ar5210_recv.o ar5210_reset.o ar5210_xmit.o \
	ar5211_attach.o ar5211_beacon.o ar5211_interrupts.o \
	ar5211_keycache.o ar5211_misc.o ar5211_phy.o ar5211_power.o \
	ar5211_recv.o ar5211_reset.o ar5211_xmit.o ar2316.o ar2317.o \
	ar2413.o ar2425.o ar5111.o ar5112.o ar5413.o ar5212_ani.o \
	ar5212_attach.o ar5212_beacon.o ar5212_eeprom.o ar5212_gpio.o \
	ar5212_interrupts.o ar5212_keycache.o ar5212_misc.o ar5212_phy.o \
	ar5212_power.o ar5212_recv.o ar5212_reset.o ar5212_rfgain.o \
	ar5212_xmit.o ar2133.o ar5416_ani.o ar5416_attach.o \
	ar5416_beacon.o ar5416_cal.o ar5416_cal_adcdc.o \
	ar5416_cal_adcgain.o ar5416_cal_iq.o ar5416_eeprom.o \
	ar5416_gpio.o ar5416_interrupts.o ar5416_keycache.o ar5416_misc.o \
	ar5416_phy.o ar5416_power.o ar5416_recv.o ar5416_reset.o \
	ar5416_xmit.o ar9160_attach.o ar9280.o ar9280_attach.o ar9285.o \
	ar9285_attach.o ar9285_reset.o ath.o ath_netbsd.o \
	athrate-sample.o atw.o rtw.o rtwphy.o rtwphyio.o rt2560.o \
	rt2661.o elink3.o elinkxl.o am79900.o lance.o hme.o dp8390.o \
	pdq.o pdq_ifsubr.o cy.o midway.o ncr53c9x.o mb89352.o hd64570.o \
	i82557.o smc91cxx.o smc83c170.o mb86960.o ne2000.o com.o pckbc.o \
	attimer.o ug.o rrunner.o opl.o oplinstrs.o mpu.o ac97.o rtl80x9.o \
	rtl81x9.o rtl8169.o wdc.o ninjaata32.o ahcisata_core.o siisata.o \
	mvsata.o tulip.o aic6915.o dl10019.o ax88190.o cs89x0.o \
	acpipmtimer.o hpet.o drm_agpsupport.o drm_bufs.o drm_context.o \
	drm_drv.o drm_irq.o drm_lock.o drm_memory.o drm_scatter.o \
	i915_drv.o i915_irq.o i915_suspend.o pcdisplay_subr.o \
	pcdisplay_chars.o vga.o vga_subr.o vga_common.o wsdisplay.o \
	wsdisplay_compat_usl.o wsdisplay_util.o wsemulconf.o \
	wsemul_dumb.o wsemul_vt100.o wsemul_vt100_subr.o \
	wsemul_vt100_chars.o wsemul_vt100_keys.o wsevent.o wskbd.o \
	wskbdutil.o wsmouse.o wsmux.o tpcalib.o mra.o wsdisplay_vcons.o \
	wsdisplay_vcons_util.o rasops.o rasops_masks.o rasops1.o \
	rasops2.o rasops8.o rasops15.o rasops24.o rasops32.o wsfont.o \
	wsfontdev.o genfb.o usbroothub_subr.o uhci.o ohci.o ehci.o \
	sl811hs.o hid.o sdhc.o w83l518d.o w83l518d_sdmmc.o mtd803.o \
	spic.o bwi.o kern_verifiedexec.o verified_exec.o kern_drvctl.o \
	putter.o coda_namecache.o coda_subr.o coda_venus.o coda_vfsops.o \
	coda_vnops.o coda_psdev.o cd9660_bmap.o cd9660_lookup.o \
	cd9660_node.o cd9660_rrip.o cd9660_util.o cd9660_vfsops.o \
	cd9660_vnops.o msdosfs_conv.o msdosfs_denode.o msdosfs_fat.o \
	msdosfs_lookup.o msdosfs_vfsops.o msdosfs_vnops.o ntfs_compr.o \
	ntfs_conv.o ntfs_ihash.o ntfs_subr.o ntfs_vfsops.o ntfs_vnops.o \
	ptyfs_subr.o ptyfs_vfsops.o ptyfs_vnops.o puffs_compat.o \
	puffs_msgif.o puffs_node.o puffs_subr.o puffs_vfsops.o \
	puffs_vnops.o smbfs_io.o smbfs_kq.o smbfs_node.o smbfs_smb.o \
	smbfs_subr.o smbfs_vfsops.o smbfs_vnops.o tmpfs_fifoops.o \
	tmpfs_mem.o tmpfs_specops.o tmpfs_subr.o tmpfs_vfsops.o \
	tmpfs_vnops.o union_subr.o union_vfsops.o union_vnops.o \
	fdesc_vfsops.o fdesc_vnops.o kernfs_subr.o kernfs_vfsops.o \
	kernfs_vnops.o null_vfsops.o null_vnops.o overlay_vfsops.o \
	overlay_vnops.o procfs_cmdline.o procfs_ctl.o procfs_fd.o \
	procfs_fpregs.o procfs_linux.o procfs_map.o procfs_mem.o \
	procfs_note.o procfs_regs.o procfs_status.o procfs_subr.o \
	procfs_vfsops.o procfs_vnops.o umap_subr.o umap_vfsops.o \
	umap_vnops.o krpc_subr.o nfs_bio.o nfs_boot.o nfs_bootdhcp.o \
	nfs_bootparam.o nfs_clntsocket.o nfs_clntsubs.o nfs_export.o \
	nfs_iod.o nfs_kq.o nfs_node.o nfs_serv.o nfs_socket.o \
	nfs_srvcache.o nfs_srvsubs.o nfs_srvsocket.o nfs_subs.o \
	nfs_syscalls.o nfs_vfsops.o nfs_vnops.o ext2fs_alloc.o \
	ext2fs_balloc.o ext2fs_bmap.o ext2fs_bswap.o ext2fs_inode.o \
	ext2fs_lookup.o ext2fs_readwrite.o ext2fs_subr.o ext2fs_vfsops.o \
	ext2fs_vnops.o ffs_alloc.o ffs_balloc.o ffs_inode.o \
	ffs_snapshot.o ffs_subr.o ffs_tables.o ffs_vfsops.o ffs_vnops.o \
	ffs_wapbl.o ffs_quota2.o lfs_alloc.o lfs_balloc.o lfs_bio.o \
	lfs_cksum.o lfs_debug.o lfs_inode.o lfs_itimes.o lfs_segment.o \
	lfs_subr.o lfs_syscalls.o lfs_vfsops.o lfs_vnops.o mfs_vfsops.o \
	mfs_vnops.o mfs_miniroot.o ufs_bmap.o ufs_ihash.o ufs_inode.o \
	ufs_lookup.o ufs_quota.o ufs_quota1.o ufs_quota2.o quota1_subr.o \
	quota2_subr.o ufs_vfsops.o ufs_vnops.o ufs_wapbl.o uvm_amap.o \
	uvm_anon.o uvm_aobj.o uvm_bio.o uvm_coredump.o uvm_device.o \
	uvm_emap.o uvm_fault.o uvm_glue.o uvm_init.o uvm_io.o uvm_km.o \
	uvm_loan.o uvm_map.o uvm_meter.o uvm_mmap.o uvm_mremap.o \
	uvm_object.o uvm_page.o uvm_pager.o uvm_pdaemon.o \
	uvm_pdpolicy_clock.o uvm_pglist.o uvm_readahead.o uvm_stat.o \
	uvm_swap.o uvm_unix.o uvm_user.o uvm_vnode.o secmodel.o \
	secmodel_suser.o secmodel_securelevel.o secmodel_extensions.o \
	secmodel_bsd44.o compat_mod.o compat_sa.o debugsyms.o auconv.o \
	audio.o aurateconv.o bio.o ccd.o cgd.o cgd_crypto.o clock_subr.o \
	clockctl.o dksubr.o dk.o dkwedge_gpt.o firmload.o fss.o \
	lockstat.o md.o midi.o midictl.o midisyn.o mm.o mulaw.o radio.o \
	rndpseudo.o sequencer.o video.o vnd.o bufq_disksort.o bufq_fcfs.o \
	bufq_priocscan.o core_elf32.o core_elf64.o cnmagic.o exec_elf32.o \
	exec_elf64.o exec_script.o exec_subr.o init_main.o init_sysctl.o \
	init_sysctl_base.o init_sysent.o kern_acct.o kern_auth.o \
	kern_cfglock.o kern_clock.o kern_condvar.o kern_core.o kern_cpu.o \
	kern_descrip.o kern_event.o kern_exec.o kern_exit.o kern_fork.o \
	kern_idle.o kern_hook.o kern_kthread.o kern_ktrace.o kern_ksyms.o \
	kern_lock.o kern_lwp.o kern_malloc.o kern_malloc_stdtype.o \
	kern_module.o kern_module_vfs.o kern_mutex.o kern_mutex_obj.o \
	kern_fileassoc.o kern_ntptime.o kern_pax.o kern_physio.o \
	kern_pmf.o kern_proc.o kern_prot.o kern_ras.o kern_rate.o \
	kern_resource.o kern_rndpool.o kern_rndq.o kern_runq.o \
	kern_rwlock.o kern_rwlock_obj.o kern_sig.o kern_sleepq.o \
	kern_softint.o kern_ssp.o kern_stub.o kern_subr.o kern_synch.o \
	kern_syscall.o kern_sysctl.o kern_tc.o kern_time.o kern_timeout.o \
	kern_turnstile.o kern_todr.o kern_uidinfo.o kern_uuid.o \
	kern_xxx.o sched_4bsd.o subr_autoconf.o subr_blist.o subr_bufq.o \
	subr_callback.o subr_cprng.o subr_cpufreq.o subr_copy.o \
	subr_device.o subr_devsw.o subr_disk.o subr_disk_open.o \
	subr_evcnt.o subr_exec_fd.o subr_extent.o subr_hash.o \
	subr_humanize.o subr_iostat.o subr_kcpuset.o subr_kmem.o \
	subr_kobj.o subr_kobj_vfs.o subr_lockdebug.o subr_log.o \
	subr_lwp_specificdata.o subr_once.o subr_optstr.o subr_pcq.o \
	subr_pcu.o subr_percpu.o subr_pool.o subr_prf.o subr_prof.o \
	subr_pserialize.o subr_specificdata.o subr_time.o subr_userconf.o \
	subr_vmem.o subr_workqueue.o subr_xcall.o sys_aio.o sys_descrip.o \
	sys_generic.o sys_module.o sys_mqueue.o sys_lwp.o sys_pipe.o \
	sys_pmc.o sys_process.o sys_pset.o sys_select.o sys_sig.o \
	sys_sched.o sys_socket.o sysv_ipc.o sysv_msg.o sysv_sem.o \
	sysv_shm.o tty.o tty_conf.o tty_bsdpty.o tty_pty.o tty_ptm.o \
	tty_subr.o tty_tty.o uipc_accf.o uipc_domain.o uipc_mbuf.o \
	uipc_mbuf2.o link_proto.o uipc_proto.o uipc_sem.o uipc_socket.o \
	uipc_socket2.o uipc_syscalls.o uipc_usrreq.o vfs_bio.o \
	vfs_cache.o vfs_cwd.o vfs_dirhash.o vfs_getcwd.o vfs_hooks.o \
	vfs_init.o vfs_lockf.o vfs_lookup.o vfs_mount.o vfs_quotactl.o \
	vfs_subr.o vfs_syscalls.o vfs_trans.o vfs_vnode.o vfs_vnops.o \
	vfs_wapbl.o vfs_xattr.o vnode_if.o dead_vnops.o fifo_vnops.o \
	genfs_io.o genfs_rename.o genfs_vfsops.o genfs_vnops.o \
	layer_subr.o layer_vfsops.o layer_vnops.o spec_vnops.o \
	sync_subr.o sync_vnops.o bpf.o bpf_filter.o bpf_stub.o bsd-comp.o \
	if.o if_atmsubr.o if_bridge.o bridgestp.o if_ethersubr.o \
	if_fddisubr.o if_gif.o if_gre.o if_hippisubr.o if_ieee1394subr.o \
	if_loop.o if_media.o if_ppp.o if_stf.o if_sl.o if_spppsubr.o \
	if_strip.o if_tap.o if_tun.o if_vlan.o if_pppoe.o pfil.o \
	ppp-deflate.o ppp_tty.o net_stats.o radix.o raw_cb.o raw_usrreq.o \
	route.o rtbl.o rtsock.o slcompress.o zlib.o accf_data.o \
	accf_http.o if_arp.o if_atm.o in4_cksum.o in_cksum.o in_gif.o \
	ip_ecn.o ip_encap.o in6_gif.o joy.o if_agr.o if_agrsoftc.o \
	if_agrsubr.o if_agrtimer.o if_agrmonitor.o if_agrether.o \
	if_agrether_hash.o ieee8023ad_marker.o ieee8023ad_lacp.o \
	ieee8023ad_lacp_select.o ieee8023ad_lacp_timer.o \
	ieee8023ad_lacp_sm_rx.o ieee8023ad_lacp_sm_mux.o \
	ieee8023ad_lacp_sm_ptx.o ieee8023ad_lacp_sm_tx.o \
	ieee8023ad_lacp_debug.o ieee8023_tlv.o pad.o padvol.o x86emu.o \
	x86emu_i8254.o x86emu_util.o cpu.o acpi_cpu.o acpi_cpu_cstate.o \
	acpi_cpu_pstate.o acpi_cpu_tstate.o acpi_cpu_md.o coretemp.o \
	est.o intel_busclock.o powernow.o apic.o bus_dma.o bus_space.o \
	consinit.o core_machdep.o cpu_topology.o db_trace.o errata.o \
	genfb_machdep.o identcpu.o i8259.o intr.o nmi.o idt.o ipi.o \
	mtrr_i686.o patch.o platform.o pmap.o pmap_tlb.o procfs_machdep.o \
	sys_machdep.o syscall.o vm_machdep.o x86_autoconf.o \
	x86_userconf.o x86_machdep.o cpu_ucode.o cpu_ucode_amd.o lapic.o \
	ioapic.o mpbios.o mp.o mpacpi.o acpi_pdc.o acpi_wakeup.o \
	acpi_machdep.o isa_machdep.o x86_stub.o ipmi.o vga_post.o \
	pci_machdep.o pci_intr_machdep.o pciide_machdep.o amd64func.o \
	autoconf.o busfunc.o cpu_in_cksum.o cpufunc.o db_disasm.o \
	db_interface.o db_machdep.o db_memrw.o kobj_machdep.o \
	subr_disk_mbr.o gdt.o machdep.o process_machdep.o trap.o fpu.o \
	lock_stubs.o cons.o mptramp.o scsipiconf.o scsipi_base.o \
	scsipi_ioctl.o scsipi_verbose.o scsi_base.o atapi_base.o \
	atapi_wdc.o scsiconf.o atapiconf.o cd.o ch.o sd.o st.o st_scsi.o \
	st_atapi.o ses.o ss.o ss_mustek.o ss_scanjet.o uk.o wd.o \
	ata_wdc.o ata.o ata_raid.o ata_raid_subr.o ata_raid_promise.o \
	ata_raid_adaptec.o ata_raid_nvidia.o ata_raid_via.o \
	ata_raid_jmicron.o ata_raid_intel.o ld_ataraid.o sata_subr.o \
	satafis_subr.o md_root.o iop.o ld_iop.o iopsp.o bios32.o \
	mainbus.o pci.o pci_map.o pci_quirks.o pci_subr.o pci_stub.o \
	pci_usrreq.o pcibusprint.o wsdisplay_pci.o cy82c693.o ahc_pci.o \
	ahd_pci.o iop_pci.o twe.o ld_twe.o twa.o ld_twa.o amr.o ld_amr.o \
	arcmsr.o cac_pci.o mlx_pci.o mly.o if_mtd_pci.o icp_pci.o \
	aac_pci.o dpt_pci.o adv_pci.o adw_pci.o adwlib.o adwmcode.o \
	pcscp.o ciss_pci.o bha_pci.o isp_pci.o mfi_pci.o mpt_pci.o mpii.o \
	if_en_pci.o if_ep_pci.o if_ex_pci.o if_fpa.o if_le_pci.o if_pcn.o \
	siop_pci_common.o siop_pci.o esiop_pci.o iha_pci.o trm.o \
	pciide_common.o pciide.o ahcisata_pci.o acardide.o aceride.o \
	artsata.o cmdide.o cypide.o hptide.o iteide.o jmide.o optiide.o \
	piixide.o pdcsata.o pdcide.o svwsata.o satalink.o siside.o \
	slide.o viaide.o ixpide.o toshide.o ppb.o cy_pci.o cz.o \
	if_fxp_pci.o if_hme_pci.o if_jme.o if_ne_pci.o if_tl.o \
	if_ntwoc_pci.o if_lmc.o if_esh_pci.o vga_pci.o bktr_audio.o \
	bktr_card.o bktr_core.o bktr_os.o bktr_tuner.o cs4280.o cs4281.o \
	cs428x.o fms.o opl_fms.o eap.o auacer.o auich.o auvia.o auixp.o \
	neo.o esa.o eso.o opl_eso.o mpu_eso.o esm.o sv.o opl_sv.o cmpci.o \
	opl_cmpci.o mpu_cmpci.o yds.o mpu_yds.o emuxki.o autri.o \
	if_epic_pci.o puc.o pucdata.o com_puc.o cyber.o lpt_puc.o \
	uhci_pci.o ohci_pci.o ehci_pci.o usb_pci.o fwohci_pci.o if_vr.o \
	if_sip.o if_stge.o if_wm.o if_bge.o if_bnx.o if_rtk_pci.o \
	if_tlp_pci.o if_ti.o if_sf_pci.o if_ste.o pccbb.o piixpm.o \
	amdpm.o amdpm_smbus.o hifn7751.o ubsec.o if_an_pci.o if_atw_pci.o \
	if_rtw_pci.o if_ral_pci.o if_wi_pci.o weasel_pci.o if_txp.o \
	if_sk.o if_bce.o if_dge.o if_re_pci.o if_ipw.o if_iwi.o if_wpi.o \
	if_iwn.o if_xge.o if_vge.o if_ath_pci.o if_nfe.o if_msk.o \
	sdhc_pci.o genfb_pci.o nfsmb.o ichsmb.o if_age.o if_alc.o \
	if_ale.o if_lii.o siisata_pci.o if_bwi_pci.o mvsata_pci.o \
	hdaudio.o hdaudio_ids.o hdafg.o hdafg_dd.o hdaudio_pci.o if_et.o \
	cxdtv.o cxdtv_boards.o coram.o virtio.o ld_virtio.o viomb.o \
	if_vioif.o agp.o agpbusprint.o agp_ali.o agp_amd.o agp_i810.o \
	agp_intel.o agp_sis.o agp_via.o agp_amd64.o aapic.o agp_machdep.o \
	sg_dma.o pchb.o pcib.o amdtemp.o ichlpcib.o fwhrng.o isa.o \
	isabusprint.o isadma.o com_isa.o lpt_isa.o wdc_isa.o pckbc_isa.o \
	pcppi.o midi_pcppi.o attimer_isa.o tpm_isa.o clock.o rtc.o tsc.o \
	pckbport.o pckbd.o wskbdmap_mfii.o pms.o synaptics.o elantech.o \
	fd.o fdc_isa.o netbsd32_core.o netbsd32_exec_elf32.o \
	netbsd32_netbsd.o netbsd32_event.o netbsd32_execve.o \
	netbsd32_fs.o netbsd32_ioctl.o netbsd32_ipc.o netbsd32_lwp.o \
	netbsd32_mod.o netbsd32_sa.o netbsd32_select.o netbsd32_sem.o \
	netbsd32_signal.o netbsd32_socket.o netbsd32_sysctl.o \
	netbsd32_time.o netbsd32_wait.o netbsd32_sysent.o \
	netbsd32_compat_20.o netbsd32_compat_30.o netbsd32_compat_43.o \
	netbsd32_compat_50.o netbsd32_machdep.o netbsd32_sigcode.o \
	netbsd32_syscall.o linux_blkio.o linux_cdrom.o linux_errno.o \
	linux_exec.o linux_exec_elf32.o linux_exec_elf64.o linux_fdio.o \
	linux_file.o linux_hdio.o linux_ioctl.o linux_ipc.o linux_misc.o \
	linux_mod.o linux_mtio.o linux_sched.o linux_sg.o linux_signal.o \
	linux_signo.o linux_socket.o linux_sysctl.o linux_termios.o \
	linux_time.o linux_commons.o linux_exec_machdep.o linux_machdep.o \
	linux_syscalls.o linux_sysent.o linux_sigcode.o linux_syscall.o \
	linux_trap.o linux32_dirent.o linux32_exec.o linux32_exec_elf32.o \
	linux32_fcntl.o linux32_ioctl.o linux32_misc.o linux32_mman.o \
	linux32_mod.o linux32_resource.o linux32_sched.o linux32_signal.o \
	linux32_socket.o linux32_socketcall.o linux32_stat.o \
	linux32_sysctl.o linux32_sysinfo.o linux32_time.o \
	linux32_termios.o linux32_unistd.o linux32_utsname.o \
	linux32_wait.o linux32_syscalls.o linux32_sysent.o \
	linux32_machdep.o linux32_missing.o linux32_ipccall.o \
	linux32_uid16.o linux_oldmmap.o linux32_sigcode.o \
	linux32_syscall.o ossaudio.o cardslot.o cardbus.o cardbus_map.o \
	cardbus_exrom.o rbus.o if_ex_cardbus.o if_fxp_cardbus.o \
	com_cardbus.o if_atw_cardbus.o if_rtw_cardbus.o if_ral_cardbus.o \
	if_tlp_cardbus.o ohci_cardbus.o uhci_cardbus.o ehci_cardbus.o \
	fwohci_cardbus.o ahc_cardbus.o if_rtk_cardbus.o if_re_cardbus.o \
	adv_cardbus.o if_ath_cardbus.o njata_cardbus.o siisata_cardbus.o \
	rbus_machdep.o pcmcia.o pcmcia_cis.o pcmcia_cis_quirks.o \
	if_ep_pcmcia.o if_ne_pcmcia.o aic_pcmcia.o esp_pcmcia.o \
	spc_pcmcia.o com_pcmcia.o wdc_pcmcia.o if_sm_pcmcia.o \
	if_mbe_pcmcia.o pcmcom.o if_cnw.o mhzc.o if_ray.o if_awi_pcmcia.o \
	if_wi_pcmcia.o xirc.o if_xi.o if_cs_pcmcia.o if_an_pcmcia.o \
	bt3c.o slhci_pcmcia.o btbc.o usb.o usbdi.o usbdi_util.o usb_mem.o \
	usb_subr.o usb_quirks.o uhub.o ezload.o uaudio.o umidi.o \
	umidi_quirks.o ucom.o ugen.o uhidev.o uhid.o ukbd.o ukbdmap.o \
	ums.o uts.o uep.o ucycom.o ulpt.o umass.o umass_isdata.o \
	umass_quirks.o umass_scsipi.o uirda.o stuirda.o ustir.o irmce.o \
	ubt.o aubtfwl.o pseye.o uvideo.o auvitek.o auvitek_audio.o \
	auvitek_board.o auvitek_dtv.o auvitek_i2c.o auvitek_video.o \
	emdtv.o emdtv_board.o emdtv_dtv.o emdtv_i2c.o emdtv_ir.o urio.o \
	uipad.o uberry.o uvisor.o ugensa.o u3g.o uyap.o udsbr.o if_aue.o \
	if_cdce.o if_cue.o if_kue.o if_upl.o if_url.o if_axe.o if_udav.o \
	if_otus.o umodem_common.o umodem.o uftdi.o uplcom.o umct.o \
	uvscom.o ubsa_common.o ubsa.o uipaq.o ukyopon.o uslsa.o uchcom.o \
	uscanner.o usscanner.o if_atu.o if_ural.o if_rum.o utoppy.o \
	if_zyd.o udl.o uhso.o if_urndis.o if_urtwn.o if_urtw.o bthub.o \
	bthidev.o btkbd.o btms.o btmagic.o btsco.o btuart.o bcsp.o \
	sdmmc.o sdmmc_cis.o sdmmc_io.o sdmmc_mem.o ld_sdmmc.o sbt.o \
	fwohci.o firewire.o fwdev.o fwmem.o fwdma.o fwcrom.o if_fwip.o \
	sbp.o OsdEnvironment.o OsdHardware.o OsdInterrupt.o OsdMemory.o \
	OsdMisc.o OsdSchedule.o OsdStream.o OsdSynch.o dsargs.o \
	dscontrol.o dsfield.o dsinit.o dsmethod.o dsmthdat.o dsobject.o \
	dsopcode.o dsutils.o dswexec.o dswload.o dswload2.o dswscope.o \
	dswstate.o evevent.o evglock.o evgpe.o evgpeblk.o evgpeinit.o \
	evgpeutil.o evmisc.o evregion.o evrgnini.o evsci.o evxface.o \
	evxfevnt.o evxfgpe.o evxfregn.o exconfig.o exconvrt.o excreate.o \
	exdebug.o exdump.o exfield.o exfldio.o exmisc.o exmutex.o \
	exnames.o exoparg1.o exoparg2.o exoparg3.o exoparg6.o exprep.o \
	exregion.o exresnte.o exresolv.o exresop.o exstore.o exstoren.o \
	exstorob.o exsystem.o exutils.o hwacpi.o hwgpe.o hwpci.o hwregs.o \
	hwsleep.o hwtimer.o hwvalid.o hwxface.o nsaccess.o nsalloc.o \
	nsdump.o nsdumpdv.o nseval.o nsinit.o nsload.o nsnames.o \
	nsobject.o nsparse.o nspredef.o nsrepair.o nsrepair2.o nssearch.o \
	nsutils.o nswalk.o nsxfeval.o nsxfname.o nsxfobj.o psargs.o \
	psloop.o psopcode.o psparse.o psscope.o pstree.o psutils.o \
	pswalk.o psxface.o rsaddr.o rscalc.o rscreate.o rsdump.o rsinfo.o \
	rsio.o rsirq.o rslist.o rsmemory.o rsmisc.o rsutils.o rsxface.o \
	tbfadt.o tbfind.o tbinstal.o tbutils.o tbxface.o tbxfroot.o \
	utalloc.o utcache.o utcopy.o utdebug.o utdecode.o utdelete.o \
	uteval.o utglobal.o utids.o utinit.o utlock.o utmath.o utmisc.o \
	utmutex.o utobject.o utosi.o utresrc.o utstate.o uttrack.o \
	utxface.o utxferror.o acpi.o acpi_debug.o acpi_pci.o \
	acpi_pci_link.o acpi_power.o acpi_quirks.o acpi_resource.o \
	acpi_srat.o acpi_slit.o acpi_timer.o acpi_util.o acpi_wakedev.o \
	acpi_ec.o acpi_lid.o acpi_button.o acpi_acad.o acpi_bat.o \
	acpi_display.o acpi_fan.o acpi_tz.o acpi_wdrt.o pckbc_acpi.o \
	mpu_acpi.o joy_acpi.o pcppi_acpi.o attimer_acpi.o hpet_acpi.o \
	asus_acpi.o ug_acpi.o sony_acpi.o spic_acpi.o thinkpad_acpi.o \
	dalb_acpi.o wb_acpi.o aibs_acpi.o fujbp_acpi.o fujhk_acpi.o \
	wmi_acpi.o wmi_dell.o wmi_eeepc.o wmi_hp.o wmi_msi.o \
	acpi_wakeup_low.o

CFILES=	$S/crypto/des/des_ecb.c $S/crypto/des/des_setkey.c \
	$S/crypto/des/des_enc.c $S/crypto/des/des_cbc.c \
	$S/crypto/blowfish/bf_ecb.c $S/crypto/blowfish/bf_enc.c \
	$S/crypto/blowfish/bf_cbc.c $S/crypto/blowfish/bf_skey.c \
	$S/crypto/cast128/cast128.c $S/crypto/rijndael/rijndael-alg-fst.c \
	$S/crypto/rijndael/rijndael-api-fst.c \
	$S/crypto/rijndael/rijndael.c $S/crypto/skipjack/skipjack.c \
	$S/crypto/camellia/camellia.c $S/crypto/camellia/camellia-api.c \
	$S/opencrypto/criov.c $S/opencrypto/xform.c \
	$S/opencrypto/crypto.c $S/opencrypto/cryptosoft.c \
	$S/opencrypto/deflate.c $S/opencrypto/aesxcbcmac.c \
	$S/opencrypto/gmac.c $S/opencrypto/cryptodev.c \
	$S/opencrypto/ocryptodev.c \
	$S/crypto/nist_ctr_drbg/nist_ctr_drbg.c \
	$S/dev/sysmon/sysmon_taskq.c $S/dev/sysmon/sysmon_power.c \
	$S/dev/sysmon/sysmon_envsys.c \
	$S/dev/sysmon/sysmon_envsys_events.c \
	$S/dev/sysmon/sysmon_envsys_tables.c \
	$S/dev/sysmon/sysmon_envsys_util.c $S/dev/sysmon/sysmon_wdog.c \
	$S/dev/sysmon/sysmon.c $S/net80211/ieee80211.c \
	$S/net80211/ieee80211_acl.c $S/net80211/ieee80211_amrr.c \
	$S/net80211/ieee80211_crypto.c \
	$S/net80211/ieee80211_crypto_ccmp.c \
	$S/net80211/ieee80211_crypto_none.c \
	$S/net80211/ieee80211_crypto_tkip.c \
	$S/net80211/ieee80211_crypto_wep.c $S/net80211/ieee80211_input.c \
	$S/net80211/ieee80211_ioctl.c $S/net80211/ieee80211_netbsd.c \
	$S/net80211/ieee80211_node.c $S/net80211/ieee80211_output.c \
	$S/net80211/ieee80211_proto.c $S/net80211/ieee80211_rssadapt.c \
	$S/net80211/ieee80211_xauth.c $S/netatalk/aarp.c \
	$S/netatalk/at_control.c $S/netatalk/at_proto.c \
	$S/netatalk/ddp_input.c $S/netatalk/ddp_output.c \
	$S/netatalk/ddp_usrreq.c $S/netbt/bt_proto.c $S/netbt/bt_sysctl.c \
	$S/netbt/hci_event.c $S/netbt/hci_ioctl.c $S/netbt/hci_link.c \
	$S/netbt/hci_misc.c $S/netbt/hci_socket.c $S/netbt/hci_unit.c \
	$S/netbt/l2cap_lower.c $S/netbt/l2cap_misc.c \
	$S/netbt/l2cap_signal.c $S/netbt/l2cap_socket.c \
	$S/netbt/l2cap_upper.c $S/netbt/rfcomm_dlc.c \
	$S/netbt/rfcomm_session.c $S/netbt/rfcomm_socket.c \
	$S/netbt/rfcomm_upper.c $S/netbt/sco_socket.c \
	$S/netbt/sco_upper.c $S/netinet/igmp.c $S/netinet/in.c \
	$S/netinet/in_offload.c $S/netinet/in_pcb.c $S/netinet/in_proto.c \
	$S/netinet/ip_icmp.c $S/netinet/ip_id.c $S/netinet/ip_input.c \
	$S/netinet/ip_output.c $S/netinet/ip_reass.c $S/netinet/raw_ip.c \
	$S/netinet/tcp_input.c $S/netinet/tcp_output.c \
	$S/netinet/tcp_sack.c $S/netinet/tcp_subr.c \
	$S/netinet/tcp_timer.c $S/netinet/tcp_usrreq.c \
	$S/netinet/tcp_congctl.c $S/netinet/tcp_vtw.c \
	$S/netinet/udp_usrreq.c $S/netinet/rfc6056.c $S/netinet6/dest6.c \
	$S/netinet6/frag6.c $S/netinet6/icmp6.c $S/netinet6/in6.c \
	$S/netinet6/in6_cksum.c $S/netinet6/in6_ifattach.c \
	$S/netinet6/in6_offload.c $S/netinet6/in6_pcb.c \
	$S/netinet6/in6_proto.c $S/netinet6/in6_src.c \
	$S/netinet6/ip6_flow.c $S/netinet6/ip6_forward.c \
	$S/netinet6/ip6_id.c $S/netinet6/ip6_input.c \
	$S/netinet6/ip6_mroute.c $S/netinet6/ip6_output.c \
	$S/netinet6/mld6.c $S/netinet6/nd6.c $S/netinet6/nd6_nbr.c \
	$S/netinet6/nd6_rtr.c $S/netinet6/raw_ip6.c $S/netinet6/route6.c \
	$S/netinet6/scope6.c $S/netinet6/udp6_output.c \
	$S/netinet6/udp6_usrreq.c $S/netsmb/iconv.c $S/netsmb/smb_conn.c \
	$S/netsmb/smb_crypt.c $S/netsmb/smb_dev.c $S/netsmb/smb_iod.c \
	$S/netsmb/smb_rq.c $S/netsmb/smb_smb.c $S/netsmb/smb_subr.c \
	$S/netsmb/smb_trantcp.c $S/netsmb/smb_usr.c \
	$S/netsmb/subr_mchain.c $S/dist/ipf/netinet/fil.c \
	$S/dist/ipf/netinet/ip_auth.c $S/dist/ipf/netinet/ip_fil_netbsd.c \
	$S/dist/ipf/netinet/ip_frag.c $S/dist/ipf/netinet/ip_htable.c \
	$S/dist/ipf/netinet/ip_log.c $S/dist/ipf/netinet/ip_lookup.c \
	$S/dist/ipf/netinet/ip_nat.c $S/dist/ipf/netinet/ip_pool.c \
	$S/dist/ipf/netinet/ip_proxy.c $S/dist/ipf/netinet/ip_state.c \
	$S/dist/ipf/netinet/ip_fil_compat.c $S/ddb/db_access.c \
	$S/ddb/db_break.c $S/ddb/db_command.c $S/ddb/db_cpu.c \
	$S/ddb/db_examine.c $S/ddb/db_expr.c $S/ddb/db_input.c \
	$S/ddb/db_kernel.c $S/ddb/db_lex.c $S/ddb/db_lwp.c \
	$S/ddb/db_output.c $S/ddb/db_proc.c $S/ddb/db_print.c \
	$S/ddb/db_run.c $S/ddb/db_sym.c $S/ddb/db_trap.c \
	$S/ddb/db_variables.c $S/ddb/db_watch.c $S/ddb/db_write_cmd.c \
	$S/ddb/db_xxx.c $S/dev/dtv/dtv_buffer.c $S/dev/dtv/dtv_demux.c \
	$S/dev/dtv/dtv_device.c $S/dev/dtv/dtv_ioctl.c \
	$S/dev/dtv/dtv_scatter.c $S/dev/dtv/dtv_math.c $S/dev/i2c/i2c.c \
	$S/dev/i2c/i2c_exec.c $S/dev/i2c/i2c_subr.c \
	$S/dev/i2c/i2c_bitbang.c $S/dev/i2c/au8522.c $S/dev/i2c/lg3303.c \
	$S/dev/i2c/xc3028.c $S/dev/i2c/xc5k.c $S/dev/i2c/tvpll.c \
	$S/dev/i2c/tvpll_tuners.c $S/dev/i2c/nxt2k.c $S/dev/i2c/mt2131.c \
	$S/dev/i2c/cx24227.c $S/dev/i2c/at24cxx.c $S/dev/ir/irframe.c \
	$S/dev/ir/cir.c $S/dev/ir/irframe_tty.c $S/dev/ir/ir.c \
	$S/dev/ir/sir.c $S/dev/ic/lpt.c $S/dev/stbi/stb_image.c \
	$S/dev/splash/splash.c $S/dev/videomode/videomode.c \
	$S/dev/videomode/edid.c $S/dev/videomode/vesagtf.c \
	$S/dev/ic/tpm.c $S/dev/ld.c $S/dev/mii/mii.c \
	$S/dev/mii/mii_bitbang.c $S/dev/mii/mii_physubr.c \
	$S/dev/mii/mii_ethersubr.c $S/dev/mii/ukphy_subr.c \
	$S/dev/mii/acphy.c $S/dev/mii/amhphy.c $S/dev/mii/bmtphy.c \
	$S/dev/mii/brgphy.c $S/dev/mii/tlphy.c $S/dev/mii/nsphy.c \
	$S/dev/mii/nsphyter.c $S/dev/mii/gentbi.c $S/dev/mii/glxtphy.c \
	$S/dev/mii/gphyter.c $S/dev/mii/qsphy.c $S/dev/mii/inphy.c \
	$S/dev/mii/iophy.c $S/dev/mii/exphy.c $S/dev/mii/lxtphy.c \
	$S/dev/mii/makphy.c $S/dev/mii/icsphy.c $S/dev/mii/igphy.c \
	$S/dev/mii/ikphy.c $S/dev/mii/sqphy.c $S/dev/mii/tqphy.c \
	$S/dev/mii/dmphy.c $S/dev/mii/pnaphy.c $S/dev/mii/rgephy.c \
	$S/dev/mii/urlphy.c $S/dev/mii/ukphy.c $S/dev/mii/ciphy.c \
	$S/dev/mii/rlphy.c $S/dev/mii/atphy.c $S/dev/mii/ihphy.c \
	$S/dev/mii/etphy.c $S/dev/raidframe/rf_acctrace.c \
	$S/dev/raidframe/rf_alloclist.c $S/dev/raidframe/rf_aselect.c \
	$S/dev/raidframe/rf_callback.c \
	$S/dev/raidframe/rf_chaindecluster.c \
	$S/dev/raidframe/rf_copyback.c $S/dev/raidframe/rf_cvscan.c \
	$S/dev/raidframe/rf_dagdegrd.c $S/dev/raidframe/rf_dagdegwr.c \
	$S/dev/raidframe/rf_dagffrd.c $S/dev/raidframe/rf_dagffwr.c \
	$S/dev/raidframe/rf_dagfuncs.c $S/dev/raidframe/rf_dagutils.c \
	$S/dev/raidframe/rf_debugMem.c $S/dev/raidframe/rf_debugprint.c \
	$S/dev/raidframe/rf_decluster.c $S/dev/raidframe/rf_declusterPQ.c \
	$S/dev/raidframe/rf_diskqueue.c $S/dev/raidframe/rf_disks.c \
	$S/dev/raidframe/rf_driver.c $S/dev/raidframe/rf_engine.c \
	$S/dev/raidframe/rf_evenodd.c \
	$S/dev/raidframe/rf_evenodd_dagfuncs.c \
	$S/dev/raidframe/rf_evenodd_dags.c $S/dev/raidframe/rf_fifo.c \
	$S/dev/raidframe/rf_interdecluster.c \
	$S/dev/raidframe/rf_invertq.c $S/dev/raidframe/rf_layout.c \
	$S/dev/raidframe/rf_map.c $S/dev/raidframe/rf_mcpair.c \
	$S/dev/raidframe/rf_netbsdkintf.c $S/dev/raidframe/rf_nwayxor.c \
	$S/dev/raidframe/rf_options.c $S/dev/raidframe/rf_paritylog.c \
	$S/dev/raidframe/rf_paritylogDiskMgr.c \
	$S/dev/raidframe/rf_paritylogging.c \
	$S/dev/raidframe/rf_parityloggingdags.c \
	$S/dev/raidframe/rf_paritymap.c $S/dev/raidframe/rf_parityscan.c \
	$S/dev/raidframe/rf_pq.c $S/dev/raidframe/rf_pqdeg.c \
	$S/dev/raidframe/rf_pqdegdags.c $S/dev/raidframe/rf_psstatus.c \
	$S/dev/raidframe/rf_raid0.c $S/dev/raidframe/rf_raid1.c \
	$S/dev/raidframe/rf_raid4.c $S/dev/raidframe/rf_raid5.c \
	$S/dev/raidframe/rf_raid5_rotatedspare.c \
	$S/dev/raidframe/rf_reconbuffer.c $S/dev/raidframe/rf_reconmap.c \
	$S/dev/raidframe/rf_reconstruct.c $S/dev/raidframe/rf_reconutil.c \
	$S/dev/raidframe/rf_revent.c $S/dev/raidframe/rf_shutdown.c \
	$S/dev/raidframe/rf_sstf.c $S/dev/raidframe/rf_states.c \
	$S/dev/raidframe/rf_stripelocks.c $S/dev/raidframe/rf_strutils.c \
	$S/dev/raidframe/rf_utils.c $S/dev/raidframe/rf_compat50.c \
	$S/dev/ic/aic6360.c $S/dev/ic/smc93cx6.c $S/dev/ic/aic7xxx.c \
	$S/dev/ic/aic7xxx_osm.c $S/dev/ic/aic7xxx_seeprom.c \
	$S/dev/ic/aic79xx.c $S/dev/ic/aic79xx_osm.c $S/dev/ic/dpt.c \
	$S/dev/ic/cac.c $S/dev/ic/ld_cac.c $S/dev/ic/ciss.c \
	$S/dev/ic/mlx.c $S/dev/ic/ld_mlx.c $S/dev/ic/icp.c \
	$S/dev/ic/icp_ioctl.c $S/dev/ic/ld_icp.c $S/dev/ic/icpsp.c \
	$S/dev/ic/aac.c $S/dev/ic/ld_aac.c $S/dev/ic/adv.c \
	$S/dev/ic/advlib.c $S/dev/ic/advmcode.c $S/dev/ic/adw.c \
	$S/dev/ic/bha.c $S/dev/ic/iha.c $S/dev/ic/isp.c \
	$S/dev/ic/isp_library.c $S/dev/ic/isp_netbsd.c $S/dev/ic/mfi.c \
	$S/dev/ic/mpt.c $S/dev/ic/mpt_debug.c $S/dev/ic/mpt_netbsd.c \
	$S/dev/ic/siop_common.c $S/dev/ic/siop.c $S/dev/ic/esiop.c \
	$S/dev/ic/an.c $S/dev/ic/awi.c $S/dev/ic/am79c930.c \
	$S/dev/ic/wi.c $S/external/isc/atheros_hal/dist/ah.c \
	$S/external/isc/atheros_hal/dist/ah_eeprom_v1.c \
	$S/external/isc/atheros_hal/dist/ah_eeprom_v3.c \
	$S/external/isc/atheros_hal/dist/ah_eeprom_v14.c \
	$S/external/isc/atheros_hal/dist/ah_eeprom_v4k.c \
	$S/external/isc/atheros_hal/dist/ah_regdomain.c \
	$S/external/isc/atheros_hal/ic/ah_osdep.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_attach.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_beacon.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_interrupts.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_keycache.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_misc.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_phy.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_power.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_recv.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_reset.c \
	$S/external/isc/atheros_hal/dist/ar5210/ar5210_xmit.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_attach.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_beacon.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_interrupts.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_keycache.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_misc.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_phy.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_power.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_recv.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_reset.c \
	$S/external/isc/atheros_hal/dist/ar5211/ar5211_xmit.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar2316.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar2317.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar2413.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar2425.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5111.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5112.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5413.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_ani.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_attach.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_beacon.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_eeprom.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_gpio.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_interrupts.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_keycache.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_misc.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_phy.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_power.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_recv.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_reset.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_rfgain.c \
	$S/external/isc/atheros_hal/dist/ar5212/ar5212_xmit.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar2133.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_ani.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_attach.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_beacon.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_cal.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_adcdc.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_adcgain.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_iq.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_eeprom.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_gpio.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_interrupts.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_keycache.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_misc.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_phy.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_power.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_recv.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_reset.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar5416_xmit.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9160_attach.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9280.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9280_attach.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9285.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9285_attach.c \
	$S/external/isc/atheros_hal/dist/ar5416/ar9285_reset.c \
	$S/dev/ic/ath.c $S/dev/ic/ath_netbsd.c $S/dev/ic/athrate-sample.c \
	$S/dev/ic/atw.c $S/dev/ic/rtw.c $S/dev/ic/rtwphy.c \
	$S/dev/ic/rtwphyio.c $S/dev/ic/rt2560.c $S/dev/ic/rt2661.c \
	$S/dev/ic/elink3.c $S/dev/ic/elinkxl.c $S/dev/ic/am79900.c \
	$S/dev/ic/lance.c $S/dev/ic/hme.c $S/dev/ic/dp8390.c \
	$S/dev/ic/pdq.c $S/dev/ic/pdq_ifsubr.c $S/dev/ic/cy.c \
	$S/dev/ic/midway.c $S/dev/ic/ncr53c9x.c $S/dev/ic/mb89352.c \
	$S/dev/ic/hd64570.c $S/dev/ic/i82557.c $S/dev/ic/smc91cxx.c \
	$S/dev/ic/smc83c170.c $S/dev/ic/mb86960.c $S/dev/ic/ne2000.c \
	$S/dev/ic/com.c $S/dev/ic/pckbc.c $S/dev/ic/attimer.c \
	$S/dev/ic/ug.c $S/dev/ic/rrunner.c $S/dev/ic/opl.c \
	$S/dev/ic/oplinstrs.c $S/dev/ic/mpu.c $S/dev/ic/ac97.c \
	$S/dev/ic/rtl80x9.c $S/dev/ic/rtl81x9.c $S/dev/ic/rtl8169.c \
	$S/dev/ic/wdc.c $S/dev/ic/ninjaata32.c $S/dev/ic/ahcisata_core.c \
	$S/dev/ic/siisata.c $S/dev/ic/mvsata.c $S/dev/ic/tulip.c \
	$S/dev/ic/aic6915.c $S/dev/ic/dl10019.c $S/dev/ic/ax88190.c \
	$S/dev/ic/cs89x0.c $S/dev/ic/acpipmtimer.c $S/dev/ic/hpet.c \
	$S/dev/pci/drm/drm_agpsupport.c $S/dev/pci/drm/drm_bufs.c \
	$S/dev/pci/drm/drm_context.c $S/dev/pci/drm/drm_drv.c \
	$S/dev/pci/drm/drm_irq.c $S/dev/pci/drm/drm_lock.c \
	$S/dev/pci/drm/drm_memory.c $S/dev/pci/drm/drm_scatter.c \
	$S/dev/pci/drm/i915_drv.c $S/dev/pci/drm/i915_irq.c \
	$S/dev/pci/drm/i915_suspend.c $S/dev/ic/pcdisplay_subr.c \
	$S/dev/ic/pcdisplay_chars.c $S/dev/ic/vga.c $S/dev/ic/vga_subr.c \
	$S/dev/ic/vga_common.c $S/dev/wscons/wsdisplay.c \
	$S/dev/wscons/wsdisplay_compat_usl.c \
	$S/dev/wscons/wsdisplay_util.c $S/dev/wscons/wsemulconf.c \
	$S/dev/wscons/wsemul_dumb.c $S/dev/wscons/wsemul_vt100.c \
	$S/dev/wscons/wsemul_vt100_subr.c \
	$S/dev/wscons/wsemul_vt100_chars.c \
	$S/dev/wscons/wsemul_vt100_keys.c $S/dev/wscons/wsevent.c \
	$S/dev/wscons/wskbd.c $S/dev/wscons/wskbdutil.c \
	$S/dev/wscons/wsmouse.c $S/dev/wscons/wsmux.c \
	$S/dev/wscons/tpcalib.c $S/dev/wscons/mra.c \
	$S/dev/wscons/wsdisplay_vcons.c \
	$S/dev/wscons/wsdisplay_vcons_util.c $S/dev/rasops/rasops.c \
	$S/dev/rasops/rasops_masks.c $S/dev/rasops/rasops1.c \
	$S/dev/rasops/rasops2.c $S/dev/rasops/rasops8.c \
	$S/dev/rasops/rasops15.c $S/dev/rasops/rasops24.c \
	$S/dev/rasops/rasops32.c $S/dev/wsfont/wsfont.c \
	$S/dev/wsfont/wsfontdev.c $S/dev/wsfb/genfb.c \
	$S/dev/usb/usbroothub_subr.c $S/dev/usb/uhci.c $S/dev/usb/ohci.c \
	$S/dev/usb/ehci.c $S/dev/ic/sl811hs.c $S/dev/usb/hid.c \
	$S/dev/sdmmc/sdhc.c $S/dev/ic/w83l518d.c \
	$S/dev/ic/w83l518d_sdmmc.c $S/dev/ic/mtd803.c $S/dev/ic/spic.c \
	$S/dev/ic/bwi.c $S/kern/kern_verifiedexec.c \
	$S/dev/verified_exec.c $S/kern/kern_drvctl.c \
	$S/dev/putter/putter.c $S/coda/coda_namecache.c \
	$S/coda/coda_subr.c $S/coda/coda_venus.c $S/coda/coda_vfsops.c \
	$S/coda/coda_vnops.c $S/coda/coda_psdev.c \
	$S/fs/cd9660/cd9660_bmap.c $S/fs/cd9660/cd9660_lookup.c \
	$S/fs/cd9660/cd9660_node.c $S/fs/cd9660/cd9660_rrip.c \
	$S/fs/cd9660/cd9660_util.c $S/fs/cd9660/cd9660_vfsops.c \
	$S/fs/cd9660/cd9660_vnops.c $S/fs/msdosfs/msdosfs_conv.c \
	$S/fs/msdosfs/msdosfs_denode.c $S/fs/msdosfs/msdosfs_fat.c \
	$S/fs/msdosfs/msdosfs_lookup.c $S/fs/msdosfs/msdosfs_vfsops.c \
	$S/fs/msdosfs/msdosfs_vnops.c $S/fs/ntfs/ntfs_compr.c \
	$S/fs/ntfs/ntfs_conv.c $S/fs/ntfs/ntfs_ihash.c \
	$S/fs/ntfs/ntfs_subr.c $S/fs/ntfs/ntfs_vfsops.c \
	$S/fs/ntfs/ntfs_vnops.c $S/fs/ptyfs/ptyfs_subr.c \
	$S/fs/ptyfs/ptyfs_vfsops.c $S/fs/ptyfs/ptyfs_vnops.c \
	$S/fs/puffs/puffs_compat.c $S/fs/puffs/puffs_msgif.c \
	$S/fs/puffs/puffs_node.c $S/fs/puffs/puffs_subr.c \
	$S/fs/puffs/puffs_vfsops.c $S/fs/puffs/puffs_vnops.c \
	$S/fs/smbfs/smbfs_io.c $S/fs/smbfs/smbfs_kq.c \
	$S/fs/smbfs/smbfs_node.c $S/fs/smbfs/smbfs_smb.c \
	$S/fs/smbfs/smbfs_subr.c $S/fs/smbfs/smbfs_vfsops.c \
	$S/fs/smbfs/smbfs_vnops.c $S/fs/tmpfs/tmpfs_fifoops.c \
	$S/fs/tmpfs/tmpfs_mem.c $S/fs/tmpfs/tmpfs_specops.c \
	$S/fs/tmpfs/tmpfs_subr.c $S/fs/tmpfs/tmpfs_vfsops.c \
	$S/fs/tmpfs/tmpfs_vnops.c $S/fs/union/union_subr.c \
	$S/fs/union/union_vfsops.c $S/fs/union/union_vnops.c \
	$S/miscfs/fdesc/fdesc_vfsops.c $S/miscfs/fdesc/fdesc_vnops.c \
	$S/miscfs/kernfs/kernfs_subr.c $S/miscfs/kernfs/kernfs_vfsops.c \
	$S/miscfs/kernfs/kernfs_vnops.c $S/miscfs/nullfs/null_vfsops.c \
	$S/miscfs/nullfs/null_vnops.c $S/miscfs/overlay/overlay_vfsops.c \
	$S/miscfs/overlay/overlay_vnops.c \
	$S/miscfs/procfs/procfs_cmdline.c $S/miscfs/procfs/procfs_ctl.c \
	$S/miscfs/procfs/procfs_fd.c $S/miscfs/procfs/procfs_fpregs.c \
	$S/miscfs/procfs/procfs_linux.c $S/miscfs/procfs/procfs_map.c \
	$S/miscfs/procfs/procfs_mem.c $S/miscfs/procfs/procfs_note.c \
	$S/miscfs/procfs/procfs_regs.c $S/miscfs/procfs/procfs_status.c \
	$S/miscfs/procfs/procfs_subr.c $S/miscfs/procfs/procfs_vfsops.c \
	$S/miscfs/procfs/procfs_vnops.c $S/miscfs/umapfs/umap_subr.c \
	$S/miscfs/umapfs/umap_vfsops.c $S/miscfs/umapfs/umap_vnops.c \
	$S/nfs/krpc_subr.c $S/nfs/nfs_bio.c $S/nfs/nfs_boot.c \
	$S/nfs/nfs_bootdhcp.c $S/nfs/nfs_bootparam.c \
	$S/nfs/nfs_clntsocket.c $S/nfs/nfs_clntsubs.c $S/nfs/nfs_export.c \
	$S/nfs/nfs_iod.c $S/nfs/nfs_kq.c $S/nfs/nfs_node.c \
	$S/nfs/nfs_serv.c $S/nfs/nfs_socket.c $S/nfs/nfs_srvcache.c \
	$S/nfs/nfs_srvsubs.c $S/nfs/nfs_srvsocket.c $S/nfs/nfs_subs.c \
	$S/nfs/nfs_syscalls.c $S/nfs/nfs_vfsops.c $S/nfs/nfs_vnops.c \
	$S/ufs/ext2fs/ext2fs_alloc.c $S/ufs/ext2fs/ext2fs_balloc.c \
	$S/ufs/ext2fs/ext2fs_bmap.c $S/ufs/ext2fs/ext2fs_bswap.c \
	$S/ufs/ext2fs/ext2fs_inode.c $S/ufs/ext2fs/ext2fs_lookup.c \
	$S/ufs/ext2fs/ext2fs_readwrite.c $S/ufs/ext2fs/ext2fs_subr.c \
	$S/ufs/ext2fs/ext2fs_vfsops.c $S/ufs/ext2fs/ext2fs_vnops.c \
	$S/ufs/ffs/ffs_alloc.c $S/ufs/ffs/ffs_balloc.c \
	$S/ufs/ffs/ffs_inode.c $S/ufs/ffs/ffs_snapshot.c \
	$S/ufs/ffs/ffs_subr.c $S/ufs/ffs/ffs_tables.c \
	$S/ufs/ffs/ffs_vfsops.c $S/ufs/ffs/ffs_vnops.c \
	$S/ufs/ffs/ffs_wapbl.c $S/ufs/ffs/ffs_quota2.c \
	$S/ufs/lfs/lfs_alloc.c $S/ufs/lfs/lfs_balloc.c \
	$S/ufs/lfs/lfs_bio.c $S/ufs/lfs/lfs_cksum.c \
	$S/ufs/lfs/lfs_debug.c $S/ufs/lfs/lfs_inode.c \
	$S/ufs/lfs/lfs_itimes.c $S/ufs/lfs/lfs_segment.c \
	$S/ufs/lfs/lfs_subr.c $S/ufs/lfs/lfs_syscalls.c \
	$S/ufs/lfs/lfs_vfsops.c $S/ufs/lfs/lfs_vnops.c \
	$S/ufs/mfs/mfs_vfsops.c $S/ufs/mfs/mfs_vnops.c \
	$S/ufs/mfs/mfs_miniroot.c $S/ufs/ufs/ufs_bmap.c \
	$S/ufs/ufs/ufs_ihash.c $S/ufs/ufs/ufs_inode.c \
	$S/ufs/ufs/ufs_lookup.c $S/ufs/ufs/ufs_quota.c \
	$S/ufs/ufs/ufs_quota1.c $S/ufs/ufs/ufs_quota2.c \
	$S/ufs/ufs/quota1_subr.c $S/ufs/ufs/quota2_subr.c \
	$S/ufs/ufs/ufs_vfsops.c $S/ufs/ufs/ufs_vnops.c \
	$S/ufs/ufs/ufs_wapbl.c $S/uvm/uvm_amap.c $S/uvm/uvm_anon.c \
	$S/uvm/uvm_aobj.c $S/uvm/uvm_bio.c $S/uvm/uvm_coredump.c \
	$S/uvm/uvm_device.c $S/uvm/uvm_emap.c $S/uvm/uvm_fault.c \
	$S/uvm/uvm_glue.c $S/uvm/uvm_init.c $S/uvm/uvm_io.c \
	$S/uvm/uvm_km.c $S/uvm/uvm_loan.c $S/uvm/uvm_map.c \
	$S/uvm/uvm_meter.c $S/uvm/uvm_mmap.c $S/uvm/uvm_mremap.c \
	$S/uvm/uvm_object.c $S/uvm/uvm_page.c $S/uvm/uvm_pager.c \
	$S/uvm/uvm_pdaemon.c $S/uvm/uvm_pdpolicy_clock.c \
	$S/uvm/uvm_pglist.c $S/uvm/uvm_readahead.c $S/uvm/uvm_stat.c \
	$S/uvm/uvm_swap.c $S/uvm/uvm_unix.c $S/uvm/uvm_user.c \
	$S/uvm/uvm_vnode.c $S/secmodel/secmodel.c \
	$S/secmodel/suser/secmodel_suser.c \
	$S/secmodel/securelevel/secmodel_securelevel.c \
	$S/secmodel/extensions/secmodel_extensions.c \
	$S/secmodel/bsd44/secmodel_bsd44.c $S/compat/common/compat_mod.c \
	$S/compat/sa/compat_sa.c $S/conf/debugsyms.c $S/dev/auconv.c \
	$S/dev/audio.c $S/dev/aurateconv.c $S/dev/bio.c $S/dev/ccd.c \
	$S/dev/cgd.c $S/dev/cgd_crypto.c $S/dev/clock_subr.c \
	$S/dev/clockctl.c $S/dev/dksubr.c $S/dev/dkwedge/dk.c \
	$S/dev/dkwedge/dkwedge_gpt.c $S/dev/firmload.c $S/dev/fss.c \
	$S/dev/lockstat.c $S/dev/md.c $S/dev/midi.c $S/dev/midictl.c \
	$S/dev/midisyn.c $S/dev/mm.c $S/dev/mulaw.c $S/dev/radio.c \
	$S/dev/rndpseudo.c $S/dev/sequencer.c $S/dev/video.c $S/dev/vnd.c \
	$S/kern/bufq_disksort.c $S/kern/bufq_fcfs.c \
	$S/kern/bufq_priocscan.c $S/kern/core_elf32.c \
	$S/kern/core_elf64.c $S/kern/cnmagic.c $S/kern/exec_elf32.c \
	$S/kern/exec_elf64.c $S/kern/exec_script.c $S/kern/exec_subr.c \
	$S/kern/init_main.c $S/kern/init_sysctl.c \
	$S/kern/init_sysctl_base.c $S/kern/init_sysent.c \
	$S/kern/kern_acct.c $S/kern/kern_auth.c $S/kern/kern_cfglock.c \
	$S/kern/kern_clock.c $S/kern/kern_condvar.c $S/kern/kern_core.c \
	$S/kern/kern_cpu.c $S/kern/kern_descrip.c $S/kern/kern_event.c \
	$S/kern/kern_exec.c $S/kern/kern_exit.c $S/kern/kern_fork.c \
	$S/kern/kern_idle.c $S/kern/kern_hook.c $S/kern/kern_kthread.c \
	$S/kern/kern_ktrace.c $S/kern/kern_ksyms.c $S/kern/kern_lock.c \
	$S/kern/kern_lwp.c $S/kern/kern_malloc.c \
	$S/kern/kern_malloc_stdtype.c $S/kern/kern_module.c \
	$S/kern/kern_module_vfs.c $S/kern/kern_mutex.c \
	$S/kern/kern_mutex_obj.c $S/kern/kern_fileassoc.c \
	$S/kern/kern_ntptime.c $S/kern/kern_pax.c $S/kern/kern_physio.c \
	$S/kern/kern_pmf.c $S/kern/kern_proc.c $S/kern/kern_prot.c \
	$S/kern/kern_ras.c $S/kern/kern_rate.c $S/kern/kern_resource.c \
	$S/kern/kern_rndpool.c $S/kern/kern_rndq.c $S/kern/kern_runq.c \
	$S/kern/kern_rwlock.c $S/kern/kern_rwlock_obj.c \
	$S/kern/kern_sig.c $S/kern/kern_sleepq.c $S/kern/kern_softint.c \
	$S/kern/kern_ssp.c $S/kern/kern_stub.c $S/kern/kern_subr.c \
	$S/kern/kern_synch.c $S/kern/kern_syscall.c $S/kern/kern_sysctl.c \
	$S/kern/kern_tc.c $S/kern/kern_time.c $S/kern/kern_timeout.c \
	$S/kern/kern_turnstile.c $S/kern/kern_todr.c \
	$S/kern/kern_uidinfo.c $S/kern/kern_uuid.c $S/kern/kern_xxx.c \
	$S/kern/sched_4bsd.c $S/kern/subr_autoconf.c $S/kern/subr_blist.c \
	$S/kern/subr_bufq.c $S/kern/subr_callback.c $S/kern/subr_cprng.c \
	$S/kern/subr_cpufreq.c $S/kern/subr_copy.c $S/kern/subr_device.c \
	$S/kern/subr_devsw.c $S/kern/subr_disk.c $S/kern/subr_disk_open.c \
	$S/kern/subr_evcnt.c $S/kern/subr_exec_fd.c $S/kern/subr_extent.c \
	$S/kern/subr_hash.c $S/kern/subr_humanize.c $S/kern/subr_iostat.c \
	$S/kern/subr_kcpuset.c $S/kern/subr_kmem.c $S/kern/subr_kobj.c \
	$S/kern/subr_kobj_vfs.c $S/kern/subr_lockdebug.c \
	$S/kern/subr_log.c $S/kern/subr_lwp_specificdata.c \
	$S/kern/subr_once.c $S/kern/subr_optstr.c $S/kern/subr_pcq.c \
	$S/kern/subr_pcu.c $S/kern/subr_percpu.c $S/kern/subr_pool.c \
	$S/kern/subr_prf.c $S/kern/subr_prof.c $S/kern/subr_pserialize.c \
	$S/kern/subr_specificdata.c $S/kern/subr_time.c \
	$S/kern/subr_userconf.c $S/kern/subr_vmem.c \
	$S/kern/subr_workqueue.c $S/kern/subr_xcall.c $S/kern/sys_aio.c \
	$S/kern/sys_descrip.c $S/kern/sys_generic.c $S/kern/sys_module.c \
	$S/kern/sys_mqueue.c $S/kern/sys_lwp.c $S/kern/sys_pipe.c \
	$S/kern/sys_pmc.c $S/kern/sys_process.c $S/kern/sys_pset.c \
	$S/kern/sys_select.c $S/kern/sys_sig.c $S/kern/sys_sched.c \
	$S/kern/sys_socket.c $S/kern/sysv_ipc.c $S/kern/sysv_msg.c \
	$S/kern/sysv_sem.c $S/kern/sysv_shm.c $S/kern/tty.c \
	$S/kern/tty_conf.c $S/kern/tty_bsdpty.c $S/kern/tty_pty.c \
	$S/kern/tty_ptm.c $S/kern/tty_subr.c $S/kern/tty_tty.c \
	$S/kern/uipc_accf.c $S/kern/uipc_domain.c $S/kern/uipc_mbuf.c \
	$S/kern/uipc_mbuf2.c $S/net/link_proto.c $S/kern/uipc_proto.c \
	$S/kern/uipc_sem.c $S/kern/uipc_socket.c $S/kern/uipc_socket2.c \
	$S/kern/uipc_syscalls.c $S/kern/uipc_usrreq.c $S/kern/vfs_bio.c \
	$S/kern/vfs_cache.c $S/kern/vfs_cwd.c $S/kern/vfs_dirhash.c \
	$S/kern/vfs_getcwd.c $S/kern/vfs_hooks.c $S/kern/vfs_init.c \
	$S/kern/vfs_lockf.c $S/kern/vfs_lookup.c $S/kern/vfs_mount.c \
	$S/kern/vfs_quotactl.c $S/kern/vfs_subr.c $S/kern/vfs_syscalls.c \
	$S/kern/vfs_trans.c $S/kern/vfs_vnode.c $S/kern/vfs_vnops.c \
	$S/kern/vfs_wapbl.c $S/kern/vfs_xattr.c $S/kern/vnode_if.c \
	$S/miscfs/deadfs/dead_vnops.c $S/miscfs/fifofs/fifo_vnops.c \
	$S/miscfs/genfs/genfs_io.c $S/miscfs/genfs/genfs_rename.c \
	$S/miscfs/genfs/genfs_vfsops.c $S/miscfs/genfs/genfs_vnops.c \
	$S/miscfs/genfs/layer_subr.c $S/miscfs/genfs/layer_vfsops.c \
	$S/miscfs/genfs/layer_vnops.c $S/miscfs/specfs/spec_vnops.c \
	$S/miscfs/syncfs/sync_subr.c $S/miscfs/syncfs/sync_vnops.c \
	$S/net/bpf.c $S/net/bpf_filter.c $S/net/bpf_stub.c \
	$S/net/bsd-comp.c $S/net/if.c $S/net/if_atmsubr.c \
	$S/net/if_bridge.c $S/net/bridgestp.c $S/net/if_ethersubr.c \
	$S/net/if_fddisubr.c $S/net/if_gif.c $S/net/if_gre.c \
	$S/net/if_hippisubr.c $S/net/if_ieee1394subr.c $S/net/if_loop.c \
	$S/net/if_media.c $S/net/if_ppp.c $S/net/if_stf.c $S/net/if_sl.c \
	$S/net/if_spppsubr.c $S/net/if_strip.c $S/net/if_tap.c \
	$S/net/if_tun.c $S/net/if_vlan.c $S/net/if_pppoe.c $S/net/pfil.c \
	$S/net/ppp-deflate.c $S/net/ppp_tty.c $S/net/net_stats.c \
	$S/net/radix.c $S/net/raw_cb.c $S/net/raw_usrreq.c $S/net/route.c \
	$S/net/rtbl.c $S/net/rtsock.c $S/net/slcompress.c $S/net/zlib.c \
	$S/netinet/accf_data.c $S/netinet/accf_http.c $S/netinet/if_arp.c \
	$S/netinet/if_atm.c $S/netinet/in4_cksum.c $S/netinet/in_cksum.c \
	$S/netinet/in_gif.c $S/netinet/ip_ecn.c $S/netinet/ip_encap.c \
	$S/netinet6/in6_gif.c $S/dev/ic/joy.c $S/net/agr/if_agr.c \
	$S/net/agr/if_agrsoftc.c $S/net/agr/if_agrsubr.c \
	$S/net/agr/if_agrtimer.c $S/net/agr/if_agrmonitor.c \
	$S/net/agr/if_agrether.c $S/net/agr/if_agrether_hash.c \
	$S/net/agr/ieee8023ad_marker.c $S/net/agr/ieee8023ad_lacp.c \
	$S/net/agr/ieee8023ad_lacp_select.c \
	$S/net/agr/ieee8023ad_lacp_timer.c \
	$S/net/agr/ieee8023ad_lacp_sm_rx.c \
	$S/net/agr/ieee8023ad_lacp_sm_mux.c \
	$S/net/agr/ieee8023ad_lacp_sm_ptx.c \
	$S/net/agr/ieee8023ad_lacp_sm_tx.c \
	$S/net/agr/ieee8023ad_lacp_debug.c $S/net/agr/ieee8023_tlv.c \
	$S/dev/pad/pad.c $S/dev/pad/padvol.c \
	$S/../common/lib/libx86emu/x86emu.c \
	$S/../common/lib/libx86emu/x86emu_i8254.c \
	$S/../common/lib/libx86emu/x86emu_util.c $S/arch/x86/x86/cpu.c \
	$S/dev/acpi/acpi_cpu.c $S/dev/acpi/acpi_cpu_cstate.c \
	$S/dev/acpi/acpi_cpu_pstate.c $S/dev/acpi/acpi_cpu_tstate.c \
	$S/arch/x86/acpi/acpi_cpu_md.c $S/arch/x86/x86/coretemp.c \
	$S/arch/x86/x86/est.c $S/arch/x86/x86/intel_busclock.c \
	$S/arch/x86/x86/powernow.c $S/arch/x86/x86/apic.c \
	$S/arch/x86/x86/bus_dma.c $S/arch/x86/x86/bus_space.c \
	$S/arch/x86/x86/consinit.c $S/arch/x86/x86/core_machdep.c \
	$S/arch/x86/x86/cpu_topology.c $S/arch/x86/x86/db_trace.c \
	$S/arch/x86/x86/errata.c $S/arch/x86/x86/genfb_machdep.c \
	$S/arch/x86/x86/identcpu.c $S/arch/x86/x86/i8259.c \
	$S/arch/x86/x86/intr.c $S/arch/x86/x86/nmi.c \
	$S/arch/x86/x86/idt.c $S/arch/x86/x86/ipi.c \
	$S/arch/x86/x86/mtrr_i686.c $S/arch/x86/x86/patch.c \
	$S/arch/x86/x86/platform.c $S/arch/x86/x86/pmap.c \
	$S/arch/x86/x86/pmap_tlb.c $S/arch/x86/x86/procfs_machdep.c \
	$S/arch/x86/x86/sys_machdep.c $S/arch/x86/x86/syscall.c \
	$S/arch/x86/x86/vm_machdep.c $S/arch/x86/x86/x86_autoconf.c \
	$S/arch/x86/x86/x86_userconf.c $S/arch/x86/x86/x86_machdep.c \
	$S/arch/x86/x86/cpu_ucode.c $S/arch/x86/x86/cpu_ucode_amd.c \
	$S/arch/x86/x86/lapic.c $S/arch/x86/x86/ioapic.c \
	$S/arch/x86/x86/mpbios.c $S/arch/x86/x86/mp.c \
	$S/arch/x86/x86/mpacpi.c $S/arch/x86/acpi/acpi_pdc.c \
	$S/arch/x86/acpi/acpi_wakeup.c $S/arch/x86/acpi/acpi_machdep.c \
	$S/arch/x86/isa/isa_machdep.c $S/arch/x86/x86/x86_stub.c \
	$S/arch/x86/x86/ipmi.c $S/arch/x86/x86/vga_post.c \
	$S/arch/x86/pci/pci_machdep.c $S/arch/x86/pci/pci_intr_machdep.c \
	$S/arch/x86/pci/pciide_machdep.c $S/arch/amd64/amd64/autoconf.c \
	$S/arch/amd64/amd64/db_disasm.c \
	$S/arch/amd64/amd64/db_interface.c \
	$S/arch/amd64/amd64/db_machdep.c $S/arch/amd64/amd64/db_memrw.c \
	$S/arch/amd64/amd64/kobj_machdep.c $S/kern/subr_disk_mbr.c \
	$S/arch/amd64/amd64/gdt.c $S/arch/amd64/amd64/machdep.c \
	$S/arch/amd64/amd64/process_machdep.c $S/arch/amd64/amd64/trap.c \
	$S/arch/amd64/amd64/fpu.c $S/dev/cons.c \
	$S/dev/scsipi/scsipiconf.c $S/dev/scsipi/scsipi_base.c \
	$S/dev/scsipi/scsipi_ioctl.c $S/dev/scsipi/scsipi_verbose.c \
	$S/dev/scsipi/scsi_base.c $S/dev/scsipi/atapi_base.c \
	$S/dev/scsipi/atapi_wdc.c $S/dev/scsipi/scsiconf.c \
	$S/dev/scsipi/atapiconf.c $S/dev/scsipi/cd.c $S/dev/scsipi/ch.c \
	$S/dev/scsipi/sd.c $S/dev/scsipi/st.c $S/dev/scsipi/st_scsi.c \
	$S/dev/scsipi/st_atapi.c $S/dev/scsipi/ses.c $S/dev/scsipi/ss.c \
	$S/dev/scsipi/ss_mustek.c $S/dev/scsipi/ss_scanjet.c \
	$S/dev/scsipi/uk.c $S/dev/ata/wd.c $S/dev/ata/ata_wdc.c \
	$S/dev/ata/ata.c $S/dev/ata/ata_raid.c $S/dev/ata/ata_raid_subr.c \
	$S/dev/ata/ata_raid_promise.c $S/dev/ata/ata_raid_adaptec.c \
	$S/dev/ata/ata_raid_nvidia.c $S/dev/ata/ata_raid_via.c \
	$S/dev/ata/ata_raid_jmicron.c $S/dev/ata/ata_raid_intel.c \
	$S/dev/ata/ld_ataraid.c $S/dev/ata/sata_subr.c \
	$S/dev/ata/satafis_subr.c $S/dev/md_root.c $S/dev/i2o/iop.c \
	$S/dev/i2o/ld_iop.c $S/dev/i2o/iopsp.c \
	$S/arch/amd64/amd64/bios32.c $S/arch/amd64/amd64/mainbus.c \
	$S/dev/pci/pci.c $S/dev/pci/pci_map.c $S/dev/pci/pci_quirks.c \
	$S/dev/pci/pci_subr.c $S/dev/pci/pci_stub.c \
	$S/dev/pci/pci_usrreq.c $S/dev/pci/pcibusprint.c \
	$S/dev/pci/wsdisplay_pci.c $S/dev/pci/cy82c693.c \
	$S/dev/pci/ahc_pci.c $S/dev/pci/ahd_pci.c $S/dev/pci/iop_pci.c \
	$S/dev/pci/twe.c $S/dev/pci/ld_twe.c $S/dev/pci/twa.c \
	$S/dev/pci/ld_twa.c $S/dev/pci/amr.c $S/dev/pci/ld_amr.c \
	$S/dev/pci/arcmsr.c $S/dev/pci/cac_pci.c $S/dev/pci/mlx_pci.c \
	$S/dev/pci/mly.c $S/dev/pci/if_mtd_pci.c $S/dev/pci/icp_pci.c \
	$S/dev/pci/aac_pci.c $S/dev/pci/dpt_pci.c $S/dev/pci/adv_pci.c \
	$S/dev/pci/adw_pci.c $S/dev/ic/adwlib.c $S/dev/ic/adwmcode.c \
	$S/dev/pci/pcscp.c $S/dev/pci/ciss_pci.c $S/dev/pci/bha_pci.c \
	$S/dev/pci/isp_pci.c $S/dev/pci/mfi_pci.c $S/dev/pci/mpt_pci.c \
	$S/dev/pci/mpii.c $S/dev/pci/if_en_pci.c $S/dev/pci/if_ep_pci.c \
	$S/dev/pci/if_ex_pci.c $S/dev/pci/if_fpa.c $S/dev/pci/if_le_pci.c \
	$S/dev/pci/if_pcn.c $S/dev/pci/siop_pci_common.c \
	$S/dev/pci/siop_pci.c $S/dev/pci/esiop_pci.c $S/dev/pci/iha_pci.c \
	$S/dev/pci/trm.c $S/dev/pci/pciide_common.c $S/dev/pci/pciide.c \
	$S/dev/pci/ahcisata_pci.c $S/dev/pci/acardide.c \
	$S/dev/pci/aceride.c $S/dev/pci/artsata.c $S/dev/pci/cmdide.c \
	$S/dev/pci/cypide.c $S/dev/pci/hptide.c $S/dev/pci/iteide.c \
	$S/dev/pci/jmide.c $S/dev/pci/optiide.c $S/dev/pci/piixide.c \
	$S/dev/pci/pdcsata.c $S/dev/pci/pdcide.c $S/dev/pci/svwsata.c \
	$S/dev/pci/satalink.c $S/dev/pci/siside.c $S/dev/pci/slide.c \
	$S/dev/pci/viaide.c $S/dev/pci/ixpide.c $S/dev/pci/toshide.c \
	$S/dev/pci/ppb.c $S/dev/pci/cy_pci.c $S/dev/pci/cz.c \
	$S/dev/pci/if_fxp_pci.c $S/dev/pci/if_hme_pci.c \
	$S/dev/pci/if_jme.c $S/dev/pci/if_ne_pci.c $S/dev/pci/if_tl.c \
	$S/dev/pci/if_ntwoc_pci.c $S/dev/pci/if_lmc.c \
	$S/dev/pci/if_esh_pci.c $S/dev/pci/vga_pci.c \
	$S/dev/pci/bktr/bktr_audio.c $S/dev/pci/bktr/bktr_card.c \
	$S/dev/pci/bktr/bktr_core.c $S/dev/pci/bktr/bktr_os.c \
	$S/dev/pci/bktr/bktr_tuner.c $S/dev/pci/cs4280.c \
	$S/dev/pci/cs4281.c $S/dev/pci/cs428x.c $S/dev/pci/fms.c \
	$S/dev/pci/opl_fms.c $S/dev/pci/eap.c $S/dev/pci/auacer.c \
	$S/dev/pci/auich.c $S/dev/pci/auvia.c $S/dev/pci/auixp.c \
	$S/dev/pci/neo.c $S/dev/pci/esa.c $S/dev/pci/eso.c \
	$S/dev/pci/opl_eso.c $S/dev/pci/mpu_eso.c $S/dev/pci/esm.c \
	$S/dev/pci/sv.c $S/dev/pci/opl_sv.c $S/dev/pci/cmpci.c \
	$S/dev/pci/opl_cmpci.c $S/dev/pci/mpu_cmpci.c $S/dev/pci/yds.c \
	$S/dev/pci/mpu_yds.c $S/dev/pci/emuxki.c $S/dev/pci/autri.c \
	$S/dev/pci/if_epic_pci.c $S/dev/pci/puc.c $S/dev/pci/pucdata.c \
	$S/dev/pci/com_puc.c $S/dev/pci/cyber.c $S/dev/pci/lpt_puc.c \
	$S/dev/pci/uhci_pci.c $S/dev/pci/ohci_pci.c $S/dev/pci/ehci_pci.c \
	$S/dev/pci/usb_pci.c $S/dev/pci/fwohci_pci.c $S/dev/pci/if_vr.c \
	$S/dev/pci/if_sip.c $S/dev/pci/if_stge.c $S/dev/pci/if_wm.c \
	$S/dev/pci/if_bge.c $S/dev/pci/if_bnx.c $S/dev/pci/if_rtk_pci.c \
	$S/dev/pci/if_tlp_pci.c $S/dev/pci/if_ti.c $S/dev/pci/if_sf_pci.c \
	$S/dev/pci/if_ste.c $S/dev/pci/pccbb.c $S/dev/pci/piixpm.c \
	$S/dev/pci/amdpm.c $S/dev/pci/amdpm_smbus.c $S/dev/pci/hifn7751.c \
	$S/dev/pci/ubsec.c $S/dev/pci/if_an_pci.c $S/dev/pci/if_atw_pci.c \
	$S/dev/pci/if_rtw_pci.c $S/dev/pci/if_ral_pci.c \
	$S/dev/pci/if_wi_pci.c $S/dev/pci/weasel_pci.c \
	$S/dev/pci/if_txp.c $S/dev/pci/if_sk.c $S/dev/pci/if_bce.c \
	$S/dev/pci/if_dge.c $S/dev/pci/if_re_pci.c $S/dev/pci/if_ipw.c \
	$S/dev/pci/if_iwi.c $S/dev/pci/if_wpi.c $S/dev/pci/if_iwn.c \
	$S/dev/pci/if_xge.c $S/dev/pci/if_vge.c $S/dev/pci/if_ath_pci.c \
	$S/dev/pci/if_nfe.c $S/dev/pci/if_msk.c $S/dev/pci/sdhc_pci.c \
	$S/dev/pci/genfb_pci.c $S/dev/pci/nfsmb.c $S/dev/pci/ichsmb.c \
	$S/dev/pci/if_age.c $S/dev/pci/if_alc.c $S/dev/pci/if_ale.c \
	$S/dev/pci/if_lii.c $S/dev/pci/siisata_pci.c \
	$S/dev/pci/if_bwi_pci.c $S/dev/pci/mvsata_pci.c \
	$S/dev/pci/hdaudio/hdaudio.c $S/dev/pci/hdaudio/hdaudio_ids.c \
	$S/dev/pci/hdaudio/hdafg.c $S/dev/pci/hdaudio/hdafg_dd.c \
	$S/dev/pci/hdaudio/hdaudio_pci.c $S/dev/pci/if_et.c \
	$S/dev/pci/cxdtv.c $S/dev/pci/cxdtv_boards.c $S/dev/pci/coram.c \
	$S/dev/pci/virtio.c $S/dev/pci/ld_virtio.c $S/dev/pci/viomb.c \
	$S/dev/pci/if_vioif.c $S/dev/pci/agp.c $S/dev/pci/agpbusprint.c \
	$S/dev/pci/agp_ali.c $S/dev/pci/agp_amd.c $S/dev/pci/agp_i810.c \
	$S/dev/pci/agp_intel.c $S/dev/pci/agp_sis.c $S/dev/pci/agp_via.c \
	$S/dev/pci/agp_amd64.c $S/arch/x86/pci/aapic.c \
	$S/arch/x86/pci/agp_machdep.c $S/arch/x86/x86/sg_dma.c \
	$S/arch/x86/pci/pchb.c $S/arch/x86/pci/pcib.c \
	$S/arch/x86/pci/amdtemp.c $S/arch/x86/pci/ichlpcib.c \
	$S/arch/x86/pci/fwhrng.c $S/dev/isa/isa.c \
	$S/dev/isa/isabusprint.c $S/dev/isa/isadma.c $S/dev/isa/com_isa.c \
	$S/dev/isa/lpt_isa.c $S/dev/isa/wdc_isa.c $S/dev/isa/pckbc_isa.c \
	$S/dev/isa/pcppi.c $S/dev/isa/midi_pcppi.c \
	$S/dev/isa/attimer_isa.c $S/dev/isa/tpm_isa.c \
	$S/arch/x86/isa/clock.c $S/arch/x86/isa/rtc.c \
	$S/arch/x86/x86/tsc.c $S/dev/pckbport/pckbport.c \
	$S/dev/pckbport/pckbd.c $S/dev/pckbport/wskbdmap_mfii.c \
	$S/dev/pckbport/pms.c $S/dev/pckbport/synaptics.c \
	$S/dev/pckbport/elantech.c $S/dev/isa/fd.c $S/dev/isa/fdc_isa.c \
	$S/compat/netbsd32/netbsd32_core.c \
	$S/compat/netbsd32/netbsd32_exec_elf32.c \
	$S/compat/netbsd32/netbsd32_netbsd.c \
	$S/compat/netbsd32/netbsd32_event.c \
	$S/compat/netbsd32/netbsd32_execve.c \
	$S/compat/netbsd32/netbsd32_fs.c \
	$S/compat/netbsd32/netbsd32_ioctl.c \
	$S/compat/netbsd32/netbsd32_ipc.c \
	$S/compat/netbsd32/netbsd32_lwp.c \
	$S/compat/netbsd32/netbsd32_mod.c \
	$S/compat/netbsd32/netbsd32_sa.c \
	$S/compat/netbsd32/netbsd32_select.c \
	$S/compat/netbsd32/netbsd32_sem.c \
	$S/compat/netbsd32/netbsd32_signal.c \
	$S/compat/netbsd32/netbsd32_socket.c \
	$S/compat/netbsd32/netbsd32_sysctl.c \
	$S/compat/netbsd32/netbsd32_time.c \
	$S/compat/netbsd32/netbsd32_wait.c \
	$S/compat/netbsd32/netbsd32_sysent.c \
	$S/compat/netbsd32/netbsd32_compat_20.c \
	$S/compat/netbsd32/netbsd32_compat_30.c \
	$S/compat/netbsd32/netbsd32_compat_43.c \
	$S/compat/netbsd32/netbsd32_compat_50.c \
	$S/arch/amd64/amd64/netbsd32_machdep.c \
	$S/arch/amd64/amd64/netbsd32_syscall.c \
	$S/compat/linux/common/linux_blkio.c \
	$S/compat/linux/common/linux_cdrom.c \
	$S/compat/linux/common/linux_errno.c \
	$S/compat/linux/common/linux_exec.c \
	$S/compat/linux/common/linux_exec_elf32.c \
	$S/compat/linux/common/linux_exec_elf64.c \
	$S/compat/linux/common/linux_fdio.c \
	$S/compat/linux/common/linux_file.c \
	$S/compat/linux/common/linux_hdio.c \
	$S/compat/linux/common/linux_ioctl.c \
	$S/compat/linux/common/linux_ipc.c \
	$S/compat/linux/common/linux_misc.c \
	$S/compat/linux/common/linux_mod.c \
	$S/compat/linux/common/linux_mtio.c \
	$S/compat/linux/common/linux_sched.c \
	$S/compat/linux/common/linux_sg.c \
	$S/compat/linux/common/linux_signal.c \
	$S/compat/linux/common/linux_signo.c \
	$S/compat/linux/common/linux_socket.c \
	$S/compat/linux/common/linux_sysctl.c \
	$S/compat/linux/common/linux_termios.c \
	$S/compat/linux/common/linux_time.c \
	$S/compat/linux/arch/amd64/linux_commons.c \
	$S/compat/linux/arch/amd64/linux_exec_machdep.c \
	$S/compat/linux/arch/amd64/linux_machdep.c \
	$S/compat/linux/arch/amd64/linux_syscalls.c \
	$S/compat/linux/arch/amd64/linux_sysent.c \
	$S/arch/amd64/amd64/linux_syscall.c $S/arch/x86/x86/linux_trap.c \
	$S/compat/linux32/common/linux32_dirent.c \
	$S/compat/linux32/common/linux32_exec.c \
	$S/compat/linux32/common/linux32_exec_elf32.c \
	$S/compat/linux32/common/linux32_fcntl.c \
	$S/compat/linux32/common/linux32_ioctl.c \
	$S/compat/linux32/common/linux32_misc.c \
	$S/compat/linux32/common/linux32_mman.c \
	$S/compat/linux32/common/linux32_mod.c \
	$S/compat/linux32/common/linux32_resource.c \
	$S/compat/linux32/common/linux32_sched.c \
	$S/compat/linux32/common/linux32_signal.c \
	$S/compat/linux32/common/linux32_socket.c \
	$S/compat/linux32/common/linux32_socketcall.c \
	$S/compat/linux32/common/linux32_stat.c \
	$S/compat/linux32/common/linux32_sysctl.c \
	$S/compat/linux32/common/linux32_sysinfo.c \
	$S/compat/linux32/common/linux32_time.c \
	$S/compat/linux32/common/linux32_termios.c \
	$S/compat/linux32/common/linux32_unistd.c \
	$S/compat/linux32/common/linux32_utsname.c \
	$S/compat/linux32/common/linux32_wait.c \
	$S/compat/linux32/arch/amd64/linux32_syscalls.c \
	$S/compat/linux32/arch/amd64/linux32_sysent.c \
	$S/compat/linux32/arch/amd64/linux32_machdep.c \
	$S/compat/linux32/arch/amd64/linux32_missing.c \
	$S/compat/linux32/common/linux32_ipccall.c \
	$S/compat/linux32/common/linux32_uid16.c \
	$S/compat/linux/common/linux_oldmmap.c \
	$S/arch/amd64/amd64/linux32_syscall.c \
	$S/compat/ossaudio/ossaudio.c $S/dev/cardbus/cardslot.c \
	$S/dev/cardbus/cardbus.c $S/dev/cardbus/cardbus_map.c \
	$S/dev/cardbus/cardbus_exrom.c $S/dev/cardbus/rbus.c \
	$S/dev/cardbus/if_ex_cardbus.c $S/dev/cardbus/if_fxp_cardbus.c \
	$S/dev/cardbus/com_cardbus.c $S/dev/cardbus/if_atw_cardbus.c \
	$S/dev/cardbus/if_rtw_cardbus.c $S/dev/cardbus/if_ral_cardbus.c \
	$S/dev/cardbus/if_tlp_cardbus.c $S/dev/cardbus/ohci_cardbus.c \
	$S/dev/cardbus/uhci_cardbus.c $S/dev/cardbus/ehci_cardbus.c \
	$S/dev/cardbus/fwohci_cardbus.c $S/dev/cardbus/ahc_cardbus.c \
	$S/dev/cardbus/if_rtk_cardbus.c $S/dev/cardbus/if_re_cardbus.c \
	$S/dev/cardbus/adv_cardbus.c $S/dev/cardbus/if_ath_cardbus.c \
	$S/dev/cardbus/njata_cardbus.c $S/dev/cardbus/siisata_cardbus.c \
	$S/arch/amd64/amd64/rbus_machdep.c $S/dev/pcmcia/pcmcia.c \
	$S/dev/pcmcia/pcmcia_cis.c $S/dev/pcmcia/pcmcia_cis_quirks.c \
	$S/dev/pcmcia/if_ep_pcmcia.c $S/dev/pcmcia/if_ne_pcmcia.c \
	$S/dev/pcmcia/aic_pcmcia.c $S/dev/pcmcia/esp_pcmcia.c \
	$S/dev/pcmcia/spc_pcmcia.c $S/dev/pcmcia/com_pcmcia.c \
	$S/dev/pcmcia/wdc_pcmcia.c $S/dev/pcmcia/if_sm_pcmcia.c \
	$S/dev/pcmcia/if_mbe_pcmcia.c $S/dev/pcmcia/pcmcom.c \
	$S/dev/pcmcia/if_cnw.c $S/dev/pcmcia/mhzc.c \
	$S/dev/pcmcia/if_ray.c $S/dev/pcmcia/if_awi_pcmcia.c \
	$S/dev/pcmcia/if_wi_pcmcia.c $S/dev/pcmcia/xirc.c \
	$S/dev/pcmcia/if_xi.c $S/dev/pcmcia/if_cs_pcmcia.c \
	$S/dev/pcmcia/if_an_pcmcia.c $S/dev/pcmcia/bt3c.c \
	$S/dev/pcmcia/slhci_pcmcia.c $S/dev/pcmcia/btbc.c \
	$S/dev/usb/usb.c $S/dev/usb/usbdi.c $S/dev/usb/usbdi_util.c \
	$S/dev/usb/usb_mem.c $S/dev/usb/usb_subr.c \
	$S/dev/usb/usb_quirks.c $S/dev/usb/uhub.c $S/dev/usb/ezload.c \
	$S/dev/usb/uaudio.c $S/dev/usb/umidi.c $S/dev/usb/umidi_quirks.c \
	$S/dev/usb/ucom.c $S/dev/usb/ugen.c $S/dev/usb/uhidev.c \
	$S/dev/usb/uhid.c $S/dev/usb/ukbd.c $S/dev/usb/ukbdmap.c \
	$S/dev/usb/ums.c $S/dev/usb/uts.c $S/dev/usb/uep.c \
	$S/dev/usb/ucycom.c $S/dev/usb/ulpt.c $S/dev/usb/umass.c \
	$S/dev/usb/umass_isdata.c $S/dev/usb/umass_quirks.c \
	$S/dev/usb/umass_scsipi.c $S/dev/usb/uirda.c $S/dev/usb/stuirda.c \
	$S/dev/usb/ustir.c $S/dev/usb/irmce.c $S/dev/usb/ubt.c \
	$S/dev/usb/aubtfwl.c $S/dev/usb/pseye.c $S/dev/usb/uvideo.c \
	$S/dev/usb/auvitek.c $S/dev/usb/auvitek_audio.c \
	$S/dev/usb/auvitek_board.c $S/dev/usb/auvitek_dtv.c \
	$S/dev/usb/auvitek_i2c.c $S/dev/usb/auvitek_video.c \
	$S/dev/usb/emdtv.c $S/dev/usb/emdtv_board.c \
	$S/dev/usb/emdtv_dtv.c $S/dev/usb/emdtv_i2c.c \
	$S/dev/usb/emdtv_ir.c $S/dev/usb/urio.c $S/dev/usb/uipad.c \
	$S/dev/usb/uberry.c $S/dev/usb/uvisor.c $S/dev/usb/ugensa.c \
	$S/dev/usb/u3g.c $S/dev/usb/uyap.c $S/dev/usb/udsbr.c \
	$S/dev/usb/if_aue.c $S/dev/usb/if_cdce.c $S/dev/usb/if_cue.c \
	$S/dev/usb/if_kue.c $S/dev/usb/if_upl.c $S/dev/usb/if_url.c \
	$S/dev/usb/if_axe.c $S/dev/usb/if_udav.c $S/dev/usb/if_otus.c \
	$S/dev/usb/umodem_common.c $S/dev/usb/umodem.c $S/dev/usb/uftdi.c \
	$S/dev/usb/uplcom.c $S/dev/usb/umct.c $S/dev/usb/uvscom.c \
	$S/dev/usb/ubsa_common.c $S/dev/usb/ubsa.c $S/dev/usb/uipaq.c \
	$S/dev/usb/ukyopon.c $S/dev/usb/uslsa.c $S/dev/usb/uchcom.c \
	$S/dev/usb/uscanner.c $S/dev/usb/usscanner.c $S/dev/usb/if_atu.c \
	$S/dev/usb/if_ural.c $S/dev/usb/if_rum.c $S/dev/usb/utoppy.c \
	$S/dev/usb/if_zyd.c $S/dev/usb/udl.c $S/dev/usb/uhso.c \
	$S/dev/usb/if_urndis.c $S/dev/usb/if_urtwn.c $S/dev/usb/if_urtw.c \
	$S/dev/bluetooth/bthub.c $S/dev/bluetooth/bthidev.c \
	$S/dev/bluetooth/btkbd.c $S/dev/bluetooth/btms.c \
	$S/dev/bluetooth/btmagic.c $S/dev/bluetooth/btsco.c \
	$S/dev/bluetooth/btuart.c $S/dev/bluetooth/bcsp.c \
	$S/dev/sdmmc/sdmmc.c $S/dev/sdmmc/sdmmc_cis.c \
	$S/dev/sdmmc/sdmmc_io.c $S/dev/sdmmc/sdmmc_mem.c \
	$S/dev/sdmmc/ld_sdmmc.c $S/dev/sdmmc/sbt.c \
	$S/dev/ieee1394/fwohci.c $S/dev/ieee1394/firewire.c \
	$S/dev/ieee1394/fwdev.c $S/dev/ieee1394/fwmem.c \
	$S/dev/ieee1394/fwdma.c $S/dev/ieee1394/fwcrom.c \
	$S/dev/ieee1394/if_fwip.c $S/dev/ieee1394/sbp.c \
	$S/dev/acpi/acpica/OsdEnvironment.c \
	$S/dev/acpi/acpica/OsdHardware.c \
	$S/dev/acpi/acpica/OsdInterrupt.c $S/dev/acpi/acpica/OsdMemory.c \
	$S/dev/acpi/acpica/OsdMisc.c $S/dev/acpi/acpica/OsdSchedule.c \
	$S/dev/acpi/acpica/OsdStream.c $S/dev/acpi/acpica/OsdSynch.c \
	$S/external/bsd/acpica/dist/dispatcher/dsargs.c \
	$S/external/bsd/acpica/dist/dispatcher/dscontrol.c \
	$S/external/bsd/acpica/dist/dispatcher/dsfield.c \
	$S/external/bsd/acpica/dist/dispatcher/dsinit.c \
	$S/external/bsd/acpica/dist/dispatcher/dsmethod.c \
	$S/external/bsd/acpica/dist/dispatcher/dsmthdat.c \
	$S/external/bsd/acpica/dist/dispatcher/dsobject.c \
	$S/external/bsd/acpica/dist/dispatcher/dsopcode.c \
	$S/external/bsd/acpica/dist/dispatcher/dsutils.c \
	$S/external/bsd/acpica/dist/dispatcher/dswexec.c \
	$S/external/bsd/acpica/dist/dispatcher/dswload.c \
	$S/external/bsd/acpica/dist/dispatcher/dswload2.c \
	$S/external/bsd/acpica/dist/dispatcher/dswscope.c \
	$S/external/bsd/acpica/dist/dispatcher/dswstate.c \
	$S/external/bsd/acpica/dist/events/evevent.c \
	$S/external/bsd/acpica/dist/events/evglock.c \
	$S/external/bsd/acpica/dist/events/evgpe.c \
	$S/external/bsd/acpica/dist/events/evgpeblk.c \
	$S/external/bsd/acpica/dist/events/evgpeinit.c \
	$S/external/bsd/acpica/dist/events/evgpeutil.c \
	$S/external/bsd/acpica/dist/events/evmisc.c \
	$S/external/bsd/acpica/dist/events/evregion.c \
	$S/external/bsd/acpica/dist/events/evrgnini.c \
	$S/external/bsd/acpica/dist/events/evsci.c \
	$S/external/bsd/acpica/dist/events/evxface.c \
	$S/external/bsd/acpica/dist/events/evxfevnt.c \
	$S/external/bsd/acpica/dist/events/evxfgpe.c \
	$S/external/bsd/acpica/dist/events/evxfregn.c \
	$S/external/bsd/acpica/dist/executer/exconfig.c \
	$S/external/bsd/acpica/dist/executer/exconvrt.c \
	$S/external/bsd/acpica/dist/executer/excreate.c \
	$S/external/bsd/acpica/dist/executer/exdebug.c \
	$S/external/bsd/acpica/dist/executer/exdump.c \
	$S/external/bsd/acpica/dist/executer/exfield.c \
	$S/external/bsd/acpica/dist/executer/exfldio.c \
	$S/external/bsd/acpica/dist/executer/exmisc.c \
	$S/external/bsd/acpica/dist/executer/exmutex.c \
	$S/external/bsd/acpica/dist/executer/exnames.c \
	$S/external/bsd/acpica/dist/executer/exoparg1.c \
	$S/external/bsd/acpica/dist/executer/exoparg2.c \
	$S/external/bsd/acpica/dist/executer/exoparg3.c \
	$S/external/bsd/acpica/dist/executer/exoparg6.c \
	$S/external/bsd/acpica/dist/executer/exprep.c \
	$S/external/bsd/acpica/dist/executer/exregion.c \
	$S/external/bsd/acpica/dist/executer/exresnte.c \
	$S/external/bsd/acpica/dist/executer/exresolv.c \
	$S/external/bsd/acpica/dist/executer/exresop.c \
	$S/external/bsd/acpica/dist/executer/exstore.c \
	$S/external/bsd/acpica/dist/executer/exstoren.c \
	$S/external/bsd/acpica/dist/executer/exstorob.c \
	$S/external/bsd/acpica/dist/executer/exsystem.c \
	$S/external/bsd/acpica/dist/executer/exutils.c \
	$S/external/bsd/acpica/dist/hardware/hwacpi.c \
	$S/external/bsd/acpica/dist/hardware/hwgpe.c \
	$S/external/bsd/acpica/dist/hardware/hwpci.c \
	$S/external/bsd/acpica/dist/hardware/hwregs.c \
	$S/external/bsd/acpica/dist/hardware/hwsleep.c \
	$S/external/bsd/acpica/dist/hardware/hwtimer.c \
	$S/external/bsd/acpica/dist/hardware/hwvalid.c \
	$S/external/bsd/acpica/dist/hardware/hwxface.c \
	$S/external/bsd/acpica/dist/namespace/nsaccess.c \
	$S/external/bsd/acpica/dist/namespace/nsalloc.c \
	$S/external/bsd/acpica/dist/namespace/nsdump.c \
	$S/external/bsd/acpica/dist/namespace/nsdumpdv.c \
	$S/external/bsd/acpica/dist/namespace/nseval.c \
	$S/external/bsd/acpica/dist/namespace/nsinit.c \
	$S/external/bsd/acpica/dist/namespace/nsload.c \
	$S/external/bsd/acpica/dist/namespace/nsnames.c \
	$S/external/bsd/acpica/dist/namespace/nsobject.c \
	$S/external/bsd/acpica/dist/namespace/nsparse.c \
	$S/external/bsd/acpica/dist/namespace/nspredef.c \
	$S/external/bsd/acpica/dist/namespace/nsrepair.c \
	$S/external/bsd/acpica/dist/namespace/nsrepair2.c \
	$S/external/bsd/acpica/dist/namespace/nssearch.c \
	$S/external/bsd/acpica/dist/namespace/nsutils.c \
	$S/external/bsd/acpica/dist/namespace/nswalk.c \
	$S/external/bsd/acpica/dist/namespace/nsxfeval.c \
	$S/external/bsd/acpica/dist/namespace/nsxfname.c \
	$S/external/bsd/acpica/dist/namespace/nsxfobj.c \
	$S/external/bsd/acpica/dist/parser/psargs.c \
	$S/external/bsd/acpica/dist/parser/psloop.c \
	$S/external/bsd/acpica/dist/parser/psopcode.c \
	$S/external/bsd/acpica/dist/parser/psparse.c \
	$S/external/bsd/acpica/dist/parser/psscope.c \
	$S/external/bsd/acpica/dist/parser/pstree.c \
	$S/external/bsd/acpica/dist/parser/psutils.c \
	$S/external/bsd/acpica/dist/parser/pswalk.c \
	$S/external/bsd/acpica/dist/parser/psxface.c \
	$S/external/bsd/acpica/dist/resources/rsaddr.c \
	$S/external/bsd/acpica/dist/resources/rscalc.c \
	$S/external/bsd/acpica/dist/resources/rscreate.c \
	$S/external/bsd/acpica/dist/resources/rsdump.c \
	$S/external/bsd/acpica/dist/resources/rsinfo.c \
	$S/external/bsd/acpica/dist/resources/rsio.c \
	$S/external/bsd/acpica/dist/resources/rsirq.c \
	$S/external/bsd/acpica/dist/resources/rslist.c \
	$S/external/bsd/acpica/dist/resources/rsmemory.c \
	$S/external/bsd/acpica/dist/resources/rsmisc.c \
	$S/external/bsd/acpica/dist/resources/rsutils.c \
	$S/external/bsd/acpica/dist/resources/rsxface.c \
	$S/external/bsd/acpica/dist/tables/tbfadt.c \
	$S/external/bsd/acpica/dist/tables/tbfind.c \
	$S/external/bsd/acpica/dist/tables/tbinstal.c \
	$S/external/bsd/acpica/dist/tables/tbutils.c \
	$S/external/bsd/acpica/dist/tables/tbxface.c \
	$S/external/bsd/acpica/dist/tables/tbxfroot.c \
	$S/external/bsd/acpica/dist/utilities/utalloc.c \
	$S/external/bsd/acpica/dist/utilities/utcache.c \
	$S/external/bsd/acpica/dist/utilities/utcopy.c \
	$S/external/bsd/acpica/dist/utilities/utdebug.c \
	$S/external/bsd/acpica/dist/utilities/utdecode.c \
	$S/external/bsd/acpica/dist/utilities/utdelete.c \
	$S/external/bsd/acpica/dist/utilities/uteval.c \
	$S/external/bsd/acpica/dist/utilities/utglobal.c \
	$S/external/bsd/acpica/dist/utilities/utids.c \
	$S/external/bsd/acpica/dist/utilities/utinit.c \
	$S/external/bsd/acpica/dist/utilities/utlock.c \
	$S/external/bsd/acpica/dist/utilities/utmath.c \
	$S/external/bsd/acpica/dist/utilities/utmisc.c \
	$S/external/bsd/acpica/dist/utilities/utmutex.c \
	$S/external/bsd/acpica/dist/utilities/utobject.c \
	$S/external/bsd/acpica/dist/utilities/utosi.c \
	$S/external/bsd/acpica/dist/utilities/utresrc.c \
	$S/external/bsd/acpica/dist/utilities/utstate.c \
	$S/external/bsd/acpica/dist/utilities/uttrack.c \
	$S/external/bsd/acpica/dist/utilities/utxface.c \
	$S/external/bsd/acpica/dist/utilities/utxferror.c \
	$S/dev/acpi/acpi.c $S/dev/acpi/acpi_debug.c \
	$S/dev/acpi/acpi_pci.c $S/dev/acpi/acpi_pci_link.c \
	$S/dev/acpi/acpi_power.c $S/dev/acpi/acpi_quirks.c \
	$S/dev/acpi/acpi_resource.c $S/dev/acpi/acpi_srat.c \
	$S/dev/acpi/acpi_slit.c $S/dev/acpi/acpi_timer.c \
	$S/dev/acpi/acpi_util.c $S/dev/acpi/acpi_wakedev.c \
	$S/dev/acpi/acpi_ec.c $S/dev/acpi/acpi_lid.c \
	$S/dev/acpi/acpi_button.c $S/dev/acpi/acpi_acad.c \
	$S/dev/acpi/acpi_bat.c $S/dev/acpi/acpi_display.c \
	$S/dev/acpi/acpi_fan.c $S/dev/acpi/acpi_tz.c \
	$S/dev/acpi/acpi_wdrt.c $S/dev/acpi/pckbc_acpi.c \
	$S/dev/acpi/mpu_acpi.c $S/dev/acpi/joy_acpi.c \
	$S/dev/acpi/pcppi_acpi.c $S/dev/acpi/attimer_acpi.c \
	$S/dev/acpi/hpet_acpi.c $S/dev/acpi/asus_acpi.c \
	$S/dev/acpi/ug_acpi.c $S/dev/acpi/sony_acpi.c \
	$S/dev/acpi/spic_acpi.c $S/dev/acpi/thinkpad_acpi.c \
	$S/dev/acpi/dalb_acpi.c $S/dev/acpi/wb_acpi.c \
	$S/dev/acpi/aibs_acpi.c $S/dev/acpi/fujbp_acpi.c \
	$S/dev/acpi/fujhk_acpi.c $S/dev/acpi/wmi/wmi_acpi.c \
	$S/dev/acpi/wmi/wmi_dell.c $S/dev/acpi/wmi/wmi_eeepc.c \
	$S/dev/acpi/wmi/wmi_hp.c $S/dev/acpi/wmi/wmi_msi.c swapnetbsd.c

SFILES=	$S/arch/amd64/amd64/amd64func.S $S/arch/amd64/amd64/busfunc.S \
	$S/arch/amd64/amd64/cpu_in_cksum.S $S/arch/amd64/amd64/cpufunc.S \
	$S/arch/amd64/amd64/lock_stubs.S $S/arch/amd64/amd64/mptramp.S \
	$S/arch/amd64/amd64/netbsd32_sigcode.S \
	$S/arch/amd64/amd64/linux_sigcode.S \
	$S/arch/amd64/amd64/linux32_sigcode.S \
	$S/arch/amd64/acpi/acpi_wakeup_low.S

.MAIN: all
all: netbsd

KERNELS+=netbsd
netbsd: ${SYSTEM_DEP} swap${.TARGET}.o vers.o
	${SYSTEM_LD_HEAD}
	${SYSTEM_LD} swap${.TARGET}.o
	${SYSTEM_LD_TAIL}

swapnetbsd.o: swapnetbsd.c
	${NORMAL_C}


des_ecb.o: $S/crypto/des/des_ecb.c
	${NORMAL_C}

des_setkey.o: $S/crypto/des/des_setkey.c
	${NORMAL_C}

des_enc.o: $S/crypto/des/des_enc.c
	${NORMAL_C}

des_cbc.o: $S/crypto/des/des_cbc.c
	${NORMAL_C}

bf_ecb.o: $S/crypto/blowfish/bf_ecb.c
	${NORMAL_C}

bf_enc.o: $S/crypto/blowfish/bf_enc.c
	${NORMAL_C}

bf_cbc.o: $S/crypto/blowfish/bf_cbc.c
	${NORMAL_C}

bf_skey.o: $S/crypto/blowfish/bf_skey.c
	${NORMAL_C}

cast128.o: $S/crypto/cast128/cast128.c
	${NORMAL_C}

rijndael-alg-fst.o: $S/crypto/rijndael/rijndael-alg-fst.c
	${NORMAL_C}

rijndael-api-fst.o: $S/crypto/rijndael/rijndael-api-fst.c
	${NORMAL_C}

rijndael.o: $S/crypto/rijndael/rijndael.c
	${NORMAL_C}

skipjack.o: $S/crypto/skipjack/skipjack.c
	${NORMAL_C}

camellia.o: $S/crypto/camellia/camellia.c
	${NORMAL_C}

camellia-api.o: $S/crypto/camellia/camellia-api.c
	${NORMAL_C}

criov.o: $S/opencrypto/criov.c
	${NORMAL_C}

xform.o: $S/opencrypto/xform.c
	${NORMAL_C}

crypto.o: $S/opencrypto/crypto.c
	${NORMAL_C}

cryptosoft.o: $S/opencrypto/cryptosoft.c
	${NORMAL_C}

deflate.o: $S/opencrypto/deflate.c
	${NORMAL_C}

aesxcbcmac.o: $S/opencrypto/aesxcbcmac.c
	${NORMAL_C}

gmac.o: $S/opencrypto/gmac.c
	${NORMAL_C}

cryptodev.o: $S/opencrypto/cryptodev.c
	${NORMAL_C}

ocryptodev.o: $S/opencrypto/ocryptodev.c
	${NORMAL_C}

nist_ctr_drbg.o: $S/crypto/nist_ctr_drbg/nist_ctr_drbg.c
	${NORMAL_C}

sysmon_taskq.o: $S/dev/sysmon/sysmon_taskq.c
	${NORMAL_C}

sysmon_power.o: $S/dev/sysmon/sysmon_power.c
	${NORMAL_C}

sysmon_envsys.o: $S/dev/sysmon/sysmon_envsys.c
	${NORMAL_C}

sysmon_envsys_events.o: $S/dev/sysmon/sysmon_envsys_events.c
	${NORMAL_C}

sysmon_envsys_tables.o: $S/dev/sysmon/sysmon_envsys_tables.c
	${NORMAL_C}

sysmon_envsys_util.o: $S/dev/sysmon/sysmon_envsys_util.c
	${NORMAL_C}

sysmon_wdog.o: $S/dev/sysmon/sysmon_wdog.c
	${NORMAL_C}

sysmon.o: $S/dev/sysmon/sysmon.c
	${NORMAL_C}

ieee80211.o: $S/net80211/ieee80211.c
	${NORMAL_C}

ieee80211_acl.o: $S/net80211/ieee80211_acl.c
	${NORMAL_C}

ieee80211_amrr.o: $S/net80211/ieee80211_amrr.c
	${NORMAL_C}

ieee80211_crypto.o: $S/net80211/ieee80211_crypto.c
	${NORMAL_C}

ieee80211_crypto_ccmp.o: $S/net80211/ieee80211_crypto_ccmp.c
	${NORMAL_C}

ieee80211_crypto_none.o: $S/net80211/ieee80211_crypto_none.c
	${NORMAL_C}

ieee80211_crypto_tkip.o: $S/net80211/ieee80211_crypto_tkip.c
	${NORMAL_C}

ieee80211_crypto_wep.o: $S/net80211/ieee80211_crypto_wep.c
	${NORMAL_C}

ieee80211_input.o: $S/net80211/ieee80211_input.c
	${NORMAL_C}

ieee80211_ioctl.o: $S/net80211/ieee80211_ioctl.c
	${NORMAL_C}

ieee80211_netbsd.o: $S/net80211/ieee80211_netbsd.c
	${NORMAL_C}

ieee80211_node.o: $S/net80211/ieee80211_node.c
	${NORMAL_C}

ieee80211_output.o: $S/net80211/ieee80211_output.c
	${NORMAL_C}

ieee80211_proto.o: $S/net80211/ieee80211_proto.c
	${NORMAL_C}

ieee80211_rssadapt.o: $S/net80211/ieee80211_rssadapt.c
	${NORMAL_C}

ieee80211_xauth.o: $S/net80211/ieee80211_xauth.c
	${NORMAL_C}

aarp.o: $S/netatalk/aarp.c
	${NORMAL_C}

at_control.o: $S/netatalk/at_control.c
	${NORMAL_C}

at_proto.o: $S/netatalk/at_proto.c
	${NORMAL_C}

ddp_input.o: $S/netatalk/ddp_input.c
	${NORMAL_C}

ddp_output.o: $S/netatalk/ddp_output.c
	${NORMAL_C}

ddp_usrreq.o: $S/netatalk/ddp_usrreq.c
	${NORMAL_C}

bt_proto.o: $S/netbt/bt_proto.c
	${NORMAL_C}

bt_sysctl.o: $S/netbt/bt_sysctl.c
	${NORMAL_C}

hci_event.o: $S/netbt/hci_event.c
	${NORMAL_C}

hci_ioctl.o: $S/netbt/hci_ioctl.c
	${NORMAL_C}

hci_link.o: $S/netbt/hci_link.c
	${NORMAL_C}

hci_misc.o: $S/netbt/hci_misc.c
	${NORMAL_C}

hci_socket.o: $S/netbt/hci_socket.c
	${NORMAL_C}

hci_unit.o: $S/netbt/hci_unit.c
	${NORMAL_C}

l2cap_lower.o: $S/netbt/l2cap_lower.c
	${NORMAL_C}

l2cap_misc.o: $S/netbt/l2cap_misc.c
	${NORMAL_C}

l2cap_signal.o: $S/netbt/l2cap_signal.c
	${NORMAL_C}

l2cap_socket.o: $S/netbt/l2cap_socket.c
	${NORMAL_C}

l2cap_upper.o: $S/netbt/l2cap_upper.c
	${NORMAL_C}

rfcomm_dlc.o: $S/netbt/rfcomm_dlc.c
	${NORMAL_C}

rfcomm_session.o: $S/netbt/rfcomm_session.c
	${NORMAL_C}

rfcomm_socket.o: $S/netbt/rfcomm_socket.c
	${NORMAL_C}

rfcomm_upper.o: $S/netbt/rfcomm_upper.c
	${NORMAL_C}

sco_socket.o: $S/netbt/sco_socket.c
	${NORMAL_C}

sco_upper.o: $S/netbt/sco_upper.c
	${NORMAL_C}

igmp.o: $S/netinet/igmp.c
	${NORMAL_C}

in.o: $S/netinet/in.c
	${NORMAL_C}

in_offload.o: $S/netinet/in_offload.c
	${NORMAL_C}

in_pcb.o: $S/netinet/in_pcb.c
	${NORMAL_C}

in_proto.o: $S/netinet/in_proto.c
	${NORMAL_C}

ip_icmp.o: $S/netinet/ip_icmp.c
	${NORMAL_C}

ip_id.o: $S/netinet/ip_id.c
	${NORMAL_C}

ip_input.o: $S/netinet/ip_input.c
	${NORMAL_C}

ip_output.o: $S/netinet/ip_output.c
	${NORMAL_C}

ip_reass.o: $S/netinet/ip_reass.c
	${NORMAL_C}

raw_ip.o: $S/netinet/raw_ip.c
	${NORMAL_C}

tcp_input.o: $S/netinet/tcp_input.c
	${NORMAL_C}

tcp_output.o: $S/netinet/tcp_output.c
	${NORMAL_C}

tcp_sack.o: $S/netinet/tcp_sack.c
	${NORMAL_C}

tcp_subr.o: $S/netinet/tcp_subr.c
	${NORMAL_C}

tcp_timer.o: $S/netinet/tcp_timer.c
	${NORMAL_C}

tcp_usrreq.o: $S/netinet/tcp_usrreq.c
	${NORMAL_C}

tcp_congctl.o: $S/netinet/tcp_congctl.c
	${NORMAL_C}

tcp_vtw.o: $S/netinet/tcp_vtw.c
	${NORMAL_C}

udp_usrreq.o: $S/netinet/udp_usrreq.c
	${NORMAL_C}

rfc6056.o: $S/netinet/rfc6056.c
	${NORMAL_C}

dest6.o: $S/netinet6/dest6.c
	${NORMAL_C}

frag6.o: $S/netinet6/frag6.c
	${NORMAL_C}

icmp6.o: $S/netinet6/icmp6.c
	${NORMAL_C}

in6.o: $S/netinet6/in6.c
	${NORMAL_C}

in6_cksum.o: $S/netinet6/in6_cksum.c
	${NORMAL_C}

in6_ifattach.o: $S/netinet6/in6_ifattach.c
	${NORMAL_C}

in6_offload.o: $S/netinet6/in6_offload.c
	${NORMAL_C}

in6_pcb.o: $S/netinet6/in6_pcb.c
	${NORMAL_C}

in6_proto.o: $S/netinet6/in6_proto.c
	${NORMAL_C}

in6_src.o: $S/netinet6/in6_src.c
	${NORMAL_C}

ip6_flow.o: $S/netinet6/ip6_flow.c
	${NORMAL_C}

ip6_forward.o: $S/netinet6/ip6_forward.c
	${NORMAL_C}

ip6_id.o: $S/netinet6/ip6_id.c
	${NORMAL_C}

ip6_input.o: $S/netinet6/ip6_input.c
	${NORMAL_C}

ip6_mroute.o: $S/netinet6/ip6_mroute.c
	${NORMAL_C}

ip6_output.o: $S/netinet6/ip6_output.c
	${NORMAL_C}

mld6.o: $S/netinet6/mld6.c
	${NORMAL_C}

nd6.o: $S/netinet6/nd6.c
	${NORMAL_C}

nd6_nbr.o: $S/netinet6/nd6_nbr.c
	${NORMAL_C}

nd6_rtr.o: $S/netinet6/nd6_rtr.c
	${NORMAL_C}

raw_ip6.o: $S/netinet6/raw_ip6.c
	${NORMAL_C}

route6.o: $S/netinet6/route6.c
	${NORMAL_C}

scope6.o: $S/netinet6/scope6.c
	${NORMAL_C}

udp6_output.o: $S/netinet6/udp6_output.c
	${NORMAL_C}

udp6_usrreq.o: $S/netinet6/udp6_usrreq.c
	${NORMAL_C}

iconv.o: $S/netsmb/iconv.c
	${NORMAL_C}

smb_conn.o: $S/netsmb/smb_conn.c
	${NORMAL_C}

smb_crypt.o: $S/netsmb/smb_crypt.c
	${NORMAL_C}

smb_dev.o: $S/netsmb/smb_dev.c
	${NORMAL_C}

smb_iod.o: $S/netsmb/smb_iod.c
	${NORMAL_C}

smb_rq.o: $S/netsmb/smb_rq.c
	${NORMAL_C}

smb_smb.o: $S/netsmb/smb_smb.c
	${NORMAL_C}

smb_subr.o: $S/netsmb/smb_subr.c
	${NORMAL_C}

smb_trantcp.o: $S/netsmb/smb_trantcp.c
	${NORMAL_C}

smb_usr.o: $S/netsmb/smb_usr.c
	${NORMAL_C}

subr_mchain.o: $S/netsmb/subr_mchain.c
	${NORMAL_C}

fil.o: $S/dist/ipf/netinet/fil.c
	${NORMAL_C}

ip_auth.o: $S/dist/ipf/netinet/ip_auth.c
	${NORMAL_C}

ip_fil_netbsd.o: $S/dist/ipf/netinet/ip_fil_netbsd.c
	${NORMAL_C}

ip_frag.o: $S/dist/ipf/netinet/ip_frag.c
	${NORMAL_C}

ip_htable.o: $S/dist/ipf/netinet/ip_htable.c
	${NORMAL_C}

ip_log.o: $S/dist/ipf/netinet/ip_log.c
	${NORMAL_C}

ip_lookup.o: $S/dist/ipf/netinet/ip_lookup.c
	${NORMAL_C}

ip_nat.o: $S/dist/ipf/netinet/ip_nat.c
	${NORMAL_C}

ip_pool.o: $S/dist/ipf/netinet/ip_pool.c
	${NORMAL_C}

ip_proxy.o: $S/dist/ipf/netinet/ip_proxy.c
	${NORMAL_C}

ip_state.o: $S/dist/ipf/netinet/ip_state.c
	${NORMAL_C}

ip_fil_compat.o: $S/dist/ipf/netinet/ip_fil_compat.c
	${NORMAL_C}

db_access.o: $S/ddb/db_access.c
	${NORMAL_C}

db_break.o: $S/ddb/db_break.c
	${NORMAL_C}

db_command.o: $S/ddb/db_command.c
	${NORMAL_C}

db_cpu.o: $S/ddb/db_cpu.c
	${NORMAL_C}

db_examine.o: $S/ddb/db_examine.c
	${NORMAL_C}

db_expr.o: $S/ddb/db_expr.c
	${NORMAL_C}

db_input.o: $S/ddb/db_input.c
	${NORMAL_C}

db_kernel.o: $S/ddb/db_kernel.c
	${NORMAL_C}

db_lex.o: $S/ddb/db_lex.c
	${NORMAL_C}

db_lwp.o: $S/ddb/db_lwp.c
	${NORMAL_C}

db_output.o: $S/ddb/db_output.c
	${NORMAL_C}

db_proc.o: $S/ddb/db_proc.c
	${NORMAL_C}

db_print.o: $S/ddb/db_print.c
	${NORMAL_C}

db_run.o: $S/ddb/db_run.c
	${NORMAL_C}

db_sym.o: $S/ddb/db_sym.c
	${NORMAL_C}

db_trap.o: $S/ddb/db_trap.c
	${NORMAL_C}

db_variables.o: $S/ddb/db_variables.c
	${NORMAL_C}

db_watch.o: $S/ddb/db_watch.c
	${NORMAL_C}

db_write_cmd.o: $S/ddb/db_write_cmd.c
	${NORMAL_C}

db_xxx.o: $S/ddb/db_xxx.c
	${NORMAL_C}

dtv_buffer.o: $S/dev/dtv/dtv_buffer.c
	${NORMAL_C}

dtv_demux.o: $S/dev/dtv/dtv_demux.c
	${NORMAL_C}

dtv_device.o: $S/dev/dtv/dtv_device.c
	${NORMAL_C}

dtv_ioctl.o: $S/dev/dtv/dtv_ioctl.c
	${NORMAL_C}

dtv_scatter.o: $S/dev/dtv/dtv_scatter.c
	${NORMAL_C}

dtv_math.o: $S/dev/dtv/dtv_math.c
	${NORMAL_C}

i2c.o: $S/dev/i2c/i2c.c
	${NORMAL_C}

i2c_exec.o: $S/dev/i2c/i2c_exec.c
	${NORMAL_C}

i2c_subr.o: $S/dev/i2c/i2c_subr.c
	${NORMAL_C}

i2c_bitbang.o: $S/dev/i2c/i2c_bitbang.c
	${NORMAL_C}

au8522.o: $S/dev/i2c/au8522.c
	${NORMAL_C}

lg3303.o: $S/dev/i2c/lg3303.c
	${NORMAL_C}

xc3028.o: $S/dev/i2c/xc3028.c
	${NORMAL_C}

xc5k.o: $S/dev/i2c/xc5k.c
	${NORMAL_C}

tvpll.o: $S/dev/i2c/tvpll.c
	${NORMAL_C}

tvpll_tuners.o: $S/dev/i2c/tvpll_tuners.c
	${NORMAL_C}

nxt2k.o: $S/dev/i2c/nxt2k.c
	${NORMAL_C}

mt2131.o: $S/dev/i2c/mt2131.c
	${NORMAL_C}

cx24227.o: $S/dev/i2c/cx24227.c
	${NORMAL_C}

at24cxx.o: $S/dev/i2c/at24cxx.c
	${NORMAL_C}

irframe.o: $S/dev/ir/irframe.c
	${NORMAL_C}

cir.o: $S/dev/ir/cir.c
	${NORMAL_C}

irframe_tty.o: $S/dev/ir/irframe_tty.c
	${NORMAL_C}

ir.o: $S/dev/ir/ir.c
	${NORMAL_C}

sir.o: $S/dev/ir/sir.c
	${NORMAL_C}

lpt.o: $S/dev/ic/lpt.c
	${NORMAL_C}

stb_image.o: $S/dev/stbi/stb_image.c
	${NORMAL_C}

splash.o: $S/dev/splash/splash.c
	${NORMAL_C}

videomode.o: $S/dev/videomode/videomode.c
	${NORMAL_C}

edid.o: $S/dev/videomode/edid.c
	${NORMAL_C}

vesagtf.o: $S/dev/videomode/vesagtf.c
	${NORMAL_C}

tpm.o: $S/dev/ic/tpm.c
	${NORMAL_C}

ld.o: $S/dev/ld.c
	${NORMAL_C}

mii.o: $S/dev/mii/mii.c
	${NORMAL_C}

mii_bitbang.o: $S/dev/mii/mii_bitbang.c
	${NORMAL_C}

mii_physubr.o: $S/dev/mii/mii_physubr.c
	${NORMAL_C}

mii_ethersubr.o: $S/dev/mii/mii_ethersubr.c
	${NORMAL_C}

ukphy_subr.o: $S/dev/mii/ukphy_subr.c
	${NORMAL_C}

acphy.o: $S/dev/mii/acphy.c
	${NORMAL_C}

amhphy.o: $S/dev/mii/amhphy.c
	${NORMAL_C}

bmtphy.o: $S/dev/mii/bmtphy.c
	${NORMAL_C}

brgphy.o: $S/dev/mii/brgphy.c
	${NORMAL_C}

tlphy.o: $S/dev/mii/tlphy.c
	${NORMAL_C}

nsphy.o: $S/dev/mii/nsphy.c
	${NORMAL_C}

nsphyter.o: $S/dev/mii/nsphyter.c
	${NORMAL_C}

gentbi.o: $S/dev/mii/gentbi.c
	${NORMAL_C}

glxtphy.o: $S/dev/mii/glxtphy.c
	${NORMAL_C}

gphyter.o: $S/dev/mii/gphyter.c
	${NORMAL_C}

qsphy.o: $S/dev/mii/qsphy.c
	${NORMAL_C}

inphy.o: $S/dev/mii/inphy.c
	${NORMAL_C}

iophy.o: $S/dev/mii/iophy.c
	${NORMAL_C}

exphy.o: $S/dev/mii/exphy.c
	${NORMAL_C}

lxtphy.o: $S/dev/mii/lxtphy.c
	${NORMAL_C}

makphy.o: $S/dev/mii/makphy.c
	${NORMAL_C}

icsphy.o: $S/dev/mii/icsphy.c
	${NORMAL_C}

igphy.o: $S/dev/mii/igphy.c
	${NORMAL_C}

ikphy.o: $S/dev/mii/ikphy.c
	${NORMAL_C}

sqphy.o: $S/dev/mii/sqphy.c
	${NORMAL_C}

tqphy.o: $S/dev/mii/tqphy.c
	${NORMAL_C}

dmphy.o: $S/dev/mii/dmphy.c
	${NORMAL_C}

pnaphy.o: $S/dev/mii/pnaphy.c
	${NORMAL_C}

rgephy.o: $S/dev/mii/rgephy.c
	${NORMAL_C}

urlphy.o: $S/dev/mii/urlphy.c
	${NORMAL_C}

ukphy.o: $S/dev/mii/ukphy.c
	${NORMAL_C}

ciphy.o: $S/dev/mii/ciphy.c
	${NORMAL_C}

rlphy.o: $S/dev/mii/rlphy.c
	${NORMAL_C}

atphy.o: $S/dev/mii/atphy.c
	${NORMAL_C}

ihphy.o: $S/dev/mii/ihphy.c
	${NORMAL_C}

etphy.o: $S/dev/mii/etphy.c
	${NORMAL_C}

rf_acctrace.o: $S/dev/raidframe/rf_acctrace.c
	${NORMAL_C}

rf_alloclist.o: $S/dev/raidframe/rf_alloclist.c
	${NORMAL_C}

rf_aselect.o: $S/dev/raidframe/rf_aselect.c
	${NORMAL_C}

rf_callback.o: $S/dev/raidframe/rf_callback.c
	${NORMAL_C}

rf_chaindecluster.o: $S/dev/raidframe/rf_chaindecluster.c
	${NORMAL_C}

rf_copyback.o: $S/dev/raidframe/rf_copyback.c
	${NORMAL_C}

rf_cvscan.o: $S/dev/raidframe/rf_cvscan.c
	${NORMAL_C}

rf_dagdegrd.o: $S/dev/raidframe/rf_dagdegrd.c
	${NORMAL_C}

rf_dagdegwr.o: $S/dev/raidframe/rf_dagdegwr.c
	${NORMAL_C}

rf_dagffrd.o: $S/dev/raidframe/rf_dagffrd.c
	${NORMAL_C}

rf_dagffwr.o: $S/dev/raidframe/rf_dagffwr.c
	${NORMAL_C}

rf_dagfuncs.o: $S/dev/raidframe/rf_dagfuncs.c
	${NORMAL_C}

rf_dagutils.o: $S/dev/raidframe/rf_dagutils.c
	${NORMAL_C}

rf_debugMem.o: $S/dev/raidframe/rf_debugMem.c
	${NORMAL_C}

rf_debugprint.o: $S/dev/raidframe/rf_debugprint.c
	${NORMAL_C}

rf_decluster.o: $S/dev/raidframe/rf_decluster.c
	${NORMAL_C}

rf_declusterPQ.o: $S/dev/raidframe/rf_declusterPQ.c
	${NORMAL_C}

rf_diskqueue.o: $S/dev/raidframe/rf_diskqueue.c
	${NORMAL_C}

rf_disks.o: $S/dev/raidframe/rf_disks.c
	${NORMAL_C}

rf_driver.o: $S/dev/raidframe/rf_driver.c
	${NORMAL_C}

rf_engine.o: $S/dev/raidframe/rf_engine.c
	${NORMAL_C}

rf_evenodd.o: $S/dev/raidframe/rf_evenodd.c
	${NORMAL_C}

rf_evenodd_dagfuncs.o: $S/dev/raidframe/rf_evenodd_dagfuncs.c
	${NORMAL_C}

rf_evenodd_dags.o: $S/dev/raidframe/rf_evenodd_dags.c
	${NORMAL_C}

rf_fifo.o: $S/dev/raidframe/rf_fifo.c
	${NORMAL_C}

rf_interdecluster.o: $S/dev/raidframe/rf_interdecluster.c
	${NORMAL_C}

rf_invertq.o: $S/dev/raidframe/rf_invertq.c
	${NORMAL_C}

rf_layout.o: $S/dev/raidframe/rf_layout.c
	${NORMAL_C}

rf_map.o: $S/dev/raidframe/rf_map.c
	${NORMAL_C}

rf_mcpair.o: $S/dev/raidframe/rf_mcpair.c
	${NORMAL_C}

rf_netbsdkintf.o: $S/dev/raidframe/rf_netbsdkintf.c
	${NORMAL_C}

rf_nwayxor.o: $S/dev/raidframe/rf_nwayxor.c
	${NORMAL_C}

rf_options.o: $S/dev/raidframe/rf_options.c
	${NORMAL_C}

rf_paritylog.o: $S/dev/raidframe/rf_paritylog.c
	${NORMAL_C}

rf_paritylogDiskMgr.o: $S/dev/raidframe/rf_paritylogDiskMgr.c
	${NORMAL_C}

rf_paritylogging.o: $S/dev/raidframe/rf_paritylogging.c
	${NORMAL_C}

rf_parityloggingdags.o: $S/dev/raidframe/rf_parityloggingdags.c
	${NORMAL_C}

rf_paritymap.o: $S/dev/raidframe/rf_paritymap.c
	${NORMAL_C}

rf_parityscan.o: $S/dev/raidframe/rf_parityscan.c
	${NORMAL_C}

rf_pq.o: $S/dev/raidframe/rf_pq.c
	${NORMAL_C}

rf_pqdeg.o: $S/dev/raidframe/rf_pqdeg.c
	${NORMAL_C}

rf_pqdegdags.o: $S/dev/raidframe/rf_pqdegdags.c
	${NORMAL_C}

rf_psstatus.o: $S/dev/raidframe/rf_psstatus.c
	${NORMAL_C}

rf_raid0.o: $S/dev/raidframe/rf_raid0.c
	${NORMAL_C}

rf_raid1.o: $S/dev/raidframe/rf_raid1.c
	${NORMAL_C}

rf_raid4.o: $S/dev/raidframe/rf_raid4.c
	${NORMAL_C}

rf_raid5.o: $S/dev/raidframe/rf_raid5.c
	${NORMAL_C}

rf_raid5_rotatedspare.o: $S/dev/raidframe/rf_raid5_rotatedspare.c
	${NORMAL_C}

rf_reconbuffer.o: $S/dev/raidframe/rf_reconbuffer.c
	${NORMAL_C}

rf_reconmap.o: $S/dev/raidframe/rf_reconmap.c
	${NORMAL_C}

rf_reconstruct.o: $S/dev/raidframe/rf_reconstruct.c
	${NORMAL_C}

rf_reconutil.o: $S/dev/raidframe/rf_reconutil.c
	${NORMAL_C}

rf_revent.o: $S/dev/raidframe/rf_revent.c
	${NORMAL_C}

rf_shutdown.o: $S/dev/raidframe/rf_shutdown.c
	${NORMAL_C}

rf_sstf.o: $S/dev/raidframe/rf_sstf.c
	${NORMAL_C}

rf_states.o: $S/dev/raidframe/rf_states.c
	${NORMAL_C}

rf_stripelocks.o: $S/dev/raidframe/rf_stripelocks.c
	${NORMAL_C}

rf_strutils.o: $S/dev/raidframe/rf_strutils.c
	${NORMAL_C}

rf_utils.o: $S/dev/raidframe/rf_utils.c
	${NORMAL_C}

rf_compat50.o: $S/dev/raidframe/rf_compat50.c
	${NORMAL_C}

aic6360.o: $S/dev/ic/aic6360.c
	${NORMAL_C}

smc93cx6.o: $S/dev/ic/smc93cx6.c
	${NORMAL_C}

aic7xxx.o: $S/dev/ic/aic7xxx.c
	${NORMAL_C}

aic7xxx_osm.o: $S/dev/ic/aic7xxx_osm.c
	${NORMAL_C}

aic7xxx_seeprom.o: $S/dev/ic/aic7xxx_seeprom.c
	${NORMAL_C}

aic79xx.o: $S/dev/ic/aic79xx.c
	${NORMAL_C}

aic79xx_osm.o: $S/dev/ic/aic79xx_osm.c
	${NORMAL_C}

dpt.o: $S/dev/ic/dpt.c
	${NORMAL_C}

cac.o: $S/dev/ic/cac.c
	${NORMAL_C}

ld_cac.o: $S/dev/ic/ld_cac.c
	${NORMAL_C}

ciss.o: $S/dev/ic/ciss.c
	${NORMAL_C}

mlx.o: $S/dev/ic/mlx.c
	${NORMAL_C}

ld_mlx.o: $S/dev/ic/ld_mlx.c
	${NORMAL_C}

icp.o: $S/dev/ic/icp.c
	${NORMAL_C}

icp_ioctl.o: $S/dev/ic/icp_ioctl.c
	${NORMAL_C}

ld_icp.o: $S/dev/ic/ld_icp.c
	${NORMAL_C}

icpsp.o: $S/dev/ic/icpsp.c
	${NORMAL_C}

aac.o: $S/dev/ic/aac.c
	${NORMAL_C}

ld_aac.o: $S/dev/ic/ld_aac.c
	${NORMAL_C}

adv.o: $S/dev/ic/adv.c
	${NORMAL_C}

advlib.o: $S/dev/ic/advlib.c
	${NORMAL_C}

advmcode.o: $S/dev/ic/advmcode.c
	${NORMAL_C}

adw.o: $S/dev/ic/adw.c
	${NORMAL_C}

bha.o: $S/dev/ic/bha.c
	${NORMAL_C}

iha.o: $S/dev/ic/iha.c
	${NORMAL_C}

isp.o: $S/dev/ic/isp.c
	${NORMAL_C}

isp_library.o: $S/dev/ic/isp_library.c
	${NORMAL_C}

isp_netbsd.o: $S/dev/ic/isp_netbsd.c
	${NORMAL_C}

mfi.o: $S/dev/ic/mfi.c
	${NORMAL_C}

mpt.o: $S/dev/ic/mpt.c
	${NORMAL_C}

mpt_debug.o: $S/dev/ic/mpt_debug.c
	${NORMAL_C}

mpt_netbsd.o: $S/dev/ic/mpt_netbsd.c
	${NORMAL_C}

siop_common.o: $S/dev/ic/siop_common.c
	${NORMAL_C}

siop.o: $S/dev/ic/siop.c
	${NORMAL_C}

esiop.o: $S/dev/ic/esiop.c
	${NORMAL_C}

an.o: $S/dev/ic/an.c
	${NORMAL_C}

awi.o: $S/dev/ic/awi.c
	${NORMAL_C}

am79c930.o: $S/dev/ic/am79c930.c
	${NORMAL_C}

wi.o: $S/dev/ic/wi.c
	${NORMAL_C}

ah.o: $S/external/isc/atheros_hal/dist/ah.c
	${NORMAL_C}

ah_eeprom_v1.o: $S/external/isc/atheros_hal/dist/ah_eeprom_v1.c
	${NORMAL_C}

ah_eeprom_v3.o: $S/external/isc/atheros_hal/dist/ah_eeprom_v3.c
	${NORMAL_C}

ah_eeprom_v14.o: $S/external/isc/atheros_hal/dist/ah_eeprom_v14.c
	${NORMAL_C}

ah_eeprom_v4k.o: $S/external/isc/atheros_hal/dist/ah_eeprom_v4k.c
	${NORMAL_C}

ah_regdomain.o: $S/external/isc/atheros_hal/dist/ah_regdomain.c
	${NORMAL_C}

ah_osdep.o: $S/external/isc/atheros_hal/ic/ah_osdep.c
	${NORMAL_C}

ar5210_attach.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_attach.c
	${NORMAL_C}

ar5210_beacon.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_beacon.c
	${NORMAL_C}

ar5210_interrupts.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_interrupts.c
	${NORMAL_C}

ar5210_keycache.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_keycache.c
	${NORMAL_C}

ar5210_misc.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_misc.c
	${NORMAL_C}

ar5210_phy.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_phy.c
	${NORMAL_C}

ar5210_power.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_power.c
	${NORMAL_C}

ar5210_recv.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_recv.c
	${NORMAL_C}

ar5210_reset.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_reset.c
	${NORMAL_C}

ar5210_xmit.o: $S/external/isc/atheros_hal/dist/ar5210/ar5210_xmit.c
	${NORMAL_C}

ar5211_attach.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_attach.c
	${NORMAL_C}

ar5211_beacon.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_beacon.c
	${NORMAL_C}

ar5211_interrupts.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_interrupts.c
	${NORMAL_C}

ar5211_keycache.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_keycache.c
	${NORMAL_C}

ar5211_misc.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_misc.c
	${NORMAL_C}

ar5211_phy.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_phy.c
	${NORMAL_C}

ar5211_power.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_power.c
	${NORMAL_C}

ar5211_recv.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_recv.c
	${NORMAL_C}

ar5211_reset.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_reset.c
	${NORMAL_C}

ar5211_xmit.o: $S/external/isc/atheros_hal/dist/ar5211/ar5211_xmit.c
	${NORMAL_C}

ar2316.o: $S/external/isc/atheros_hal/dist/ar5212/ar2316.c
	${NORMAL_C}

ar2317.o: $S/external/isc/atheros_hal/dist/ar5212/ar2317.c
	${NORMAL_C}

ar2413.o: $S/external/isc/atheros_hal/dist/ar5212/ar2413.c
	${NORMAL_C}

ar2425.o: $S/external/isc/atheros_hal/dist/ar5212/ar2425.c
	${NORMAL_C}

ar5111.o: $S/external/isc/atheros_hal/dist/ar5212/ar5111.c
	${NORMAL_C}

ar5112.o: $S/external/isc/atheros_hal/dist/ar5212/ar5112.c
	${NORMAL_C}

ar5413.o: $S/external/isc/atheros_hal/dist/ar5212/ar5413.c
	${NORMAL_C}

ar5212_ani.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_ani.c
	${NORMAL_C}

ar5212_attach.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_attach.c
	${NORMAL_C}

ar5212_beacon.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_beacon.c
	${NORMAL_C}

ar5212_eeprom.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_eeprom.c
	${NORMAL_C}

ar5212_gpio.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_gpio.c
	${NORMAL_C}

ar5212_interrupts.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_interrupts.c
	${NORMAL_C}

ar5212_keycache.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_keycache.c
	${NORMAL_C}

ar5212_misc.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_misc.c
	${NORMAL_C}

ar5212_phy.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_phy.c
	${NORMAL_C}

ar5212_power.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_power.c
	${NORMAL_C}

ar5212_recv.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_recv.c
	${NORMAL_C}

ar5212_reset.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_reset.c
	${NORMAL_C}

ar5212_rfgain.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_rfgain.c
	${NORMAL_C}

ar5212_xmit.o: $S/external/isc/atheros_hal/dist/ar5212/ar5212_xmit.c
	${NORMAL_C}

ar2133.o: $S/external/isc/atheros_hal/dist/ar5416/ar2133.c
	${NORMAL_C}

ar5416_ani.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_ani.c
	${NORMAL_C}

ar5416_attach.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_attach.c
	${NORMAL_C}

ar5416_beacon.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_beacon.c
	${NORMAL_C}

ar5416_cal.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_cal.c
	${NORMAL_C}

ar5416_cal_adcdc.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_adcdc.c
	${NORMAL_C}

ar5416_cal_adcgain.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_adcgain.c
	${NORMAL_C}

ar5416_cal_iq.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_cal_iq.c
	${NORMAL_C}

ar5416_eeprom.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_eeprom.c
	${NORMAL_C}

ar5416_gpio.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_gpio.c
	${NORMAL_C}

ar5416_interrupts.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_interrupts.c
	${NORMAL_C}

ar5416_keycache.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_keycache.c
	${NORMAL_C}

ar5416_misc.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_misc.c
	${NORMAL_C}

ar5416_phy.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_phy.c
	${NORMAL_C}

ar5416_power.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_power.c
	${NORMAL_C}

ar5416_recv.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_recv.c
	${NORMAL_C}

ar5416_reset.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_reset.c
	${NORMAL_C}

ar5416_xmit.o: $S/external/isc/atheros_hal/dist/ar5416/ar5416_xmit.c
	${NORMAL_C}

ar9160_attach.o: $S/external/isc/atheros_hal/dist/ar5416/ar9160_attach.c
	${NORMAL_C}

ar9280.o: $S/external/isc/atheros_hal/dist/ar5416/ar9280.c
	${NORMAL_C}

ar9280_attach.o: $S/external/isc/atheros_hal/dist/ar5416/ar9280_attach.c
	${NORMAL_C}

ar9285.o: $S/external/isc/atheros_hal/dist/ar5416/ar9285.c
	${NORMAL_C}

ar9285_attach.o: $S/external/isc/atheros_hal/dist/ar5416/ar9285_attach.c
	${NORMAL_C}

ar9285_reset.o: $S/external/isc/atheros_hal/dist/ar5416/ar9285_reset.c
	${NORMAL_C}

ath.o: $S/dev/ic/ath.c
	${NORMAL_C}

ath_netbsd.o: $S/dev/ic/ath_netbsd.c
	${NORMAL_C}

athrate-sample.o: $S/dev/ic/athrate-sample.c
	${NORMAL_C}

atw.o: $S/dev/ic/atw.c
	${NORMAL_C}

rtw.o: $S/dev/ic/rtw.c
	${NORMAL_C}

rtwphy.o: $S/dev/ic/rtwphy.c
	${NORMAL_C}

rtwphyio.o: $S/dev/ic/rtwphyio.c
	${NORMAL_C}

rt2560.o: $S/dev/ic/rt2560.c
	${NORMAL_C}

rt2661.o: $S/dev/ic/rt2661.c
	${NORMAL_C}

elink3.o: $S/dev/ic/elink3.c
	${NORMAL_C}

elinkxl.o: $S/dev/ic/elinkxl.c
	${NORMAL_C}

am79900.o: $S/dev/ic/am79900.c
	${NORMAL_C}

lance.o: $S/dev/ic/lance.c
	${NORMAL_C}

hme.o: $S/dev/ic/hme.c
	${NORMAL_C}

dp8390.o: $S/dev/ic/dp8390.c
	${NORMAL_C}

pdq.o: $S/dev/ic/pdq.c
	${NORMAL_C}

pdq_ifsubr.o: $S/dev/ic/pdq_ifsubr.c
	${NORMAL_C}

cy.o: $S/dev/ic/cy.c
	${NORMAL_C}

midway.o: $S/dev/ic/midway.c
	${NORMAL_C}

ncr53c9x.o: $S/dev/ic/ncr53c9x.c
	${NORMAL_C}

mb89352.o: $S/dev/ic/mb89352.c
	${NORMAL_C}

hd64570.o: $S/dev/ic/hd64570.c
	${NORMAL_C}

i82557.o: $S/dev/ic/i82557.c
	${NORMAL_C}

smc91cxx.o: $S/dev/ic/smc91cxx.c
	${NORMAL_C}

smc83c170.o: $S/dev/ic/smc83c170.c
	${NORMAL_C}

mb86960.o: $S/dev/ic/mb86960.c
	${NORMAL_C}

ne2000.o: $S/dev/ic/ne2000.c
	${NORMAL_C}

com.o: $S/dev/ic/com.c
	${NORMAL_C}

pckbc.o: $S/dev/ic/pckbc.c
	${NORMAL_C}

attimer.o: $S/dev/ic/attimer.c
	${NORMAL_C}

ug.o: $S/dev/ic/ug.c
	${NORMAL_C}

rrunner.o: $S/dev/ic/rrunner.c
	${NORMAL_C}

opl.o: $S/dev/ic/opl.c
	${NORMAL_C}

oplinstrs.o: $S/dev/ic/oplinstrs.c
	${NORMAL_C}

mpu.o: $S/dev/ic/mpu.c
	${NORMAL_C}

ac97.o: $S/dev/ic/ac97.c
	${NORMAL_C}

rtl80x9.o: $S/dev/ic/rtl80x9.c
	${NORMAL_C}

rtl81x9.o: $S/dev/ic/rtl81x9.c
	${NORMAL_C}

rtl8169.o: $S/dev/ic/rtl8169.c
	${NORMAL_C}

wdc.o: $S/dev/ic/wdc.c
	${NORMAL_C}

ninjaata32.o: $S/dev/ic/ninjaata32.c
	${NORMAL_C}

ahcisata_core.o: $S/dev/ic/ahcisata_core.c
	${NORMAL_C}

siisata.o: $S/dev/ic/siisata.c
	${NORMAL_C}

mvsata.o: $S/dev/ic/mvsata.c
	${NORMAL_C}

tulip.o: $S/dev/ic/tulip.c
	${NORMAL_C}

aic6915.o: $S/dev/ic/aic6915.c
	${NORMAL_C}

dl10019.o: $S/dev/ic/dl10019.c
	${NORMAL_C}

ax88190.o: $S/dev/ic/ax88190.c
	${NORMAL_C}

cs89x0.o: $S/dev/ic/cs89x0.c
	${NORMAL_C}

acpipmtimer.o: $S/dev/ic/acpipmtimer.c
	${NORMAL_C}

hpet.o: $S/dev/ic/hpet.c
	${NORMAL_C}

drm_agpsupport.o: $S/dev/pci/drm/drm_agpsupport.c
	${NORMAL_C}

drm_bufs.o: $S/dev/pci/drm/drm_bufs.c
	${NORMAL_C}

drm_context.o: $S/dev/pci/drm/drm_context.c
	${NORMAL_C}

drm_drv.o: $S/dev/pci/drm/drm_drv.c
	${NORMAL_C}

drm_irq.o: $S/dev/pci/drm/drm_irq.c
	${NORMAL_C}

drm_lock.o: $S/dev/pci/drm/drm_lock.c
	${NORMAL_C}

drm_memory.o: $S/dev/pci/drm/drm_memory.c
	${NORMAL_C}

drm_scatter.o: $S/dev/pci/drm/drm_scatter.c
	${NORMAL_C}

i915_drv.o: $S/dev/pci/drm/i915_drv.c
	${NORMAL_C}

i915_irq.o: $S/dev/pci/drm/i915_irq.c
	${NORMAL_C}

i915_suspend.o: $S/dev/pci/drm/i915_suspend.c
	${NORMAL_C}

pcdisplay_subr.o: $S/dev/ic/pcdisplay_subr.c
	${NORMAL_C}

pcdisplay_chars.o: $S/dev/ic/pcdisplay_chars.c
	${NORMAL_C}

vga.o: $S/dev/ic/vga.c
	${NORMAL_C}

vga_subr.o: $S/dev/ic/vga_subr.c
	${NORMAL_C}

vga_common.o: $S/dev/ic/vga_common.c
	${NORMAL_C}

wsdisplay.o: $S/dev/wscons/wsdisplay.c
	${NORMAL_C}

wsdisplay_compat_usl.o: $S/dev/wscons/wsdisplay_compat_usl.c
	${NORMAL_C}

wsdisplay_util.o: $S/dev/wscons/wsdisplay_util.c
	${NORMAL_C}

wsemulconf.o: $S/dev/wscons/wsemulconf.c
	${NORMAL_C}

wsemul_dumb.o: $S/dev/wscons/wsemul_dumb.c
	${NORMAL_C}

wsemul_vt100.o: $S/dev/wscons/wsemul_vt100.c
	${NORMAL_C}

wsemul_vt100_subr.o: $S/dev/wscons/wsemul_vt100_subr.c
	${NORMAL_C}

wsemul_vt100_chars.o: $S/dev/wscons/wsemul_vt100_chars.c
	${NORMAL_C}

wsemul_vt100_keys.o: $S/dev/wscons/wsemul_vt100_keys.c
	${NORMAL_C}

wsevent.o: $S/dev/wscons/wsevent.c
	${NORMAL_C}

wskbd.o: $S/dev/wscons/wskbd.c
	${NORMAL_C}

wskbdutil.o: $S/dev/wscons/wskbdutil.c
	${NORMAL_C}

wsmouse.o: $S/dev/wscons/wsmouse.c
	${NORMAL_C}

wsmux.o: $S/dev/wscons/wsmux.c
	${NORMAL_C}

tpcalib.o: $S/dev/wscons/tpcalib.c
	${NORMAL_C}

mra.o: $S/dev/wscons/mra.c
	${NORMAL_C}

wsdisplay_vcons.o: $S/dev/wscons/wsdisplay_vcons.c
	${NORMAL_C}

wsdisplay_vcons_util.o: $S/dev/wscons/wsdisplay_vcons_util.c
	${NORMAL_C}

rasops.o: $S/dev/rasops/rasops.c
	${NORMAL_C}

rasops_masks.o: $S/dev/rasops/rasops_masks.c
	${NORMAL_C}

rasops1.o: $S/dev/rasops/rasops1.c
	${NORMAL_C}

rasops2.o: $S/dev/rasops/rasops2.c
	${NORMAL_C}

rasops8.o: $S/dev/rasops/rasops8.c
	${NORMAL_C}

rasops15.o: $S/dev/rasops/rasops15.c
	${NORMAL_C}

rasops24.o: $S/dev/rasops/rasops24.c
	${NORMAL_C}

rasops32.o: $S/dev/rasops/rasops32.c
	${NORMAL_C}

wsfont.o: $S/dev/wsfont/wsfont.c
	${NORMAL_C}

wsfontdev.o: $S/dev/wsfont/wsfontdev.c
	${NORMAL_C}

genfb.o: $S/dev/wsfb/genfb.c
	${NORMAL_C}

usbroothub_subr.o: $S/dev/usb/usbroothub_subr.c
	${NORMAL_C}

uhci.o: $S/dev/usb/uhci.c
	${NORMAL_C}

ohci.o: $S/dev/usb/ohci.c
	${NORMAL_C}

ehci.o: $S/dev/usb/ehci.c
	${NORMAL_C}

sl811hs.o: $S/dev/ic/sl811hs.c
	${NORMAL_C}

hid.o: $S/dev/usb/hid.c
	${NORMAL_C}

sdhc.o: $S/dev/sdmmc/sdhc.c
	${NORMAL_C}

w83l518d.o: $S/dev/ic/w83l518d.c
	${NORMAL_C}

w83l518d_sdmmc.o: $S/dev/ic/w83l518d_sdmmc.c
	${NORMAL_C}

mtd803.o: $S/dev/ic/mtd803.c
	${NORMAL_C}

spic.o: $S/dev/ic/spic.c
	${NORMAL_C}

bwi.o: $S/dev/ic/bwi.c
	${NORMAL_C}

kern_verifiedexec.o: $S/kern/kern_verifiedexec.c
	${NORMAL_C}

verified_exec.o: $S/dev/verified_exec.c
	${NORMAL_C}

kern_drvctl.o: $S/kern/kern_drvctl.c
	${NORMAL_C}

putter.o: $S/dev/putter/putter.c
	${NORMAL_C}

coda_namecache.o: $S/coda/coda_namecache.c
	${NORMAL_C}

coda_subr.o: $S/coda/coda_subr.c
	${NORMAL_C}

coda_venus.o: $S/coda/coda_venus.c
	${NORMAL_C}

coda_vfsops.o: $S/coda/coda_vfsops.c
	${NORMAL_C}

coda_vnops.o: $S/coda/coda_vnops.c
	${NORMAL_C}

coda_psdev.o: $S/coda/coda_psdev.c
	${NORMAL_C}

cd9660_bmap.o: $S/fs/cd9660/cd9660_bmap.c
	${NORMAL_C}

cd9660_lookup.o: $S/fs/cd9660/cd9660_lookup.c
	${NORMAL_C}

cd9660_node.o: $S/fs/cd9660/cd9660_node.c
	${NORMAL_C}

cd9660_rrip.o: $S/fs/cd9660/cd9660_rrip.c
	${NORMAL_C}

cd9660_util.o: $S/fs/cd9660/cd9660_util.c
	${NORMAL_C}

cd9660_vfsops.o: $S/fs/cd9660/cd9660_vfsops.c
	${NORMAL_C}

cd9660_vnops.o: $S/fs/cd9660/cd9660_vnops.c
	${NORMAL_C}

msdosfs_conv.o: $S/fs/msdosfs/msdosfs_conv.c
	${NORMAL_C}

msdosfs_denode.o: $S/fs/msdosfs/msdosfs_denode.c
	${NORMAL_C}

msdosfs_fat.o: $S/fs/msdosfs/msdosfs_fat.c
	${NORMAL_C}

msdosfs_lookup.o: $S/fs/msdosfs/msdosfs_lookup.c
	${NORMAL_C}

msdosfs_vfsops.o: $S/fs/msdosfs/msdosfs_vfsops.c
	${NORMAL_C}

msdosfs_vnops.o: $S/fs/msdosfs/msdosfs_vnops.c
	${NORMAL_C}

ntfs_compr.o: $S/fs/ntfs/ntfs_compr.c
	${NORMAL_C}

ntfs_conv.o: $S/fs/ntfs/ntfs_conv.c
	${NORMAL_C}

ntfs_ihash.o: $S/fs/ntfs/ntfs_ihash.c
	${NORMAL_C}

ntfs_subr.o: $S/fs/ntfs/ntfs_subr.c
	${NORMAL_C}

ntfs_vfsops.o: $S/fs/ntfs/ntfs_vfsops.c
	${NORMAL_C}

ntfs_vnops.o: $S/fs/ntfs/ntfs_vnops.c
	${NORMAL_C}

ptyfs_subr.o: $S/fs/ptyfs/ptyfs_subr.c
	${NORMAL_C}

ptyfs_vfsops.o: $S/fs/ptyfs/ptyfs_vfsops.c
	${NORMAL_C}

ptyfs_vnops.o: $S/fs/ptyfs/ptyfs_vnops.c
	${NORMAL_C}

puffs_compat.o: $S/fs/puffs/puffs_compat.c
	${NORMAL_C}

puffs_msgif.o: $S/fs/puffs/puffs_msgif.c
	${NORMAL_C}

puffs_node.o: $S/fs/puffs/puffs_node.c
	${NORMAL_C}

puffs_subr.o: $S/fs/puffs/puffs_subr.c
	${NORMAL_C}

puffs_vfsops.o: $S/fs/puffs/puffs_vfsops.c
	${NORMAL_C}

puffs_vnops.o: $S/fs/puffs/puffs_vnops.c
	${NORMAL_C}

smbfs_io.o: $S/fs/smbfs/smbfs_io.c
	${NORMAL_C}

smbfs_kq.o: $S/fs/smbfs/smbfs_kq.c
	${NORMAL_C}

smbfs_node.o: $S/fs/smbfs/smbfs_node.c
	${NORMAL_C}

smbfs_smb.o: $S/fs/smbfs/smbfs_smb.c
	${NORMAL_C}

smbfs_subr.o: $S/fs/smbfs/smbfs_subr.c
	${NORMAL_C}

smbfs_vfsops.o: $S/fs/smbfs/smbfs_vfsops.c
	${NORMAL_C}

smbfs_vnops.o: $S/fs/smbfs/smbfs_vnops.c
	${NORMAL_C}

tmpfs_fifoops.o: $S/fs/tmpfs/tmpfs_fifoops.c
	${NORMAL_C}

tmpfs_mem.o: $S/fs/tmpfs/tmpfs_mem.c
	${NORMAL_C}

tmpfs_specops.o: $S/fs/tmpfs/tmpfs_specops.c
	${NORMAL_C}

tmpfs_subr.o: $S/fs/tmpfs/tmpfs_subr.c
	${NORMAL_C}

tmpfs_vfsops.o: $S/fs/tmpfs/tmpfs_vfsops.c
	${NORMAL_C}

tmpfs_vnops.o: $S/fs/tmpfs/tmpfs_vnops.c
	${NORMAL_C}

union_subr.o: $S/fs/union/union_subr.c
	${NORMAL_C}

union_vfsops.o: $S/fs/union/union_vfsops.c
	${NORMAL_C}

union_vnops.o: $S/fs/union/union_vnops.c
	${NORMAL_C}

fdesc_vfsops.o: $S/miscfs/fdesc/fdesc_vfsops.c
	${NORMAL_C}

fdesc_vnops.o: $S/miscfs/fdesc/fdesc_vnops.c
	${NORMAL_C}

kernfs_subr.o: $S/miscfs/kernfs/kernfs_subr.c
	${NORMAL_C}

kernfs_vfsops.o: $S/miscfs/kernfs/kernfs_vfsops.c
	${NORMAL_C}

kernfs_vnops.o: $S/miscfs/kernfs/kernfs_vnops.c
	${NORMAL_C}

null_vfsops.o: $S/miscfs/nullfs/null_vfsops.c
	${NORMAL_C}

null_vnops.o: $S/miscfs/nullfs/null_vnops.c
	${NORMAL_C}

overlay_vfsops.o: $S/miscfs/overlay/overlay_vfsops.c
	${NORMAL_C}

overlay_vnops.o: $S/miscfs/overlay/overlay_vnops.c
	${NORMAL_C}

procfs_cmdline.o: $S/miscfs/procfs/procfs_cmdline.c
	${NORMAL_C}

procfs_ctl.o: $S/miscfs/procfs/procfs_ctl.c
	${NORMAL_C}

procfs_fd.o: $S/miscfs/procfs/procfs_fd.c
	${NORMAL_C}

procfs_fpregs.o: $S/miscfs/procfs/procfs_fpregs.c
	${NORMAL_C}

procfs_linux.o: $S/miscfs/procfs/procfs_linux.c
	${NORMAL_C}

procfs_map.o: $S/miscfs/procfs/procfs_map.c
	${NORMAL_C}

procfs_mem.o: $S/miscfs/procfs/procfs_mem.c
	${NORMAL_C}

procfs_note.o: $S/miscfs/procfs/procfs_note.c
	${NORMAL_C}

procfs_regs.o: $S/miscfs/procfs/procfs_regs.c
	${NORMAL_C}

procfs_status.o: $S/miscfs/procfs/procfs_status.c
	${NORMAL_C}

procfs_subr.o: $S/miscfs/procfs/procfs_subr.c
	${NORMAL_C}

procfs_vfsops.o: $S/miscfs/procfs/procfs_vfsops.c
	${NORMAL_C}

procfs_vnops.o: $S/miscfs/procfs/procfs_vnops.c
	${NORMAL_C}

umap_subr.o: $S/miscfs/umapfs/umap_subr.c
	${NORMAL_C}

umap_vfsops.o: $S/miscfs/umapfs/umap_vfsops.c
	${NORMAL_C}

umap_vnops.o: $S/miscfs/umapfs/umap_vnops.c
	${NORMAL_C}

krpc_subr.o: $S/nfs/krpc_subr.c
	${NORMAL_C}

nfs_bio.o: $S/nfs/nfs_bio.c
	${NORMAL_C}

nfs_boot.o: $S/nfs/nfs_boot.c
	${NORMAL_C}

nfs_bootdhcp.o: $S/nfs/nfs_bootdhcp.c
	${NORMAL_C}

nfs_bootparam.o: $S/nfs/nfs_bootparam.c
	${NORMAL_C}

nfs_clntsocket.o: $S/nfs/nfs_clntsocket.c
	${NORMAL_C}

nfs_clntsubs.o: $S/nfs/nfs_clntsubs.c
	${NORMAL_C}

nfs_export.o: $S/nfs/nfs_export.c
	${NORMAL_C}

nfs_iod.o: $S/nfs/nfs_iod.c
	${NORMAL_C}

nfs_kq.o: $S/nfs/nfs_kq.c
	${NORMAL_C}

nfs_node.o: $S/nfs/nfs_node.c
	${NORMAL_C}

nfs_serv.o: $S/nfs/nfs_serv.c
	${NORMAL_C}

nfs_socket.o: $S/nfs/nfs_socket.c
	${NORMAL_C}

nfs_srvcache.o: $S/nfs/nfs_srvcache.c
	${NORMAL_C}

nfs_srvsubs.o: $S/nfs/nfs_srvsubs.c
	${NORMAL_C}

nfs_srvsocket.o: $S/nfs/nfs_srvsocket.c
	${NORMAL_C}

nfs_subs.o: $S/nfs/nfs_subs.c
	${NORMAL_C}

nfs_syscalls.o: $S/nfs/nfs_syscalls.c
	${NORMAL_C}

nfs_vfsops.o: $S/nfs/nfs_vfsops.c
	${NORMAL_C}

nfs_vnops.o: $S/nfs/nfs_vnops.c
	${NORMAL_C}

ext2fs_alloc.o: $S/ufs/ext2fs/ext2fs_alloc.c
	${NORMAL_C}

ext2fs_balloc.o: $S/ufs/ext2fs/ext2fs_balloc.c
	${NORMAL_C}

ext2fs_bmap.o: $S/ufs/ext2fs/ext2fs_bmap.c
	${NORMAL_C}

ext2fs_bswap.o: $S/ufs/ext2fs/ext2fs_bswap.c
	${NORMAL_C}

ext2fs_inode.o: $S/ufs/ext2fs/ext2fs_inode.c
	${NORMAL_C}

ext2fs_lookup.o: $S/ufs/ext2fs/ext2fs_lookup.c
	${NORMAL_C}

ext2fs_readwrite.o: $S/ufs/ext2fs/ext2fs_readwrite.c
	${NORMAL_C}

ext2fs_subr.o: $S/ufs/ext2fs/ext2fs_subr.c
	${NORMAL_C}

ext2fs_vfsops.o: $S/ufs/ext2fs/ext2fs_vfsops.c
	${NORMAL_C}

ext2fs_vnops.o: $S/ufs/ext2fs/ext2fs_vnops.c
	${NORMAL_C}

ffs_alloc.o: $S/ufs/ffs/ffs_alloc.c
	${NORMAL_C}

ffs_balloc.o: $S/ufs/ffs/ffs_balloc.c
	${NORMAL_C}

ffs_inode.o: $S/ufs/ffs/ffs_inode.c
	${NORMAL_C}

ffs_snapshot.o: $S/ufs/ffs/ffs_snapshot.c
	${NORMAL_C}

ffs_subr.o: $S/ufs/ffs/ffs_subr.c
	${NORMAL_C}

ffs_tables.o: $S/ufs/ffs/ffs_tables.c
	${NORMAL_C}

ffs_vfsops.o: $S/ufs/ffs/ffs_vfsops.c
	${NORMAL_C}

ffs_vnops.o: $S/ufs/ffs/ffs_vnops.c
	${NORMAL_C}

ffs_wapbl.o: $S/ufs/ffs/ffs_wapbl.c
	${NORMAL_C}

ffs_quota2.o: $S/ufs/ffs/ffs_quota2.c
	${NORMAL_C}

lfs_alloc.o: $S/ufs/lfs/lfs_alloc.c
	${NORMAL_C}

lfs_balloc.o: $S/ufs/lfs/lfs_balloc.c
	${NORMAL_C}

lfs_bio.o: $S/ufs/lfs/lfs_bio.c
	${NORMAL_C}

lfs_cksum.o: $S/ufs/lfs/lfs_cksum.c
	${NORMAL_C}

lfs_debug.o: $S/ufs/lfs/lfs_debug.c
	${NORMAL_C}

lfs_inode.o: $S/ufs/lfs/lfs_inode.c
	${NORMAL_C}

lfs_itimes.o: $S/ufs/lfs/lfs_itimes.c
	${NORMAL_C}

lfs_segment.o: $S/ufs/lfs/lfs_segment.c
	${NORMAL_C}

lfs_subr.o: $S/ufs/lfs/lfs_subr.c
	${NORMAL_C}

lfs_syscalls.o: $S/ufs/lfs/lfs_syscalls.c
	${NORMAL_C}

lfs_vfsops.o: $S/ufs/lfs/lfs_vfsops.c
	${NORMAL_C}

lfs_vnops.o: $S/ufs/lfs/lfs_vnops.c
	${NORMAL_C}

mfs_vfsops.o: $S/ufs/mfs/mfs_vfsops.c
	${NORMAL_C}

mfs_vnops.o: $S/ufs/mfs/mfs_vnops.c
	${NORMAL_C}

mfs_miniroot.o: $S/ufs/mfs/mfs_miniroot.c
	${NORMAL_C}

ufs_bmap.o: $S/ufs/ufs/ufs_bmap.c
	${NORMAL_C}

ufs_ihash.o: $S/ufs/ufs/ufs_ihash.c
	${NORMAL_C}

ufs_inode.o: $S/ufs/ufs/ufs_inode.c
	${NORMAL_C}

ufs_lookup.o: $S/ufs/ufs/ufs_lookup.c
	${NORMAL_C}

ufs_quota.o: $S/ufs/ufs/ufs_quota.c
	${NORMAL_C}

ufs_quota1.o: $S/ufs/ufs/ufs_quota1.c
	${NORMAL_C}

ufs_quota2.o: $S/ufs/ufs/ufs_quota2.c
	${NORMAL_C}

quota1_subr.o: $S/ufs/ufs/quota1_subr.c
	${NORMAL_C}

quota2_subr.o: $S/ufs/ufs/quota2_subr.c
	${NORMAL_C}

ufs_vfsops.o: $S/ufs/ufs/ufs_vfsops.c
	${NORMAL_C}

ufs_vnops.o: $S/ufs/ufs/ufs_vnops.c
	${NORMAL_C}

ufs_wapbl.o: $S/ufs/ufs/ufs_wapbl.c
	${NORMAL_C}

uvm_amap.o: $S/uvm/uvm_amap.c
	${NORMAL_C}

uvm_anon.o: $S/uvm/uvm_anon.c
	${NORMAL_C}

uvm_aobj.o: $S/uvm/uvm_aobj.c
	${NORMAL_C}

uvm_bio.o: $S/uvm/uvm_bio.c
	${NORMAL_C}

uvm_coredump.o: $S/uvm/uvm_coredump.c
	${NORMAL_C}

uvm_device.o: $S/uvm/uvm_device.c
	${NORMAL_C}

uvm_emap.o: $S/uvm/uvm_emap.c
	${NORMAL_C}

uvm_fault.o: $S/uvm/uvm_fault.c
	${NORMAL_C}

uvm_glue.o: $S/uvm/uvm_glue.c
	${NORMAL_C}

uvm_init.o: $S/uvm/uvm_init.c
	${NORMAL_C}

uvm_io.o: $S/uvm/uvm_io.c
	${NORMAL_C}

uvm_km.o: $S/uvm/uvm_km.c
	${NORMAL_C}

uvm_loan.o: $S/uvm/uvm_loan.c
	${NORMAL_C}

uvm_map.o: $S/uvm/uvm_map.c
	${NORMAL_C}

uvm_meter.o: $S/uvm/uvm_meter.c
	${NORMAL_C}

uvm_mmap.o: $S/uvm/uvm_mmap.c
	${NORMAL_C}

uvm_mremap.o: $S/uvm/uvm_mremap.c
	${NORMAL_C}

uvm_object.o: $S/uvm/uvm_object.c
	${NORMAL_C}

uvm_page.o: $S/uvm/uvm_page.c
	${NORMAL_C}

uvm_pager.o: $S/uvm/uvm_pager.c
	${NORMAL_C}

uvm_pdaemon.o: $S/uvm/uvm_pdaemon.c
	${NORMAL_C}

uvm_pdpolicy_clock.o: $S/uvm/uvm_pdpolicy_clock.c
	${NORMAL_C}

uvm_pglist.o: $S/uvm/uvm_pglist.c
	${NORMAL_C}

uvm_readahead.o: $S/uvm/uvm_readahead.c
	${NORMAL_C}

uvm_stat.o: $S/uvm/uvm_stat.c
	${NORMAL_C}

uvm_swap.o: $S/uvm/uvm_swap.c
	${NORMAL_C}

uvm_unix.o: $S/uvm/uvm_unix.c
	${NORMAL_C}

uvm_user.o: $S/uvm/uvm_user.c
	${NORMAL_C}

uvm_vnode.o: $S/uvm/uvm_vnode.c
	${NORMAL_C}

secmodel.o: $S/secmodel/secmodel.c
	${NORMAL_C}

secmodel_suser.o: $S/secmodel/suser/secmodel_suser.c
	${NORMAL_C}

secmodel_securelevel.o: $S/secmodel/securelevel/secmodel_securelevel.c
	${NORMAL_C}

secmodel_extensions.o: $S/secmodel/extensions/secmodel_extensions.c
	${NORMAL_C}

secmodel_bsd44.o: $S/secmodel/bsd44/secmodel_bsd44.c
	${NORMAL_C}

compat_mod.o: $S/compat/common/compat_mod.c
	${NORMAL_C}

compat_sa.o: $S/compat/sa/compat_sa.c
	${NORMAL_C}

debugsyms.o: $S/conf/debugsyms.c
	${NORMAL_C}

auconv.o: $S/dev/auconv.c
	${NORMAL_C}

audio.o: $S/dev/audio.c
	${NORMAL_C}

aurateconv.o: $S/dev/aurateconv.c
	${NORMAL_C}

bio.o: $S/dev/bio.c
	${NORMAL_C}

ccd.o: $S/dev/ccd.c
	${NORMAL_C}

cgd.o: $S/dev/cgd.c
	${NORMAL_C}

cgd_crypto.o: $S/dev/cgd_crypto.c
	${NORMAL_C}

clock_subr.o: $S/dev/clock_subr.c
	${NORMAL_C}

clockctl.o: $S/dev/clockctl.c
	${NORMAL_C}

dksubr.o: $S/dev/dksubr.c
	${NORMAL_C}

dk.o: $S/dev/dkwedge/dk.c
	${NORMAL_C}

dkwedge_gpt.o: $S/dev/dkwedge/dkwedge_gpt.c
	${NORMAL_C}

firmload.o: $S/dev/firmload.c
	${NORMAL_C}

fss.o: $S/dev/fss.c
	${NORMAL_C}

lockstat.o: $S/dev/lockstat.c
	${NORMAL_C}

md.o: $S/dev/md.c
	${NORMAL_C}

midi.o: $S/dev/midi.c
	${NORMAL_C}

midictl.o: $S/dev/midictl.c
	${NORMAL_C}

midisyn.o: $S/dev/midisyn.c
	${NORMAL_C}

mm.o: $S/dev/mm.c
	${NORMAL_C}

mulaw.o: $S/dev/mulaw.c
	${NORMAL_C}

radio.o: $S/dev/radio.c
	${NORMAL_C}

rndpseudo.o: $S/dev/rndpseudo.c
	${NORMAL_C}

sequencer.o: $S/dev/sequencer.c
	${NORMAL_C}

video.o: $S/dev/video.c
	${NORMAL_C}

vnd.o: $S/dev/vnd.c
	${NORMAL_C}

bufq_disksort.o: $S/kern/bufq_disksort.c
	${NORMAL_C}

bufq_fcfs.o: $S/kern/bufq_fcfs.c
	${NORMAL_C}

bufq_priocscan.o: $S/kern/bufq_priocscan.c
	${NORMAL_C}

core_elf32.o: $S/kern/core_elf32.c
	${NORMAL_C}

core_elf64.o: $S/kern/core_elf64.c
	${NORMAL_C}

cnmagic.o: $S/kern/cnmagic.c
	${NORMAL_C}

exec_elf32.o: $S/kern/exec_elf32.c
	${NORMAL_C}

exec_elf64.o: $S/kern/exec_elf64.c
	${NORMAL_C}

exec_script.o: $S/kern/exec_script.c
	${NORMAL_C}

exec_subr.o: $S/kern/exec_subr.c
	${NORMAL_C}

init_main.o: $S/kern/init_main.c
	${NORMAL_C}

init_sysctl.o: $S/kern/init_sysctl.c
	${NORMAL_C}

init_sysctl_base.o: $S/kern/init_sysctl_base.c
	${NORMAL_C}

init_sysent.o: $S/kern/init_sysent.c
	${NORMAL_C}

kern_acct.o: $S/kern/kern_acct.c
	${NORMAL_C}

kern_auth.o: $S/kern/kern_auth.c
	${NORMAL_C}

kern_cfglock.o: $S/kern/kern_cfglock.c
	${NORMAL_C}

kern_clock.o: $S/kern/kern_clock.c
	${NORMAL_C}

kern_condvar.o: $S/kern/kern_condvar.c
	${NORMAL_C}

kern_core.o: $S/kern/kern_core.c
	${NORMAL_C}

kern_cpu.o: $S/kern/kern_cpu.c
	${NORMAL_C}

kern_descrip.o: $S/kern/kern_descrip.c
	${NORMAL_C}

kern_event.o: $S/kern/kern_event.c
	${NORMAL_C}

kern_exec.o: $S/kern/kern_exec.c
	${NORMAL_C}

kern_exit.o: $S/kern/kern_exit.c
	${NORMAL_C}

kern_fork.o: $S/kern/kern_fork.c
	${NORMAL_C}

kern_idle.o: $S/kern/kern_idle.c
	${NORMAL_C}

kern_hook.o: $S/kern/kern_hook.c
	${NORMAL_C}

kern_kthread.o: $S/kern/kern_kthread.c
	${NORMAL_C}

kern_ktrace.o: $S/kern/kern_ktrace.c
	${NORMAL_C}

kern_ksyms.o: $S/kern/kern_ksyms.c
	${NORMAL_C}

kern_lock.o: $S/kern/kern_lock.c
	${NORMAL_C}

kern_lwp.o: $S/kern/kern_lwp.c
	${NORMAL_C}

kern_malloc.o: $S/kern/kern_malloc.c
	${NORMAL_C}

kern_malloc_stdtype.o: $S/kern/kern_malloc_stdtype.c
	${NORMAL_C}

kern_module.o: $S/kern/kern_module.c
	${NORMAL_C}

kern_module_vfs.o: $S/kern/kern_module_vfs.c
	${NORMAL_C}

kern_mutex.o: $S/kern/kern_mutex.c
	${NORMAL_C}

kern_mutex_obj.o: $S/kern/kern_mutex_obj.c
	${NORMAL_C}

kern_fileassoc.o: $S/kern/kern_fileassoc.c
	${NORMAL_C}

kern_ntptime.o: $S/kern/kern_ntptime.c
	${NORMAL_C}

kern_pax.o: $S/kern/kern_pax.c
	${NORMAL_C}

kern_physio.o: $S/kern/kern_physio.c
	${NORMAL_C}

kern_pmf.o: $S/kern/kern_pmf.c
	${NORMAL_C}

kern_proc.o: $S/kern/kern_proc.c
	${NORMAL_C}

kern_prot.o: $S/kern/kern_prot.c
	${NORMAL_C}

kern_ras.o: $S/kern/kern_ras.c
	${NORMAL_C}

kern_rate.o: $S/kern/kern_rate.c
	${NORMAL_C}

kern_resource.o: $S/kern/kern_resource.c
	${NORMAL_C}

kern_rndpool.o: $S/kern/kern_rndpool.c
	${NORMAL_C}

kern_rndq.o: $S/kern/kern_rndq.c
	${NORMAL_C}

kern_runq.o: $S/kern/kern_runq.c
	${NORMAL_C}

kern_rwlock.o: $S/kern/kern_rwlock.c
	${NORMAL_C}

kern_rwlock_obj.o: $S/kern/kern_rwlock_obj.c
	${NORMAL_C}

kern_sig.o: $S/kern/kern_sig.c
	${NORMAL_C}

kern_sleepq.o: $S/kern/kern_sleepq.c
	${NORMAL_C}

kern_softint.o: $S/kern/kern_softint.c
	${NORMAL_C}

kern_ssp.o: $S/kern/kern_ssp.c
	${NORMAL_C}

kern_stub.o: $S/kern/kern_stub.c
	${NORMAL_C}

kern_subr.o: $S/kern/kern_subr.c
	${NORMAL_C}

kern_synch.o: $S/kern/kern_synch.c
	${NORMAL_C}

kern_syscall.o: $S/kern/kern_syscall.c
	${NORMAL_C}

kern_sysctl.o: $S/kern/kern_sysctl.c
	${NORMAL_C}

kern_tc.o: $S/kern/kern_tc.c
	${NORMAL_C}

kern_time.o: $S/kern/kern_time.c
	${NORMAL_C}

kern_timeout.o: $S/kern/kern_timeout.c
	${NORMAL_C}

kern_turnstile.o: $S/kern/kern_turnstile.c
	${NORMAL_C}

kern_todr.o: $S/kern/kern_todr.c
	${NORMAL_C}

kern_uidinfo.o: $S/kern/kern_uidinfo.c
	${NORMAL_C}

kern_uuid.o: $S/kern/kern_uuid.c
	${NORMAL_C}

kern_xxx.o: $S/kern/kern_xxx.c
	${NORMAL_C}

sched_4bsd.o: $S/kern/sched_4bsd.c
	${NORMAL_C}

subr_autoconf.o: $S/kern/subr_autoconf.c
	${NORMAL_C}

subr_blist.o: $S/kern/subr_blist.c
	${NORMAL_C}

subr_bufq.o: $S/kern/subr_bufq.c
	${NORMAL_C}

subr_callback.o: $S/kern/subr_callback.c
	${NORMAL_C}

subr_cprng.o: $S/kern/subr_cprng.c
	${NORMAL_C}

subr_cpufreq.o: $S/kern/subr_cpufreq.c
	${NORMAL_C}

subr_copy.o: $S/kern/subr_copy.c
	${NORMAL_C}

subr_device.o: $S/kern/subr_device.c
	${NORMAL_C}

subr_devsw.o: $S/kern/subr_devsw.c
	${NORMAL_C}

subr_disk.o: $S/kern/subr_disk.c
	${NORMAL_C}

subr_disk_open.o: $S/kern/subr_disk_open.c
	${NORMAL_C}

subr_evcnt.o: $S/kern/subr_evcnt.c
	${NORMAL_C}

subr_exec_fd.o: $S/kern/subr_exec_fd.c
	${NORMAL_C}

subr_extent.o: $S/kern/subr_extent.c
	${NORMAL_C}

subr_hash.o: $S/kern/subr_hash.c
	${NORMAL_C}

subr_humanize.o: $S/kern/subr_humanize.c
	${NORMAL_C}

subr_iostat.o: $S/kern/subr_iostat.c
	${NORMAL_C}

subr_kcpuset.o: $S/kern/subr_kcpuset.c
	${NORMAL_C}

subr_kmem.o: $S/kern/subr_kmem.c
	${NORMAL_C}

subr_kobj.o: $S/kern/subr_kobj.c
	${NORMAL_C}

subr_kobj_vfs.o: $S/kern/subr_kobj_vfs.c
	${NORMAL_C}

subr_lockdebug.o: $S/kern/subr_lockdebug.c
	${NORMAL_C}

subr_log.o: $S/kern/subr_log.c
	${NORMAL_C}

subr_lwp_specificdata.o: $S/kern/subr_lwp_specificdata.c
	${NORMAL_C}

subr_once.o: $S/kern/subr_once.c
	${NORMAL_C}

subr_optstr.o: $S/kern/subr_optstr.c
	${NORMAL_C}

subr_pcq.o: $S/kern/subr_pcq.c
	${NORMAL_C}

subr_pcu.o: $S/kern/subr_pcu.c
	${NORMAL_C}

subr_percpu.o: $S/kern/subr_percpu.c
	${NORMAL_C}

subr_pool.o: $S/kern/subr_pool.c
	${NORMAL_C}

subr_prf.o: $S/kern/subr_prf.c
	${NORMAL_C}

subr_prof.o: $S/kern/subr_prof.c
	${NORMAL_C}

subr_pserialize.o: $S/kern/subr_pserialize.c
	${NORMAL_C}

subr_specificdata.o: $S/kern/subr_specificdata.c
	${NORMAL_C}

subr_time.o: $S/kern/subr_time.c
	${NORMAL_C}

subr_userconf.o: $S/kern/subr_userconf.c
	${NORMAL_C}

subr_vmem.o: $S/kern/subr_vmem.c
	${NORMAL_C}

subr_workqueue.o: $S/kern/subr_workqueue.c
	${NORMAL_C}

subr_xcall.o: $S/kern/subr_xcall.c
	${NORMAL_C}

sys_aio.o: $S/kern/sys_aio.c
	${NORMAL_C}

sys_descrip.o: $S/kern/sys_descrip.c
	${NORMAL_C}

sys_generic.o: $S/kern/sys_generic.c
	${NORMAL_C}

sys_module.o: $S/kern/sys_module.c
	${NORMAL_C}

sys_mqueue.o: $S/kern/sys_mqueue.c
	${NORMAL_C}

sys_lwp.o: $S/kern/sys_lwp.c
	${NORMAL_C}

sys_pipe.o: $S/kern/sys_pipe.c
	${NORMAL_C}

sys_pmc.o: $S/kern/sys_pmc.c
	${NORMAL_C}

sys_process.o: $S/kern/sys_process.c
	${NORMAL_C}

sys_pset.o: $S/kern/sys_pset.c
	${NORMAL_C}

sys_select.o: $S/kern/sys_select.c
	${NORMAL_C}

sys_sig.o: $S/kern/sys_sig.c
	${NORMAL_C}

sys_sched.o: $S/kern/sys_sched.c
	${NORMAL_C}

sys_socket.o: $S/kern/sys_socket.c
	${NORMAL_C}

sysv_ipc.o: $S/kern/sysv_ipc.c
	${NORMAL_C}

sysv_msg.o: $S/kern/sysv_msg.c
	${NORMAL_C}

sysv_sem.o: $S/kern/sysv_sem.c
	${NORMAL_C}

sysv_shm.o: $S/kern/sysv_shm.c
	${NORMAL_C}

tty.o: $S/kern/tty.c
	${NORMAL_C}

tty_conf.o: $S/kern/tty_conf.c
	${NORMAL_C}

tty_bsdpty.o: $S/kern/tty_bsdpty.c
	${NORMAL_C}

tty_pty.o: $S/kern/tty_pty.c
	${NORMAL_C}

tty_ptm.o: $S/kern/tty_ptm.c
	${NORMAL_C}

tty_subr.o: $S/kern/tty_subr.c
	${NORMAL_C}

tty_tty.o: $S/kern/tty_tty.c
	${NORMAL_C}

uipc_accf.o: $S/kern/uipc_accf.c
	${NORMAL_C}

uipc_domain.o: $S/kern/uipc_domain.c
	${NORMAL_C}

uipc_mbuf.o: $S/kern/uipc_mbuf.c
	${NORMAL_C}

uipc_mbuf2.o: $S/kern/uipc_mbuf2.c
	${NORMAL_C}

link_proto.o: $S/net/link_proto.c
	${NORMAL_C}

uipc_proto.o: $S/kern/uipc_proto.c
	${NORMAL_C}

uipc_sem.o: $S/kern/uipc_sem.c
	${NORMAL_C}

uipc_socket.o: $S/kern/uipc_socket.c
	${NORMAL_C}

uipc_socket2.o: $S/kern/uipc_socket2.c
	${NORMAL_C}

uipc_syscalls.o: $S/kern/uipc_syscalls.c
	${NORMAL_C}

uipc_usrreq.o: $S/kern/uipc_usrreq.c
	${NORMAL_C}

vfs_bio.o: $S/kern/vfs_bio.c
	${NORMAL_C}

vfs_cache.o: $S/kern/vfs_cache.c
	${NORMAL_C}

vfs_cwd.o: $S/kern/vfs_cwd.c
	${NORMAL_C}

vfs_dirhash.o: $S/kern/vfs_dirhash.c
	${NORMAL_C}

vfs_getcwd.o: $S/kern/vfs_getcwd.c
	${NORMAL_C}

vfs_hooks.o: $S/kern/vfs_hooks.c
	${NORMAL_C}

vfs_init.o: $S/kern/vfs_init.c
	${NORMAL_C}

vfs_lockf.o: $S/kern/vfs_lockf.c
	${NORMAL_C}

vfs_lookup.o: $S/kern/vfs_lookup.c
	${NORMAL_C}

vfs_mount.o: $S/kern/vfs_mount.c
	${NORMAL_C}

vfs_quotactl.o: $S/kern/vfs_quotactl.c
	${NORMAL_C}

vfs_subr.o: $S/kern/vfs_subr.c
	${NORMAL_C}

vfs_syscalls.o: $S/kern/vfs_syscalls.c
	${NORMAL_C}

vfs_trans.o: $S/kern/vfs_trans.c
	${NORMAL_C}

vfs_vnode.o: $S/kern/vfs_vnode.c
	${NORMAL_C}

vfs_vnops.o: $S/kern/vfs_vnops.c
	${NORMAL_C}

vfs_wapbl.o: $S/kern/vfs_wapbl.c
	${NORMAL_C}

vfs_xattr.o: $S/kern/vfs_xattr.c
	${NORMAL_C}

vnode_if.o: $S/kern/vnode_if.c
	${NORMAL_C}

dead_vnops.o: $S/miscfs/deadfs/dead_vnops.c
	${NORMAL_C}

fifo_vnops.o: $S/miscfs/fifofs/fifo_vnops.c
	${NORMAL_C}

genfs_io.o: $S/miscfs/genfs/genfs_io.c
	${NORMAL_C}

genfs_rename.o: $S/miscfs/genfs/genfs_rename.c
	${NORMAL_C}

genfs_vfsops.o: $S/miscfs/genfs/genfs_vfsops.c
	${NORMAL_C}

genfs_vnops.o: $S/miscfs/genfs/genfs_vnops.c
	${NORMAL_C}

layer_subr.o: $S/miscfs/genfs/layer_subr.c
	${NORMAL_C}

layer_vfsops.o: $S/miscfs/genfs/layer_vfsops.c
	${NORMAL_C}

layer_vnops.o: $S/miscfs/genfs/layer_vnops.c
	${NORMAL_C}

spec_vnops.o: $S/miscfs/specfs/spec_vnops.c
	${NORMAL_C}

sync_subr.o: $S/miscfs/syncfs/sync_subr.c
	${NORMAL_C}

sync_vnops.o: $S/miscfs/syncfs/sync_vnops.c
	${NORMAL_C}

bpf.o: $S/net/bpf.c
	${NORMAL_C}

bpf_filter.o: $S/net/bpf_filter.c
	${NORMAL_C}

bpf_stub.o: $S/net/bpf_stub.c
	${NORMAL_C}

bsd-comp.o: $S/net/bsd-comp.c
	${NORMAL_C}

if.o: $S/net/if.c
	${NORMAL_C}

if_atmsubr.o: $S/net/if_atmsubr.c
	${NORMAL_C}

if_bridge.o: $S/net/if_bridge.c
	${NORMAL_C}

bridgestp.o: $S/net/bridgestp.c
	${NORMAL_C}

if_ethersubr.o: $S/net/if_ethersubr.c
	${NORMAL_C}

if_fddisubr.o: $S/net/if_fddisubr.c
	${NORMAL_C}

if_gif.o: $S/net/if_gif.c
	${NORMAL_C}

if_gre.o: $S/net/if_gre.c
	${NORMAL_C}

if_hippisubr.o: $S/net/if_hippisubr.c
	${NORMAL_C}

if_ieee1394subr.o: $S/net/if_ieee1394subr.c
	${NORMAL_C}

if_loop.o: $S/net/if_loop.c
	${NORMAL_C}

if_media.o: $S/net/if_media.c
	${NORMAL_C}

if_ppp.o: $S/net/if_ppp.c
	${NORMAL_C}

if_stf.o: $S/net/if_stf.c
	${NORMAL_C}

if_sl.o: $S/net/if_sl.c
	${NORMAL_C}

if_spppsubr.o: $S/net/if_spppsubr.c
	${NORMAL_C}

if_strip.o: $S/net/if_strip.c
	${NORMAL_C}

if_tap.o: $S/net/if_tap.c
	${NORMAL_C}

if_tun.o: $S/net/if_tun.c
	${NORMAL_C}

if_vlan.o: $S/net/if_vlan.c
	${NORMAL_C}

if_pppoe.o: $S/net/if_pppoe.c
	${NORMAL_C}

pfil.o: $S/net/pfil.c
	${NORMAL_C}

ppp-deflate.o: $S/net/ppp-deflate.c
	${NORMAL_C}

ppp_tty.o: $S/net/ppp_tty.c
	${NORMAL_C}

net_stats.o: $S/net/net_stats.c
	${NORMAL_C}

radix.o: $S/net/radix.c
	${NORMAL_C}

raw_cb.o: $S/net/raw_cb.c
	${NORMAL_C}

raw_usrreq.o: $S/net/raw_usrreq.c
	${NORMAL_C}

route.o: $S/net/route.c
	${NORMAL_C}

rtbl.o: $S/net/rtbl.c
	${NORMAL_C}

rtsock.o: $S/net/rtsock.c
	${NORMAL_C}

slcompress.o: $S/net/slcompress.c
	${NORMAL_C}

zlib.o: $S/net/zlib.c
	${NORMAL_C}

accf_data.o: $S/netinet/accf_data.c
	${NORMAL_C}

accf_http.o: $S/netinet/accf_http.c
	${NORMAL_C}

if_arp.o: $S/netinet/if_arp.c
	${NORMAL_C}

if_atm.o: $S/netinet/if_atm.c
	${NORMAL_C}

in4_cksum.o: $S/netinet/in4_cksum.c
	${NORMAL_C}

in_cksum.o: $S/netinet/in_cksum.c
	${NORMAL_C}

in_gif.o: $S/netinet/in_gif.c
	${NORMAL_C}

ip_ecn.o: $S/netinet/ip_ecn.c
	${NORMAL_C}

ip_encap.o: $S/netinet/ip_encap.c
	${NORMAL_C}

in6_gif.o: $S/netinet6/in6_gif.c
	${NORMAL_C}

joy.o: $S/dev/ic/joy.c
	${NORMAL_C}

if_agr.o: $S/net/agr/if_agr.c
	${NORMAL_C}

if_agrsoftc.o: $S/net/agr/if_agrsoftc.c
	${NORMAL_C}

if_agrsubr.o: $S/net/agr/if_agrsubr.c
	${NORMAL_C}

if_agrtimer.o: $S/net/agr/if_agrtimer.c
	${NORMAL_C}

if_agrmonitor.o: $S/net/agr/if_agrmonitor.c
	${NORMAL_C}

if_agrether.o: $S/net/agr/if_agrether.c
	${NORMAL_C}

if_agrether_hash.o: $S/net/agr/if_agrether_hash.c
	${NORMAL_C}

ieee8023ad_marker.o: $S/net/agr/ieee8023ad_marker.c
	${NORMAL_C}

ieee8023ad_lacp.o: $S/net/agr/ieee8023ad_lacp.c
	${NORMAL_C}

ieee8023ad_lacp_select.o: $S/net/agr/ieee8023ad_lacp_select.c
	${NORMAL_C}

ieee8023ad_lacp_timer.o: $S/net/agr/ieee8023ad_lacp_timer.c
	${NORMAL_C}

ieee8023ad_lacp_sm_rx.o: $S/net/agr/ieee8023ad_lacp_sm_rx.c
	${NORMAL_C}

ieee8023ad_lacp_sm_mux.o: $S/net/agr/ieee8023ad_lacp_sm_mux.c
	${NORMAL_C}

ieee8023ad_lacp_sm_ptx.o: $S/net/agr/ieee8023ad_lacp_sm_ptx.c
	${NORMAL_C}

ieee8023ad_lacp_sm_tx.o: $S/net/agr/ieee8023ad_lacp_sm_tx.c
	${NORMAL_C}

ieee8023ad_lacp_debug.o: $S/net/agr/ieee8023ad_lacp_debug.c
	${NORMAL_C}

ieee8023_tlv.o: $S/net/agr/ieee8023_tlv.c
	${NORMAL_C}

pad.o: $S/dev/pad/pad.c
	${NORMAL_C}

padvol.o: $S/dev/pad/padvol.c
	${NORMAL_C}

x86emu.o: $S/../common/lib/libx86emu/x86emu.c
	${NORMAL_C}

x86emu_i8254.o: $S/../common/lib/libx86emu/x86emu_i8254.c
	${NORMAL_C}

x86emu_util.o: $S/../common/lib/libx86emu/x86emu_util.c
	${NORMAL_C}

cpu.o: $S/arch/x86/x86/cpu.c
	${NORMAL_C}

acpi_cpu.o: $S/dev/acpi/acpi_cpu.c
	${NORMAL_C}

acpi_cpu_cstate.o: $S/dev/acpi/acpi_cpu_cstate.c
	${NORMAL_C}

acpi_cpu_pstate.o: $S/dev/acpi/acpi_cpu_pstate.c
	${NORMAL_C}

acpi_cpu_tstate.o: $S/dev/acpi/acpi_cpu_tstate.c
	${NORMAL_C}

acpi_cpu_md.o: $S/arch/x86/acpi/acpi_cpu_md.c
	${NORMAL_C}

coretemp.o: $S/arch/x86/x86/coretemp.c
	${NORMAL_C}

est.o: $S/arch/x86/x86/est.c
	${NORMAL_C}

intel_busclock.o: $S/arch/x86/x86/intel_busclock.c
	${NORMAL_C}

powernow.o: $S/arch/x86/x86/powernow.c
	${NORMAL_C}

apic.o: $S/arch/x86/x86/apic.c
	${NORMAL_C}

bus_dma.o: $S/arch/x86/x86/bus_dma.c
	${NORMAL_C}

bus_space.o: $S/arch/x86/x86/bus_space.c
	${NORMAL_C}

consinit.o: $S/arch/x86/x86/consinit.c
	${NORMAL_C}

core_machdep.o: $S/arch/x86/x86/core_machdep.c
	${NORMAL_C}

cpu_topology.o: $S/arch/x86/x86/cpu_topology.c
	${NORMAL_C}

db_trace.o: $S/arch/x86/x86/db_trace.c
	${NORMAL_C}

errata.o: $S/arch/x86/x86/errata.c
	${NORMAL_C}

genfb_machdep.o: $S/arch/x86/x86/genfb_machdep.c
	${NORMAL_C}

identcpu.o: $S/arch/x86/x86/identcpu.c
	${NORMAL_C}

i8259.o: $S/arch/x86/x86/i8259.c
	${NORMAL_C}

intr.o: $S/arch/x86/x86/intr.c
	${NORMAL_C}

nmi.o: $S/arch/x86/x86/nmi.c
	${NORMAL_C}

idt.o: $S/arch/x86/x86/idt.c
	${NORMAL_C}

ipi.o: $S/arch/x86/x86/ipi.c
	${NORMAL_C}

mtrr_i686.o: $S/arch/x86/x86/mtrr_i686.c
	${NORMAL_C}

patch.o: $S/arch/x86/x86/patch.c
	${NORMAL_C}

platform.o: $S/arch/x86/x86/platform.c
	${NORMAL_C}

pmap.o: $S/arch/x86/x86/pmap.c
	${NORMAL_C}

pmap_tlb.o: $S/arch/x86/x86/pmap_tlb.c
	${NORMAL_C}

procfs_machdep.o: $S/arch/x86/x86/procfs_machdep.c
	${NORMAL_C}

sys_machdep.o: $S/arch/x86/x86/sys_machdep.c
	${NORMAL_C}

syscall.o: $S/arch/x86/x86/syscall.c
	${NORMAL_C}

vm_machdep.o: $S/arch/x86/x86/vm_machdep.c
	${NORMAL_C}

x86_autoconf.o: $S/arch/x86/x86/x86_autoconf.c
	${NORMAL_C}

x86_userconf.o: $S/arch/x86/x86/x86_userconf.c
	${NORMAL_C}

x86_machdep.o: $S/arch/x86/x86/x86_machdep.c
	${NORMAL_C}

cpu_ucode.o: $S/arch/x86/x86/cpu_ucode.c
	${NORMAL_C}

cpu_ucode_amd.o: $S/arch/x86/x86/cpu_ucode_amd.c
	${NORMAL_C}

lapic.o: $S/arch/x86/x86/lapic.c
	${NORMAL_C}

ioapic.o: $S/arch/x86/x86/ioapic.c
	${NORMAL_C}

mpbios.o: $S/arch/x86/x86/mpbios.c
	${NORMAL_C}

mp.o: $S/arch/x86/x86/mp.c
	${NORMAL_C}

mpacpi.o: $S/arch/x86/x86/mpacpi.c
	${NORMAL_C}

acpi_pdc.o: $S/arch/x86/acpi/acpi_pdc.c
	${NORMAL_C}

acpi_wakeup.o: $S/arch/x86/acpi/acpi_wakeup.c
	${NORMAL_C}

acpi_machdep.o: $S/arch/x86/acpi/acpi_machdep.c
	${NORMAL_C}

isa_machdep.o: $S/arch/x86/isa/isa_machdep.c
	${NORMAL_C}

x86_stub.o: $S/arch/x86/x86/x86_stub.c
	${NORMAL_C}

ipmi.o: $S/arch/x86/x86/ipmi.c
	${NORMAL_C}

vga_post.o: $S/arch/x86/x86/vga_post.c
	${NORMAL_C}

pci_machdep.o: $S/arch/x86/pci/pci_machdep.c
	${NORMAL_C}

pci_intr_machdep.o: $S/arch/x86/pci/pci_intr_machdep.c
	${NORMAL_C}

pciide_machdep.o: $S/arch/x86/pci/pciide_machdep.c
	${NORMAL_C}

amd64func.o: $S/arch/amd64/amd64/amd64func.S
	${NORMAL_S}

autoconf.o: $S/arch/amd64/amd64/autoconf.c
	${NORMAL_C}

busfunc.o: $S/arch/amd64/amd64/busfunc.S
	${NORMAL_S}

cpu_in_cksum.o: $S/arch/amd64/amd64/cpu_in_cksum.S
	${NORMAL_S}

cpufunc.o: $S/arch/amd64/amd64/cpufunc.S
	${NORMAL_S}

db_disasm.o: $S/arch/amd64/amd64/db_disasm.c
	${NORMAL_C}

db_interface.o: $S/arch/amd64/amd64/db_interface.c
	${NORMAL_C}

db_machdep.o: $S/arch/amd64/amd64/db_machdep.c
	${NORMAL_C}

db_memrw.o: $S/arch/amd64/amd64/db_memrw.c
	${NORMAL_C}

kobj_machdep.o: $S/arch/amd64/amd64/kobj_machdep.c
	${NORMAL_C}

subr_disk_mbr.o: $S/kern/subr_disk_mbr.c
	${NORMAL_C}

gdt.o: $S/arch/amd64/amd64/gdt.c
	${NORMAL_C}

machdep.o: $S/arch/amd64/amd64/machdep.c
	${NORMAL_C}

process_machdep.o: $S/arch/amd64/amd64/process_machdep.c
	${NORMAL_C}

trap.o: $S/arch/amd64/amd64/trap.c
	${NORMAL_C}

fpu.o: $S/arch/amd64/amd64/fpu.c
	${NORMAL_C}

lock_stubs.o: $S/arch/amd64/amd64/lock_stubs.S
	${NORMAL_S}

cons.o: $S/dev/cons.c
	${NORMAL_C}

mptramp.o: $S/arch/amd64/amd64/mptramp.S
	${NORMAL_S}

scsipiconf.o: $S/dev/scsipi/scsipiconf.c
	${NORMAL_C}

scsipi_base.o: $S/dev/scsipi/scsipi_base.c
	${NORMAL_C}

scsipi_ioctl.o: $S/dev/scsipi/scsipi_ioctl.c
	${NORMAL_C}

scsipi_verbose.o: $S/dev/scsipi/scsipi_verbose.c
	${NORMAL_C}

scsi_base.o: $S/dev/scsipi/scsi_base.c
	${NORMAL_C}

atapi_base.o: $S/dev/scsipi/atapi_base.c
	${NORMAL_C}

atapi_wdc.o: $S/dev/scsipi/atapi_wdc.c
	${NORMAL_C}

scsiconf.o: $S/dev/scsipi/scsiconf.c
	${NORMAL_C}

atapiconf.o: $S/dev/scsipi/atapiconf.c
	${NORMAL_C}

cd.o: $S/dev/scsipi/cd.c
	${NORMAL_C}

ch.o: $S/dev/scsipi/ch.c
	${NORMAL_C}

sd.o: $S/dev/scsipi/sd.c
	${NORMAL_C}

st.o: $S/dev/scsipi/st.c
	${NORMAL_C}

st_scsi.o: $S/dev/scsipi/st_scsi.c
	${NORMAL_C}

st_atapi.o: $S/dev/scsipi/st_atapi.c
	${NORMAL_C}

ses.o: $S/dev/scsipi/ses.c
	${NORMAL_C}

ss.o: $S/dev/scsipi/ss.c
	${NORMAL_C}

ss_mustek.o: $S/dev/scsipi/ss_mustek.c
	${NORMAL_C}

ss_scanjet.o: $S/dev/scsipi/ss_scanjet.c
	${NORMAL_C}

uk.o: $S/dev/scsipi/uk.c
	${NORMAL_C}

wd.o: $S/dev/ata/wd.c
	${NORMAL_C}

ata_wdc.o: $S/dev/ata/ata_wdc.c
	${NORMAL_C}

ata.o: $S/dev/ata/ata.c
	${NORMAL_C}

ata_raid.o: $S/dev/ata/ata_raid.c
	${NORMAL_C}

ata_raid_subr.o: $S/dev/ata/ata_raid_subr.c
	${NORMAL_C}

ata_raid_promise.o: $S/dev/ata/ata_raid_promise.c
	${NORMAL_C}

ata_raid_adaptec.o: $S/dev/ata/ata_raid_adaptec.c
	${NORMAL_C}

ata_raid_nvidia.o: $S/dev/ata/ata_raid_nvidia.c
	${NORMAL_C}

ata_raid_via.o: $S/dev/ata/ata_raid_via.c
	${NORMAL_C}

ata_raid_jmicron.o: $S/dev/ata/ata_raid_jmicron.c
	${NORMAL_C}

ata_raid_intel.o: $S/dev/ata/ata_raid_intel.c
	${NORMAL_C}

ld_ataraid.o: $S/dev/ata/ld_ataraid.c
	${NORMAL_C}

sata_subr.o: $S/dev/ata/sata_subr.c
	${NORMAL_C}

satafis_subr.o: $S/dev/ata/satafis_subr.c
	${NORMAL_C}

md_root.o: $S/dev/md_root.c
	${NORMAL_C}

iop.o: $S/dev/i2o/iop.c
	${NORMAL_C}

ld_iop.o: $S/dev/i2o/ld_iop.c
	${NORMAL_C}

iopsp.o: $S/dev/i2o/iopsp.c
	${NORMAL_C}

bios32.o: $S/arch/amd64/amd64/bios32.c
	${NORMAL_C}

mainbus.o: $S/arch/amd64/amd64/mainbus.c
	${NORMAL_C}

pci.o: $S/dev/pci/pci.c
	${NORMAL_C}

pci_map.o: $S/dev/pci/pci_map.c
	${NORMAL_C}

pci_quirks.o: $S/dev/pci/pci_quirks.c
	${NORMAL_C}

pci_subr.o: $S/dev/pci/pci_subr.c
	${NORMAL_C}

pci_stub.o: $S/dev/pci/pci_stub.c
	${NORMAL_C}

pci_usrreq.o: $S/dev/pci/pci_usrreq.c
	${NORMAL_C}

pcibusprint.o: $S/dev/pci/pcibusprint.c
	${NORMAL_C}

wsdisplay_pci.o: $S/dev/pci/wsdisplay_pci.c
	${NORMAL_C}

cy82c693.o: $S/dev/pci/cy82c693.c
	${NORMAL_C}

ahc_pci.o: $S/dev/pci/ahc_pci.c
	${NORMAL_C}

ahd_pci.o: $S/dev/pci/ahd_pci.c
	${NORMAL_C}

iop_pci.o: $S/dev/pci/iop_pci.c
	${NORMAL_C}

twe.o: $S/dev/pci/twe.c
	${NORMAL_C}

ld_twe.o: $S/dev/pci/ld_twe.c
	${NORMAL_C}

twa.o: $S/dev/pci/twa.c
	${NORMAL_C}

ld_twa.o: $S/dev/pci/ld_twa.c
	${NORMAL_C}

amr.o: $S/dev/pci/amr.c
	${NORMAL_C}

ld_amr.o: $S/dev/pci/ld_amr.c
	${NORMAL_C}

arcmsr.o: $S/dev/pci/arcmsr.c
	${NORMAL_C}

cac_pci.o: $S/dev/pci/cac_pci.c
	${NORMAL_C}

mlx_pci.o: $S/dev/pci/mlx_pci.c
	${NORMAL_C}

mly.o: $S/dev/pci/mly.c
	${NORMAL_C}

if_mtd_pci.o: $S/dev/pci/if_mtd_pci.c
	${NORMAL_C}

icp_pci.o: $S/dev/pci/icp_pci.c
	${NORMAL_C}

aac_pci.o: $S/dev/pci/aac_pci.c
	${NORMAL_C}

dpt_pci.o: $S/dev/pci/dpt_pci.c
	${NORMAL_C}

adv_pci.o: $S/dev/pci/adv_pci.c
	${NORMAL_C}

adw_pci.o: $S/dev/pci/adw_pci.c
	${NORMAL_C}

adwlib.o: $S/dev/ic/adwlib.c
	${NORMAL_C}

adwmcode.o: $S/dev/ic/adwmcode.c
	${NORMAL_C}

pcscp.o: $S/dev/pci/pcscp.c
	${NORMAL_C}

ciss_pci.o: $S/dev/pci/ciss_pci.c
	${NORMAL_C}

bha_pci.o: $S/dev/pci/bha_pci.c
	${NORMAL_C}

isp_pci.o: $S/dev/pci/isp_pci.c
	${NORMAL_C}

mfi_pci.o: $S/dev/pci/mfi_pci.c
	${NORMAL_C}

mpt_pci.o: $S/dev/pci/mpt_pci.c
	${NORMAL_C}

mpii.o: $S/dev/pci/mpii.c
	${NORMAL_C}

if_en_pci.o: $S/dev/pci/if_en_pci.c
	${NORMAL_C}

if_ep_pci.o: $S/dev/pci/if_ep_pci.c
	${NORMAL_C}

if_ex_pci.o: $S/dev/pci/if_ex_pci.c
	${NORMAL_C}

if_fpa.o: $S/dev/pci/if_fpa.c
	${NORMAL_C}

if_le_pci.o: $S/dev/pci/if_le_pci.c
	${NORMAL_C}

if_pcn.o: $S/dev/pci/if_pcn.c
	${NORMAL_C}

siop_pci_common.o: $S/dev/pci/siop_pci_common.c
	${NORMAL_C}

siop_pci.o: $S/dev/pci/siop_pci.c
	${NORMAL_C}

esiop_pci.o: $S/dev/pci/esiop_pci.c
	${NORMAL_C}

iha_pci.o: $S/dev/pci/iha_pci.c
	${NORMAL_C}

trm.o: $S/dev/pci/trm.c
	${NORMAL_C}

pciide_common.o: $S/dev/pci/pciide_common.c
	${NORMAL_C}

pciide.o: $S/dev/pci/pciide.c
	${NORMAL_C}

ahcisata_pci.o: $S/dev/pci/ahcisata_pci.c
	${NORMAL_C}

acardide.o: $S/dev/pci/acardide.c
	${NORMAL_C}

aceride.o: $S/dev/pci/aceride.c
	${NORMAL_C}

artsata.o: $S/dev/pci/artsata.c
	${NORMAL_C}

cmdide.o: $S/dev/pci/cmdide.c
	${NORMAL_C}

cypide.o: $S/dev/pci/cypide.c
	${NORMAL_C}

hptide.o: $S/dev/pci/hptide.c
	${NORMAL_C}

iteide.o: $S/dev/pci/iteide.c
	${NORMAL_C}

jmide.o: $S/dev/pci/jmide.c
	${NORMAL_C}

optiide.o: $S/dev/pci/optiide.c
	${NORMAL_C}

piixide.o: $S/dev/pci/piixide.c
	${NORMAL_C}

pdcsata.o: $S/dev/pci/pdcsata.c
	${NORMAL_C}

pdcide.o: $S/dev/pci/pdcide.c
	${NORMAL_C}

svwsata.o: $S/dev/pci/svwsata.c
	${NORMAL_C}

satalink.o: $S/dev/pci/satalink.c
	${NORMAL_C}

siside.o: $S/dev/pci/siside.c
	${NORMAL_C}

slide.o: $S/dev/pci/slide.c
	${NORMAL_C}

viaide.o: $S/dev/pci/viaide.c
	${NORMAL_C}

ixpide.o: $S/dev/pci/ixpide.c
	${NORMAL_C}

toshide.o: $S/dev/pci/toshide.c
	${NORMAL_C}

ppb.o: $S/dev/pci/ppb.c
	${NORMAL_C}

cy_pci.o: $S/dev/pci/cy_pci.c
	${NORMAL_C}

cz.o: $S/dev/pci/cz.c
	${NORMAL_C}

if_fxp_pci.o: $S/dev/pci/if_fxp_pci.c
	${NORMAL_C}

if_hme_pci.o: $S/dev/pci/if_hme_pci.c
	${NORMAL_C}

if_jme.o: $S/dev/pci/if_jme.c
	${NORMAL_C}

if_ne_pci.o: $S/dev/pci/if_ne_pci.c
	${NORMAL_C}

if_tl.o: $S/dev/pci/if_tl.c
	${NORMAL_C}

if_ntwoc_pci.o: $S/dev/pci/if_ntwoc_pci.c
	${NORMAL_C}

if_lmc.o: $S/dev/pci/if_lmc.c
	${NORMAL_C}

if_esh_pci.o: $S/dev/pci/if_esh_pci.c
	${NORMAL_C}

vga_pci.o: $S/dev/pci/vga_pci.c
	${NORMAL_C}

bktr_audio.o: $S/dev/pci/bktr/bktr_audio.c
	${NORMAL_C}

bktr_card.o: $S/dev/pci/bktr/bktr_card.c
	${NORMAL_C}

bktr_core.o: $S/dev/pci/bktr/bktr_core.c
	${NORMAL_C}

bktr_os.o: $S/dev/pci/bktr/bktr_os.c
	${NORMAL_C}

bktr_tuner.o: $S/dev/pci/bktr/bktr_tuner.c
	${NORMAL_C}

cs4280.o: $S/dev/pci/cs4280.c
	${NORMAL_C}

cs4281.o: $S/dev/pci/cs4281.c
	${NORMAL_C}

cs428x.o: $S/dev/pci/cs428x.c
	${NORMAL_C}

fms.o: $S/dev/pci/fms.c
	${NORMAL_C}

opl_fms.o: $S/dev/pci/opl_fms.c
	${NORMAL_C}

eap.o: $S/dev/pci/eap.c
	${NORMAL_C}

auacer.o: $S/dev/pci/auacer.c
	${NORMAL_C}

auich.o: $S/dev/pci/auich.c
	${NORMAL_C}

auvia.o: $S/dev/pci/auvia.c
	${NORMAL_C}

auixp.o: $S/dev/pci/auixp.c
	${NORMAL_C}

neo.o: $S/dev/pci/neo.c
	${NORMAL_C}

esa.o: $S/dev/pci/esa.c
	${NORMAL_C}

eso.o: $S/dev/pci/eso.c
	${NORMAL_C}

opl_eso.o: $S/dev/pci/opl_eso.c
	${NORMAL_C}

mpu_eso.o: $S/dev/pci/mpu_eso.c
	${NORMAL_C}

esm.o: $S/dev/pci/esm.c
	${NORMAL_C}

sv.o: $S/dev/pci/sv.c
	${NORMAL_C}

opl_sv.o: $S/dev/pci/opl_sv.c
	${NORMAL_C}

cmpci.o: $S/dev/pci/cmpci.c
	${NORMAL_C}

opl_cmpci.o: $S/dev/pci/opl_cmpci.c
	${NORMAL_C}

mpu_cmpci.o: $S/dev/pci/mpu_cmpci.c
	${NORMAL_C}

yds.o: $S/dev/pci/yds.c
	${NORMAL_C}

mpu_yds.o: $S/dev/pci/mpu_yds.c
	${NORMAL_C}

emuxki.o: $S/dev/pci/emuxki.c
	${NORMAL_C}

autri.o: $S/dev/pci/autri.c
	${NORMAL_C}

if_epic_pci.o: $S/dev/pci/if_epic_pci.c
	${NORMAL_C}

puc.o: $S/dev/pci/puc.c
	${NORMAL_C}

pucdata.o: $S/dev/pci/pucdata.c
	${NORMAL_C}

com_puc.o: $S/dev/pci/com_puc.c
	${NORMAL_C}

cyber.o: $S/dev/pci/cyber.c
	${NORMAL_C}

lpt_puc.o: $S/dev/pci/lpt_puc.c
	${NORMAL_C}

uhci_pci.o: $S/dev/pci/uhci_pci.c
	${NORMAL_C}

ohci_pci.o: $S/dev/pci/ohci_pci.c
	${NORMAL_C}

ehci_pci.o: $S/dev/pci/ehci_pci.c
	${NORMAL_C}

usb_pci.o: $S/dev/pci/usb_pci.c
	${NORMAL_C}

fwohci_pci.o: $S/dev/pci/fwohci_pci.c
	${NORMAL_C}

if_vr.o: $S/dev/pci/if_vr.c
	${NORMAL_C}

if_sip.o: $S/dev/pci/if_sip.c
	${NORMAL_C}

if_stge.o: $S/dev/pci/if_stge.c
	${NORMAL_C}

if_wm.o: $S/dev/pci/if_wm.c
	${NORMAL_C}

if_bge.o: $S/dev/pci/if_bge.c
	${NORMAL_C}

if_bnx.o: $S/dev/pci/if_bnx.c
	${NORMAL_C}

if_rtk_pci.o: $S/dev/pci/if_rtk_pci.c
	${NORMAL_C}

if_tlp_pci.o: $S/dev/pci/if_tlp_pci.c
	${NORMAL_C}

if_ti.o: $S/dev/pci/if_ti.c
	${NORMAL_C}

if_sf_pci.o: $S/dev/pci/if_sf_pci.c
	${NORMAL_C}

if_ste.o: $S/dev/pci/if_ste.c
	${NORMAL_C}

pccbb.o: $S/dev/pci/pccbb.c
	${NORMAL_C}

piixpm.o: $S/dev/pci/piixpm.c
	${NORMAL_C}

amdpm.o: $S/dev/pci/amdpm.c
	${NORMAL_C}

amdpm_smbus.o: $S/dev/pci/amdpm_smbus.c
	${NORMAL_C}

hifn7751.o: $S/dev/pci/hifn7751.c
	${NORMAL_C}

ubsec.o: $S/dev/pci/ubsec.c
	${NORMAL_C}

if_an_pci.o: $S/dev/pci/if_an_pci.c
	${NORMAL_C}

if_atw_pci.o: $S/dev/pci/if_atw_pci.c
	${NORMAL_C}

if_rtw_pci.o: $S/dev/pci/if_rtw_pci.c
	${NORMAL_C}

if_ral_pci.o: $S/dev/pci/if_ral_pci.c
	${NORMAL_C}

if_wi_pci.o: $S/dev/pci/if_wi_pci.c
	${NORMAL_C}

weasel_pci.o: $S/dev/pci/weasel_pci.c
	${NORMAL_C}

if_txp.o: $S/dev/pci/if_txp.c
	${NORMAL_C}

if_sk.o: $S/dev/pci/if_sk.c
	${NORMAL_C}

if_bce.o: $S/dev/pci/if_bce.c
	${NORMAL_C}

if_dge.o: $S/dev/pci/if_dge.c
	${NORMAL_C}

if_re_pci.o: $S/dev/pci/if_re_pci.c
	${NORMAL_C}

if_ipw.o: $S/dev/pci/if_ipw.c
	${NORMAL_C}

if_iwi.o: $S/dev/pci/if_iwi.c
	${NORMAL_C}

if_wpi.o: $S/dev/pci/if_wpi.c
	${NORMAL_C}

if_iwn.o: $S/dev/pci/if_iwn.c
	${NORMAL_C}

if_xge.o: $S/dev/pci/if_xge.c
	${NORMAL_C}

if_vge.o: $S/dev/pci/if_vge.c
	${NORMAL_C}

if_ath_pci.o: $S/dev/pci/if_ath_pci.c
	${NORMAL_C}

if_nfe.o: $S/dev/pci/if_nfe.c
	${NORMAL_C}

if_msk.o: $S/dev/pci/if_msk.c
	${NORMAL_C}

sdhc_pci.o: $S/dev/pci/sdhc_pci.c
	${NORMAL_C}

genfb_pci.o: $S/dev/pci/genfb_pci.c
	${NORMAL_C}

nfsmb.o: $S/dev/pci/nfsmb.c
	${NORMAL_C}

ichsmb.o: $S/dev/pci/ichsmb.c
	${NORMAL_C}

if_age.o: $S/dev/pci/if_age.c
	${NORMAL_C}

if_alc.o: $S/dev/pci/if_alc.c
	${NORMAL_C}

if_ale.o: $S/dev/pci/if_ale.c
	${NORMAL_C}

if_lii.o: $S/dev/pci/if_lii.c
	${NORMAL_C}

siisata_pci.o: $S/dev/pci/siisata_pci.c
	${NORMAL_C}

if_bwi_pci.o: $S/dev/pci/if_bwi_pci.c
	${NORMAL_C}

mvsata_pci.o: $S/dev/pci/mvsata_pci.c
	${NORMAL_C}

hdaudio.o: $S/dev/pci/hdaudio/hdaudio.c
	${NORMAL_C}

hdaudio_ids.o: $S/dev/pci/hdaudio/hdaudio_ids.c
	${NORMAL_C}

hdafg.o: $S/dev/pci/hdaudio/hdafg.c
	${NORMAL_C}

hdafg_dd.o: $S/dev/pci/hdaudio/hdafg_dd.c
	${NORMAL_C}

hdaudio_pci.o: $S/dev/pci/hdaudio/hdaudio_pci.c
	${NORMAL_C}

if_et.o: $S/dev/pci/if_et.c
	${NORMAL_C}

cxdtv.o: $S/dev/pci/cxdtv.c
	${NORMAL_C}

cxdtv_boards.o: $S/dev/pci/cxdtv_boards.c
	${NORMAL_C}

coram.o: $S/dev/pci/coram.c
	${NORMAL_C}

virtio.o: $S/dev/pci/virtio.c
	${NORMAL_C}

ld_virtio.o: $S/dev/pci/ld_virtio.c
	${NORMAL_C}

viomb.o: $S/dev/pci/viomb.c
	${NORMAL_C}

if_vioif.o: $S/dev/pci/if_vioif.c
	${NORMAL_C}

agp.o: $S/dev/pci/agp.c
	${NORMAL_C}

agpbusprint.o: $S/dev/pci/agpbusprint.c
	${NORMAL_C}

agp_ali.o: $S/dev/pci/agp_ali.c
	${NORMAL_C}

agp_amd.o: $S/dev/pci/agp_amd.c
	${NORMAL_C}

agp_i810.o: $S/dev/pci/agp_i810.c
	${NORMAL_C}

agp_intel.o: $S/dev/pci/agp_intel.c
	${NORMAL_C}

agp_sis.o: $S/dev/pci/agp_sis.c
	${NORMAL_C}

agp_via.o: $S/dev/pci/agp_via.c
	${NORMAL_C}

agp_amd64.o: $S/dev/pci/agp_amd64.c
	${NORMAL_C}

aapic.o: $S/arch/x86/pci/aapic.c
	${NORMAL_C}

agp_machdep.o: $S/arch/x86/pci/agp_machdep.c
	${NORMAL_C}

sg_dma.o: $S/arch/x86/x86/sg_dma.c
	${NORMAL_C}

pchb.o: $S/arch/x86/pci/pchb.c
	${NORMAL_C}

pcib.o: $S/arch/x86/pci/pcib.c
	${NORMAL_C}

amdtemp.o: $S/arch/x86/pci/amdtemp.c
	${NORMAL_C}

ichlpcib.o: $S/arch/x86/pci/ichlpcib.c
	${NORMAL_C}

fwhrng.o: $S/arch/x86/pci/fwhrng.c
	${NORMAL_C}

isa.o: $S/dev/isa/isa.c
	${NORMAL_C}

isabusprint.o: $S/dev/isa/isabusprint.c
	${NORMAL_C}

isadma.o: $S/dev/isa/isadma.c
	${NORMAL_C}

com_isa.o: $S/dev/isa/com_isa.c
	${NORMAL_C}

lpt_isa.o: $S/dev/isa/lpt_isa.c
	${NORMAL_C}

wdc_isa.o: $S/dev/isa/wdc_isa.c
	${NORMAL_C}

pckbc_isa.o: $S/dev/isa/pckbc_isa.c
	${NORMAL_C}

pcppi.o: $S/dev/isa/pcppi.c
	${NORMAL_C}

midi_pcppi.o: $S/dev/isa/midi_pcppi.c
	${NORMAL_C}

attimer_isa.o: $S/dev/isa/attimer_isa.c
	${NORMAL_C}

tpm_isa.o: $S/dev/isa/tpm_isa.c
	${NORMAL_C}

clock.o: $S/arch/x86/isa/clock.c
	${NORMAL_C}

rtc.o: $S/arch/x86/isa/rtc.c
	${NORMAL_C}

tsc.o: $S/arch/x86/x86/tsc.c
	${NORMAL_C}

pckbport.o: $S/dev/pckbport/pckbport.c
	${NORMAL_C}

pckbd.o: $S/dev/pckbport/pckbd.c
	${NORMAL_C}

wskbdmap_mfii.o: $S/dev/pckbport/wskbdmap_mfii.c
	${NORMAL_C}

pms.o: $S/dev/pckbport/pms.c
	${NORMAL_C}

synaptics.o: $S/dev/pckbport/synaptics.c
	${NORMAL_C}

elantech.o: $S/dev/pckbport/elantech.c
	${NORMAL_C}

fd.o: $S/dev/isa/fd.c
	${NORMAL_C}

fdc_isa.o: $S/dev/isa/fdc_isa.c
	${NORMAL_C}

netbsd32_core.o: $S/compat/netbsd32/netbsd32_core.c
	${NORMAL_C}

netbsd32_exec_elf32.o: $S/compat/netbsd32/netbsd32_exec_elf32.c
	${NORMAL_C}

netbsd32_netbsd.o: $S/compat/netbsd32/netbsd32_netbsd.c
	${NORMAL_C}

netbsd32_event.o: $S/compat/netbsd32/netbsd32_event.c
	${NORMAL_C}

netbsd32_execve.o: $S/compat/netbsd32/netbsd32_execve.c
	${NORMAL_C}

netbsd32_fs.o: $S/compat/netbsd32/netbsd32_fs.c
	${NORMAL_C}

netbsd32_ioctl.o: $S/compat/netbsd32/netbsd32_ioctl.c
	${NORMAL_C}

netbsd32_ipc.o: $S/compat/netbsd32/netbsd32_ipc.c
	${NORMAL_C}

netbsd32_lwp.o: $S/compat/netbsd32/netbsd32_lwp.c
	${NORMAL_C}

netbsd32_mod.o: $S/compat/netbsd32/netbsd32_mod.c
	${NORMAL_C}

netbsd32_sa.o: $S/compat/netbsd32/netbsd32_sa.c
	${NORMAL_C}

netbsd32_select.o: $S/compat/netbsd32/netbsd32_select.c
	${NORMAL_C}

netbsd32_sem.o: $S/compat/netbsd32/netbsd32_sem.c
	${NORMAL_C}

netbsd32_signal.o: $S/compat/netbsd32/netbsd32_signal.c
	${NORMAL_C}

netbsd32_socket.o: $S/compat/netbsd32/netbsd32_socket.c
	${NORMAL_C}

netbsd32_sysctl.o: $S/compat/netbsd32/netbsd32_sysctl.c
	${NORMAL_C}

netbsd32_time.o: $S/compat/netbsd32/netbsd32_time.c
	${NORMAL_C}

netbsd32_wait.o: $S/compat/netbsd32/netbsd32_wait.c
	${NORMAL_C}

netbsd32_sysent.o: $S/compat/netbsd32/netbsd32_sysent.c
	${NORMAL_C}

netbsd32_compat_20.o: $S/compat/netbsd32/netbsd32_compat_20.c
	${NORMAL_C}

netbsd32_compat_30.o: $S/compat/netbsd32/netbsd32_compat_30.c
	${NORMAL_C}

netbsd32_compat_43.o: $S/compat/netbsd32/netbsd32_compat_43.c
	${NORMAL_C}

netbsd32_compat_50.o: $S/compat/netbsd32/netbsd32_compat_50.c
	${NORMAL_C}

netbsd32_machdep.o: $S/arch/amd64/amd64/netbsd32_machdep.c
	${NORMAL_C}

netbsd32_sigcode.o: $S/arch/amd64/amd64/netbsd32_sigcode.S
	${NORMAL_S}

netbsd32_syscall.o: $S/arch/amd64/amd64/netbsd32_syscall.c
	${NORMAL_C}

linux_blkio.o: $S/compat/linux/common/linux_blkio.c
	${NORMAL_C}

linux_cdrom.o: $S/compat/linux/common/linux_cdrom.c
	${NORMAL_C}

linux_errno.o: $S/compat/linux/common/linux_errno.c
	${NORMAL_C}

linux_exec.o: $S/compat/linux/common/linux_exec.c
	${NORMAL_C}

linux_exec_elf32.o: $S/compat/linux/common/linux_exec_elf32.c
	${NORMAL_C}

linux_exec_elf64.o: $S/compat/linux/common/linux_exec_elf64.c
	${NORMAL_C}

linux_fdio.o: $S/compat/linux/common/linux_fdio.c
	${NORMAL_C}

linux_file.o: $S/compat/linux/common/linux_file.c
	${NORMAL_C}

linux_hdio.o: $S/compat/linux/common/linux_hdio.c
	${NORMAL_C}

linux_ioctl.o: $S/compat/linux/common/linux_ioctl.c
	${NORMAL_C}

linux_ipc.o: $S/compat/linux/common/linux_ipc.c
	${NORMAL_C}

linux_misc.o: $S/compat/linux/common/linux_misc.c
	${NORMAL_C}

linux_mod.o: $S/compat/linux/common/linux_mod.c
	${NORMAL_C}

linux_mtio.o: $S/compat/linux/common/linux_mtio.c
	${NORMAL_C}

linux_sched.o: $S/compat/linux/common/linux_sched.c
	${NORMAL_C}

linux_sg.o: $S/compat/linux/common/linux_sg.c
	${NORMAL_C}

linux_signal.o: $S/compat/linux/common/linux_signal.c
	${NORMAL_C}

linux_signo.o: $S/compat/linux/common/linux_signo.c
	${NORMAL_C}

linux_socket.o: $S/compat/linux/common/linux_socket.c
	${NORMAL_C}

linux_sysctl.o: $S/compat/linux/common/linux_sysctl.c
	${NORMAL_C}

linux_termios.o: $S/compat/linux/common/linux_termios.c
	${NORMAL_C}

linux_time.o: $S/compat/linux/common/linux_time.c
	${NORMAL_C}

linux_commons.o: $S/compat/linux/arch/amd64/linux_commons.c
	${NORMAL_C}

linux_exec_machdep.o: $S/compat/linux/arch/amd64/linux_exec_machdep.c
	${NORMAL_C}

linux_machdep.o: $S/compat/linux/arch/amd64/linux_machdep.c
	${NORMAL_C}

linux_syscalls.o: $S/compat/linux/arch/amd64/linux_syscalls.c
	${NORMAL_C}

linux_sysent.o: $S/compat/linux/arch/amd64/linux_sysent.c
	${NORMAL_C}

linux_sigcode.o: $S/arch/amd64/amd64/linux_sigcode.S
	${NORMAL_S}

linux_syscall.o: $S/arch/amd64/amd64/linux_syscall.c
	${NORMAL_C}

linux_trap.o: $S/arch/x86/x86/linux_trap.c
	${NORMAL_C}

linux32_dirent.o: $S/compat/linux32/common/linux32_dirent.c
	${NORMAL_C}

linux32_exec.o: $S/compat/linux32/common/linux32_exec.c
	${NORMAL_C}

linux32_exec_elf32.o: $S/compat/linux32/common/linux32_exec_elf32.c
	${NORMAL_C}

linux32_fcntl.o: $S/compat/linux32/common/linux32_fcntl.c
	${NORMAL_C}

linux32_ioctl.o: $S/compat/linux32/common/linux32_ioctl.c
	${NORMAL_C}

linux32_misc.o: $S/compat/linux32/common/linux32_misc.c
	${NORMAL_C}

linux32_mman.o: $S/compat/linux32/common/linux32_mman.c
	${NORMAL_C}

linux32_mod.o: $S/compat/linux32/common/linux32_mod.c
	${NORMAL_C}

linux32_resource.o: $S/compat/linux32/common/linux32_resource.c
	${NORMAL_C}

linux32_sched.o: $S/compat/linux32/common/linux32_sched.c
	${NORMAL_C}

linux32_signal.o: $S/compat/linux32/common/linux32_signal.c
	${NORMAL_C}

linux32_socket.o: $S/compat/linux32/common/linux32_socket.c
	${NORMAL_C}

linux32_socketcall.o: $S/compat/linux32/common/linux32_socketcall.c
	${NORMAL_C}

linux32_stat.o: $S/compat/linux32/common/linux32_stat.c
	${NORMAL_C}

linux32_sysctl.o: $S/compat/linux32/common/linux32_sysctl.c
	${NORMAL_C}

linux32_sysinfo.o: $S/compat/linux32/common/linux32_sysinfo.c
	${NORMAL_C}

linux32_time.o: $S/compat/linux32/common/linux32_time.c
	${NORMAL_C}

linux32_termios.o: $S/compat/linux32/common/linux32_termios.c
	${NORMAL_C}

linux32_unistd.o: $S/compat/linux32/common/linux32_unistd.c
	${NORMAL_C}

linux32_utsname.o: $S/compat/linux32/common/linux32_utsname.c
	${NORMAL_C}

linux32_wait.o: $S/compat/linux32/common/linux32_wait.c
	${NORMAL_C}

linux32_syscalls.o: $S/compat/linux32/arch/amd64/linux32_syscalls.c
	${NORMAL_C}

linux32_sysent.o: $S/compat/linux32/arch/amd64/linux32_sysent.c
	${NORMAL_C}

linux32_machdep.o: $S/compat/linux32/arch/amd64/linux32_machdep.c
	${NORMAL_C}

linux32_missing.o: $S/compat/linux32/arch/amd64/linux32_missing.c
	${NORMAL_C}

linux32_ipccall.o: $S/compat/linux32/common/linux32_ipccall.c
	${NORMAL_C}

linux32_uid16.o: $S/compat/linux32/common/linux32_uid16.c
	${NORMAL_C}

linux_oldmmap.o: $S/compat/linux/common/linux_oldmmap.c
	${NORMAL_C}

linux32_sigcode.o: $S/arch/amd64/amd64/linux32_sigcode.S
	${NORMAL_S}

linux32_syscall.o: $S/arch/amd64/amd64/linux32_syscall.c
	${NORMAL_C}

ossaudio.o: $S/compat/ossaudio/ossaudio.c
	${NORMAL_C}

cardslot.o: $S/dev/cardbus/cardslot.c
	${NORMAL_C}

cardbus.o: $S/dev/cardbus/cardbus.c
	${NORMAL_C}

cardbus_map.o: $S/dev/cardbus/cardbus_map.c
	${NORMAL_C}

cardbus_exrom.o: $S/dev/cardbus/cardbus_exrom.c
	${NORMAL_C}

rbus.o: $S/dev/cardbus/rbus.c
	${NORMAL_C}

if_ex_cardbus.o: $S/dev/cardbus/if_ex_cardbus.c
	${NORMAL_C}

if_fxp_cardbus.o: $S/dev/cardbus/if_fxp_cardbus.c
	${NORMAL_C}

com_cardbus.o: $S/dev/cardbus/com_cardbus.c
	${NORMAL_C}

if_atw_cardbus.o: $S/dev/cardbus/if_atw_cardbus.c
	${NORMAL_C}

if_rtw_cardbus.o: $S/dev/cardbus/if_rtw_cardbus.c
	${NORMAL_C}

if_ral_cardbus.o: $S/dev/cardbus/if_ral_cardbus.c
	${NORMAL_C}

if_tlp_cardbus.o: $S/dev/cardbus/if_tlp_cardbus.c
	${NORMAL_C}

ohci_cardbus.o: $S/dev/cardbus/ohci_cardbus.c
	${NORMAL_C}

uhci_cardbus.o: $S/dev/cardbus/uhci_cardbus.c
	${NORMAL_C}

ehci_cardbus.o: $S/dev/cardbus/ehci_cardbus.c
	${NORMAL_C}

fwohci_cardbus.o: $S/dev/cardbus/fwohci_cardbus.c
	${NORMAL_C}

ahc_cardbus.o: $S/dev/cardbus/ahc_cardbus.c
	${NORMAL_C}

if_rtk_cardbus.o: $S/dev/cardbus/if_rtk_cardbus.c
	${NORMAL_C}

if_re_cardbus.o: $S/dev/cardbus/if_re_cardbus.c
	${NORMAL_C}

adv_cardbus.o: $S/dev/cardbus/adv_cardbus.c
	${NORMAL_C}

if_ath_cardbus.o: $S/dev/cardbus/if_ath_cardbus.c
	${NORMAL_C}

njata_cardbus.o: $S/dev/cardbus/njata_cardbus.c
	${NORMAL_C}

siisata_cardbus.o: $S/dev/cardbus/siisata_cardbus.c
	${NORMAL_C}

rbus_machdep.o: $S/arch/amd64/amd64/rbus_machdep.c
	${NORMAL_C}

pcmcia.o: $S/dev/pcmcia/pcmcia.c
	${NORMAL_C}

pcmcia_cis.o: $S/dev/pcmcia/pcmcia_cis.c
	${NORMAL_C}

pcmcia_cis_quirks.o: $S/dev/pcmcia/pcmcia_cis_quirks.c
	${NORMAL_C}

if_ep_pcmcia.o: $S/dev/pcmcia/if_ep_pcmcia.c
	${NORMAL_C}

if_ne_pcmcia.o: $S/dev/pcmcia/if_ne_pcmcia.c
	${NORMAL_C}

aic_pcmcia.o: $S/dev/pcmcia/aic_pcmcia.c
	${NORMAL_C}

esp_pcmcia.o: $S/dev/pcmcia/esp_pcmcia.c
	${NORMAL_C}

spc_pcmcia.o: $S/dev/pcmcia/spc_pcmcia.c
	${NORMAL_C}

com_pcmcia.o: $S/dev/pcmcia/com_pcmcia.c
	${NORMAL_C}

wdc_pcmcia.o: $S/dev/pcmcia/wdc_pcmcia.c
	${NORMAL_C}

if_sm_pcmcia.o: $S/dev/pcmcia/if_sm_pcmcia.c
	${NORMAL_C}

if_mbe_pcmcia.o: $S/dev/pcmcia/if_mbe_pcmcia.c
	${NORMAL_C}

pcmcom.o: $S/dev/pcmcia/pcmcom.c
	${NORMAL_C}

if_cnw.o: $S/dev/pcmcia/if_cnw.c
	${NORMAL_C}

mhzc.o: $S/dev/pcmcia/mhzc.c
	${NORMAL_C}

if_ray.o: $S/dev/pcmcia/if_ray.c
	${NORMAL_C}

if_awi_pcmcia.o: $S/dev/pcmcia/if_awi_pcmcia.c
	${NORMAL_C}

if_wi_pcmcia.o: $S/dev/pcmcia/if_wi_pcmcia.c
	${NORMAL_C}

xirc.o: $S/dev/pcmcia/xirc.c
	${NORMAL_C}

if_xi.o: $S/dev/pcmcia/if_xi.c
	${NORMAL_C}

if_cs_pcmcia.o: $S/dev/pcmcia/if_cs_pcmcia.c
	${NORMAL_C}

if_an_pcmcia.o: $S/dev/pcmcia/if_an_pcmcia.c
	${NORMAL_C}

bt3c.o: $S/dev/pcmcia/bt3c.c
	${NORMAL_C}

slhci_pcmcia.o: $S/dev/pcmcia/slhci_pcmcia.c
	${NORMAL_C}

btbc.o: $S/dev/pcmcia/btbc.c
	${NORMAL_C}

usb.o: $S/dev/usb/usb.c
	${NORMAL_C}

usbdi.o: $S/dev/usb/usbdi.c
	${NORMAL_C}

usbdi_util.o: $S/dev/usb/usbdi_util.c
	${NORMAL_C}

usb_mem.o: $S/dev/usb/usb_mem.c
	${NORMAL_C}

usb_subr.o: $S/dev/usb/usb_subr.c
	${NORMAL_C}

usb_quirks.o: $S/dev/usb/usb_quirks.c
	${NORMAL_C}

uhub.o: $S/dev/usb/uhub.c
	${NORMAL_C}

ezload.o: $S/dev/usb/ezload.c
	${NORMAL_C}

uaudio.o: $S/dev/usb/uaudio.c
	${NORMAL_C}

umidi.o: $S/dev/usb/umidi.c
	${NORMAL_C}

umidi_quirks.o: $S/dev/usb/umidi_quirks.c
	${NORMAL_C}

ucom.o: $S/dev/usb/ucom.c
	${NORMAL_C}

ugen.o: $S/dev/usb/ugen.c
	${NORMAL_C}

uhidev.o: $S/dev/usb/uhidev.c
	${NORMAL_C}

uhid.o: $S/dev/usb/uhid.c
	${NORMAL_C}

ukbd.o: $S/dev/usb/ukbd.c
	${NORMAL_C}

ukbdmap.o: $S/dev/usb/ukbdmap.c
	${NORMAL_C}

ums.o: $S/dev/usb/ums.c
	${NORMAL_C}

uts.o: $S/dev/usb/uts.c
	${NORMAL_C}

uep.o: $S/dev/usb/uep.c
	${NORMAL_C}

ucycom.o: $S/dev/usb/ucycom.c
	${NORMAL_C}

ulpt.o: $S/dev/usb/ulpt.c
	${NORMAL_C}

umass.o: $S/dev/usb/umass.c
	${NORMAL_C}

umass_isdata.o: $S/dev/usb/umass_isdata.c
	${NORMAL_C}

umass_quirks.o: $S/dev/usb/umass_quirks.c
	${NORMAL_C}

umass_scsipi.o: $S/dev/usb/umass_scsipi.c
	${NORMAL_C}

uirda.o: $S/dev/usb/uirda.c
	${NORMAL_C}

stuirda.o: $S/dev/usb/stuirda.c
	${NORMAL_C}

ustir.o: $S/dev/usb/ustir.c
	${NORMAL_C}

irmce.o: $S/dev/usb/irmce.c
	${NORMAL_C}

ubt.o: $S/dev/usb/ubt.c
	${NORMAL_C}

aubtfwl.o: $S/dev/usb/aubtfwl.c
	${NORMAL_C}

pseye.o: $S/dev/usb/pseye.c
	${NORMAL_C}

uvideo.o: $S/dev/usb/uvideo.c
	${NORMAL_C}

auvitek.o: $S/dev/usb/auvitek.c
	${NORMAL_C}

auvitek_audio.o: $S/dev/usb/auvitek_audio.c
	${NORMAL_C}

auvitek_board.o: $S/dev/usb/auvitek_board.c
	${NORMAL_C}

auvitek_dtv.o: $S/dev/usb/auvitek_dtv.c
	${NORMAL_C}

auvitek_i2c.o: $S/dev/usb/auvitek_i2c.c
	${NORMAL_C}

auvitek_video.o: $S/dev/usb/auvitek_video.c
	${NORMAL_C}

emdtv.o: $S/dev/usb/emdtv.c
	${NORMAL_C}

emdtv_board.o: $S/dev/usb/emdtv_board.c
	${NORMAL_C}

emdtv_dtv.o: $S/dev/usb/emdtv_dtv.c
	${NORMAL_C}

emdtv_i2c.o: $S/dev/usb/emdtv_i2c.c
	${NORMAL_C}

emdtv_ir.o: $S/dev/usb/emdtv_ir.c
	${NORMAL_C}

urio.o: $S/dev/usb/urio.c
	${NORMAL_C}

uipad.o: $S/dev/usb/uipad.c
	${NORMAL_C}

uberry.o: $S/dev/usb/uberry.c
	${NORMAL_C}

uvisor.o: $S/dev/usb/uvisor.c
	${NORMAL_C}

ugensa.o: $S/dev/usb/ugensa.c
	${NORMAL_C}

u3g.o: $S/dev/usb/u3g.c
	${NORMAL_C}

uyap.o: $S/dev/usb/uyap.c
	${NORMAL_C}

udsbr.o: $S/dev/usb/udsbr.c
	${NORMAL_C}

if_aue.o: $S/dev/usb/if_aue.c
	${NORMAL_C}

if_cdce.o: $S/dev/usb/if_cdce.c
	${NORMAL_C}

if_cue.o: $S/dev/usb/if_cue.c
	${NORMAL_C}

if_kue.o: $S/dev/usb/if_kue.c
	${NORMAL_C}

if_upl.o: $S/dev/usb/if_upl.c
	${NORMAL_C}

if_url.o: $S/dev/usb/if_url.c
	${NORMAL_C}

if_axe.o: $S/dev/usb/if_axe.c
	${NORMAL_C}

if_udav.o: $S/dev/usb/if_udav.c
	${NORMAL_C}

if_otus.o: $S/dev/usb/if_otus.c
	${NORMAL_C}

umodem_common.o: $S/dev/usb/umodem_common.c
	${NORMAL_C}

umodem.o: $S/dev/usb/umodem.c
	${NORMAL_C}

uftdi.o: $S/dev/usb/uftdi.c
	${NORMAL_C}

uplcom.o: $S/dev/usb/uplcom.c
	${NORMAL_C}

umct.o: $S/dev/usb/umct.c
	${NORMAL_C}

uvscom.o: $S/dev/usb/uvscom.c
	${NORMAL_C}

ubsa_common.o: $S/dev/usb/ubsa_common.c
	${NORMAL_C}

ubsa.o: $S/dev/usb/ubsa.c
	${NORMAL_C}

uipaq.o: $S/dev/usb/uipaq.c
	${NORMAL_C}

ukyopon.o: $S/dev/usb/ukyopon.c
	${NORMAL_C}

uslsa.o: $S/dev/usb/uslsa.c
	${NORMAL_C}

uchcom.o: $S/dev/usb/uchcom.c
	${NORMAL_C}

uscanner.o: $S/dev/usb/uscanner.c
	${NORMAL_C}

usscanner.o: $S/dev/usb/usscanner.c
	${NORMAL_C}

if_atu.o: $S/dev/usb/if_atu.c
	${NORMAL_C}

if_ural.o: $S/dev/usb/if_ural.c
	${NORMAL_C}

if_rum.o: $S/dev/usb/if_rum.c
	${NORMAL_C}

utoppy.o: $S/dev/usb/utoppy.c
	${NORMAL_C}

if_zyd.o: $S/dev/usb/if_zyd.c
	${NORMAL_C}

udl.o: $S/dev/usb/udl.c
	${NORMAL_C}

uhso.o: $S/dev/usb/uhso.c
	${NORMAL_C}

if_urndis.o: $S/dev/usb/if_urndis.c
	${NORMAL_C}

if_urtwn.o: $S/dev/usb/if_urtwn.c
	${NORMAL_C}

if_urtw.o: $S/dev/usb/if_urtw.c
	${NORMAL_C}

bthub.o: $S/dev/bluetooth/bthub.c
	${NORMAL_C}

bthidev.o: $S/dev/bluetooth/bthidev.c
	${NORMAL_C}

btkbd.o: $S/dev/bluetooth/btkbd.c
	${NORMAL_C}

btms.o: $S/dev/bluetooth/btms.c
	${NORMAL_C}

btmagic.o: $S/dev/bluetooth/btmagic.c
	${NORMAL_C}

btsco.o: $S/dev/bluetooth/btsco.c
	${NORMAL_C}

btuart.o: $S/dev/bluetooth/btuart.c
	${NORMAL_C}

bcsp.o: $S/dev/bluetooth/bcsp.c
	${NORMAL_C}

sdmmc.o: $S/dev/sdmmc/sdmmc.c
	${NORMAL_C}

sdmmc_cis.o: $S/dev/sdmmc/sdmmc_cis.c
	${NORMAL_C}

sdmmc_io.o: $S/dev/sdmmc/sdmmc_io.c
	${NORMAL_C}

sdmmc_mem.o: $S/dev/sdmmc/sdmmc_mem.c
	${NORMAL_C}

ld_sdmmc.o: $S/dev/sdmmc/ld_sdmmc.c
	${NORMAL_C}

sbt.o: $S/dev/sdmmc/sbt.c
	${NORMAL_C}

fwohci.o: $S/dev/ieee1394/fwohci.c
	${NORMAL_C}

firewire.o: $S/dev/ieee1394/firewire.c
	${NORMAL_C}

fwdev.o: $S/dev/ieee1394/fwdev.c
	${NORMAL_C}

fwmem.o: $S/dev/ieee1394/fwmem.c
	${NORMAL_C}

fwdma.o: $S/dev/ieee1394/fwdma.c
	${NORMAL_C}

fwcrom.o: $S/dev/ieee1394/fwcrom.c
	${NORMAL_C}

if_fwip.o: $S/dev/ieee1394/if_fwip.c
	${NORMAL_C}

sbp.o: $S/dev/ieee1394/sbp.c
	${NORMAL_C}

OsdEnvironment.o: $S/dev/acpi/acpica/OsdEnvironment.c
	${NORMAL_C}

OsdHardware.o: $S/dev/acpi/acpica/OsdHardware.c
	${NORMAL_C}

OsdInterrupt.o: $S/dev/acpi/acpica/OsdInterrupt.c
	${NORMAL_C}

OsdMemory.o: $S/dev/acpi/acpica/OsdMemory.c
	${NORMAL_C}

OsdMisc.o: $S/dev/acpi/acpica/OsdMisc.c
	${NORMAL_C}

OsdSchedule.o: $S/dev/acpi/acpica/OsdSchedule.c
	${NORMAL_C}

OsdStream.o: $S/dev/acpi/acpica/OsdStream.c
	${NORMAL_C}

OsdSynch.o: $S/dev/acpi/acpica/OsdSynch.c
	${NORMAL_C}

dsargs.o: $S/external/bsd/acpica/dist/dispatcher/dsargs.c
	${NORMAL_C}

dscontrol.o: $S/external/bsd/acpica/dist/dispatcher/dscontrol.c
	${NORMAL_C}

dsfield.o: $S/external/bsd/acpica/dist/dispatcher/dsfield.c
	${NORMAL_C}

dsinit.o: $S/external/bsd/acpica/dist/dispatcher/dsinit.c
	${NORMAL_C}

dsmethod.o: $S/external/bsd/acpica/dist/dispatcher/dsmethod.c
	${NORMAL_C}

dsmthdat.o: $S/external/bsd/acpica/dist/dispatcher/dsmthdat.c
	${NORMAL_C}

dsobject.o: $S/external/bsd/acpica/dist/dispatcher/dsobject.c
	${NORMAL_C}

dsopcode.o: $S/external/bsd/acpica/dist/dispatcher/dsopcode.c
	${NORMAL_C}

dsutils.o: $S/external/bsd/acpica/dist/dispatcher/dsutils.c
	${NORMAL_C}

dswexec.o: $S/external/bsd/acpica/dist/dispatcher/dswexec.c
	${NORMAL_C}

dswload.o: $S/external/bsd/acpica/dist/dispatcher/dswload.c
	${NORMAL_C}

dswload2.o: $S/external/bsd/acpica/dist/dispatcher/dswload2.c
	${NORMAL_C}

dswscope.o: $S/external/bsd/acpica/dist/dispatcher/dswscope.c
	${NORMAL_C}

dswstate.o: $S/external/bsd/acpica/dist/dispatcher/dswstate.c
	${NORMAL_C}

evevent.o: $S/external/bsd/acpica/dist/events/evevent.c
	${NORMAL_C}

evglock.o: $S/external/bsd/acpica/dist/events/evglock.c
	${NORMAL_C}

evgpe.o: $S/external/bsd/acpica/dist/events/evgpe.c
	${NORMAL_C}

evgpeblk.o: $S/external/bsd/acpica/dist/events/evgpeblk.c
	${NORMAL_C}

evgpeinit.o: $S/external/bsd/acpica/dist/events/evgpeinit.c
	${NORMAL_C}

evgpeutil.o: $S/external/bsd/acpica/dist/events/evgpeutil.c
	${NORMAL_C}

evmisc.o: $S/external/bsd/acpica/dist/events/evmisc.c
	${NORMAL_C}

evregion.o: $S/external/bsd/acpica/dist/events/evregion.c
	${NORMAL_C}

evrgnini.o: $S/external/bsd/acpica/dist/events/evrgnini.c
	${NORMAL_C}

evsci.o: $S/external/bsd/acpica/dist/events/evsci.c
	${NORMAL_C}

evxface.o: $S/external/bsd/acpica/dist/events/evxface.c
	${NORMAL_C}

evxfevnt.o: $S/external/bsd/acpica/dist/events/evxfevnt.c
	${NORMAL_C}

evxfgpe.o: $S/external/bsd/acpica/dist/events/evxfgpe.c
	${NORMAL_C}

evxfregn.o: $S/external/bsd/acpica/dist/events/evxfregn.c
	${NORMAL_C}

exconfig.o: $S/external/bsd/acpica/dist/executer/exconfig.c
	${NORMAL_C}

exconvrt.o: $S/external/bsd/acpica/dist/executer/exconvrt.c
	${NORMAL_C}

excreate.o: $S/external/bsd/acpica/dist/executer/excreate.c
	${NORMAL_C}

exdebug.o: $S/external/bsd/acpica/dist/executer/exdebug.c
	${NORMAL_C}

exdump.o: $S/external/bsd/acpica/dist/executer/exdump.c
	${NORMAL_C}

exfield.o: $S/external/bsd/acpica/dist/executer/exfield.c
	${NORMAL_C}

exfldio.o: $S/external/bsd/acpica/dist/executer/exfldio.c
	${NORMAL_C}

exmisc.o: $S/external/bsd/acpica/dist/executer/exmisc.c
	${NORMAL_C}

exmutex.o: $S/external/bsd/acpica/dist/executer/exmutex.c
	${NORMAL_C}

exnames.o: $S/external/bsd/acpica/dist/executer/exnames.c
	${NORMAL_C}

exoparg1.o: $S/external/bsd/acpica/dist/executer/exoparg1.c
	${NORMAL_C}

exoparg2.o: $S/external/bsd/acpica/dist/executer/exoparg2.c
	${NORMAL_C}

exoparg3.o: $S/external/bsd/acpica/dist/executer/exoparg3.c
	${NORMAL_C}

exoparg6.o: $S/external/bsd/acpica/dist/executer/exoparg6.c
	${NORMAL_C}

exprep.o: $S/external/bsd/acpica/dist/executer/exprep.c
	${NORMAL_C}

exregion.o: $S/external/bsd/acpica/dist/executer/exregion.c
	${NORMAL_C}

exresnte.o: $S/external/bsd/acpica/dist/executer/exresnte.c
	${NORMAL_C}

exresolv.o: $S/external/bsd/acpica/dist/executer/exresolv.c
	${NORMAL_C}

exresop.o: $S/external/bsd/acpica/dist/executer/exresop.c
	${NORMAL_C}

exstore.o: $S/external/bsd/acpica/dist/executer/exstore.c
	${NORMAL_C}

exstoren.o: $S/external/bsd/acpica/dist/executer/exstoren.c
	${NORMAL_C}

exstorob.o: $S/external/bsd/acpica/dist/executer/exstorob.c
	${NORMAL_C}

exsystem.o: $S/external/bsd/acpica/dist/executer/exsystem.c
	${NORMAL_C}

exutils.o: $S/external/bsd/acpica/dist/executer/exutils.c
	${NORMAL_C}

hwacpi.o: $S/external/bsd/acpica/dist/hardware/hwacpi.c
	${NORMAL_C}

hwgpe.o: $S/external/bsd/acpica/dist/hardware/hwgpe.c
	${NORMAL_C}

hwpci.o: $S/external/bsd/acpica/dist/hardware/hwpci.c
	${NORMAL_C}

hwregs.o: $S/external/bsd/acpica/dist/hardware/hwregs.c
	${NORMAL_C}

hwsleep.o: $S/external/bsd/acpica/dist/hardware/hwsleep.c
	${NORMAL_C}

hwtimer.o: $S/external/bsd/acpica/dist/hardware/hwtimer.c
	${NORMAL_C}

hwvalid.o: $S/external/bsd/acpica/dist/hardware/hwvalid.c
	${NORMAL_C}

hwxface.o: $S/external/bsd/acpica/dist/hardware/hwxface.c
	${NORMAL_C}

nsaccess.o: $S/external/bsd/acpica/dist/namespace/nsaccess.c
	${NORMAL_C}

nsalloc.o: $S/external/bsd/acpica/dist/namespace/nsalloc.c
	${NORMAL_C}

nsdump.o: $S/external/bsd/acpica/dist/namespace/nsdump.c
	${NORMAL_C}

nsdumpdv.o: $S/external/bsd/acpica/dist/namespace/nsdumpdv.c
	${NORMAL_C}

nseval.o: $S/external/bsd/acpica/dist/namespace/nseval.c
	${NORMAL_C}

nsinit.o: $S/external/bsd/acpica/dist/namespace/nsinit.c
	${NORMAL_C}

nsload.o: $S/external/bsd/acpica/dist/namespace/nsload.c
	${NORMAL_C}

nsnames.o: $S/external/bsd/acpica/dist/namespace/nsnames.c
	${NORMAL_C}

nsobject.o: $S/external/bsd/acpica/dist/namespace/nsobject.c
	${NORMAL_C}

nsparse.o: $S/external/bsd/acpica/dist/namespace/nsparse.c
	${NORMAL_C}

nspredef.o: $S/external/bsd/acpica/dist/namespace/nspredef.c
	${NORMAL_C}

nsrepair.o: $S/external/bsd/acpica/dist/namespace/nsrepair.c
	${NORMAL_C}

nsrepair2.o: $S/external/bsd/acpica/dist/namespace/nsrepair2.c
	${NORMAL_C}

nssearch.o: $S/external/bsd/acpica/dist/namespace/nssearch.c
	${NORMAL_C}

nsutils.o: $S/external/bsd/acpica/dist/namespace/nsutils.c
	${NORMAL_C}

nswalk.o: $S/external/bsd/acpica/dist/namespace/nswalk.c
	${NORMAL_C}

nsxfeval.o: $S/external/bsd/acpica/dist/namespace/nsxfeval.c
	${NORMAL_C}

nsxfname.o: $S/external/bsd/acpica/dist/namespace/nsxfname.c
	${NORMAL_C}

nsxfobj.o: $S/external/bsd/acpica/dist/namespace/nsxfobj.c
	${NORMAL_C}

psargs.o: $S/external/bsd/acpica/dist/parser/psargs.c
	${NORMAL_C}

psloop.o: $S/external/bsd/acpica/dist/parser/psloop.c
	${NORMAL_C}

psopcode.o: $S/external/bsd/acpica/dist/parser/psopcode.c
	${NORMAL_C}

psparse.o: $S/external/bsd/acpica/dist/parser/psparse.c
	${NORMAL_C}

psscope.o: $S/external/bsd/acpica/dist/parser/psscope.c
	${NORMAL_C}

pstree.o: $S/external/bsd/acpica/dist/parser/pstree.c
	${NORMAL_C}

psutils.o: $S/external/bsd/acpica/dist/parser/psutils.c
	${NORMAL_C}

pswalk.o: $S/external/bsd/acpica/dist/parser/pswalk.c
	${NORMAL_C}

psxface.o: $S/external/bsd/acpica/dist/parser/psxface.c
	${NORMAL_C}

rsaddr.o: $S/external/bsd/acpica/dist/resources/rsaddr.c
	${NORMAL_C}

rscalc.o: $S/external/bsd/acpica/dist/resources/rscalc.c
	${NORMAL_C}

rscreate.o: $S/external/bsd/acpica/dist/resources/rscreate.c
	${NORMAL_C}

rsdump.o: $S/external/bsd/acpica/dist/resources/rsdump.c
	${NORMAL_C}

rsinfo.o: $S/external/bsd/acpica/dist/resources/rsinfo.c
	${NORMAL_C}

rsio.o: $S/external/bsd/acpica/dist/resources/rsio.c
	${NORMAL_C}

rsirq.o: $S/external/bsd/acpica/dist/resources/rsirq.c
	${NORMAL_C}

rslist.o: $S/external/bsd/acpica/dist/resources/rslist.c
	${NORMAL_C}

rsmemory.o: $S/external/bsd/acpica/dist/resources/rsmemory.c
	${NORMAL_C}

rsmisc.o: $S/external/bsd/acpica/dist/resources/rsmisc.c
	${NORMAL_C}

rsutils.o: $S/external/bsd/acpica/dist/resources/rsutils.c
	${NORMAL_C}

rsxface.o: $S/external/bsd/acpica/dist/resources/rsxface.c
	${NORMAL_C}

tbfadt.o: $S/external/bsd/acpica/dist/tables/tbfadt.c
	${NORMAL_C}

tbfind.o: $S/external/bsd/acpica/dist/tables/tbfind.c
	${NORMAL_C}

tbinstal.o: $S/external/bsd/acpica/dist/tables/tbinstal.c
	${NORMAL_C}

tbutils.o: $S/external/bsd/acpica/dist/tables/tbutils.c
	${NORMAL_C}

tbxface.o: $S/external/bsd/acpica/dist/tables/tbxface.c
	${NORMAL_C}

tbxfroot.o: $S/external/bsd/acpica/dist/tables/tbxfroot.c
	${NORMAL_C}

utalloc.o: $S/external/bsd/acpica/dist/utilities/utalloc.c
	${NORMAL_C}

utcache.o: $S/external/bsd/acpica/dist/utilities/utcache.c
	${NORMAL_C}

utcopy.o: $S/external/bsd/acpica/dist/utilities/utcopy.c
	${NORMAL_C}

utdebug.o: $S/external/bsd/acpica/dist/utilities/utdebug.c
	${NORMAL_C}

utdecode.o: $S/external/bsd/acpica/dist/utilities/utdecode.c
	${NORMAL_C}

utdelete.o: $S/external/bsd/acpica/dist/utilities/utdelete.c
	${NORMAL_C}

uteval.o: $S/external/bsd/acpica/dist/utilities/uteval.c
	${NORMAL_C}

utglobal.o: $S/external/bsd/acpica/dist/utilities/utglobal.c
	${NORMAL_C}

utids.o: $S/external/bsd/acpica/dist/utilities/utids.c
	${NORMAL_C}

utinit.o: $S/external/bsd/acpica/dist/utilities/utinit.c
	${NORMAL_C}

utlock.o: $S/external/bsd/acpica/dist/utilities/utlock.c
	${NORMAL_C}

utmath.o: $S/external/bsd/acpica/dist/utilities/utmath.c
	${NORMAL_C}

utmisc.o: $S/external/bsd/acpica/dist/utilities/utmisc.c
	${NORMAL_C}

utmutex.o: $S/external/bsd/acpica/dist/utilities/utmutex.c
	${NORMAL_C}

utobject.o: $S/external/bsd/acpica/dist/utilities/utobject.c
	${NORMAL_C}

utosi.o: $S/external/bsd/acpica/dist/utilities/utosi.c
	${NORMAL_C}

utresrc.o: $S/external/bsd/acpica/dist/utilities/utresrc.c
	${NORMAL_C}

utstate.o: $S/external/bsd/acpica/dist/utilities/utstate.c
	${NORMAL_C}

uttrack.o: $S/external/bsd/acpica/dist/utilities/uttrack.c
	${NORMAL_C}

utxface.o: $S/external/bsd/acpica/dist/utilities/utxface.c
	${NORMAL_C}

utxferror.o: $S/external/bsd/acpica/dist/utilities/utxferror.c
	${NORMAL_C}

acpi.o: $S/dev/acpi/acpi.c
	${NORMAL_C}

acpi_debug.o: $S/dev/acpi/acpi_debug.c
	${NORMAL_C}

acpi_pci.o: $S/dev/acpi/acpi_pci.c
	${NORMAL_C}

acpi_pci_link.o: $S/dev/acpi/acpi_pci_link.c
	${NORMAL_C}

acpi_power.o: $S/dev/acpi/acpi_power.c
	${NORMAL_C}

acpi_quirks.o: $S/dev/acpi/acpi_quirks.c
	${NORMAL_C}

acpi_resource.o: $S/dev/acpi/acpi_resource.c
	${NORMAL_C}

acpi_srat.o: $S/dev/acpi/acpi_srat.c
	${NORMAL_C}

acpi_slit.o: $S/dev/acpi/acpi_slit.c
	${NORMAL_C}

acpi_timer.o: $S/dev/acpi/acpi_timer.c
	${NORMAL_C}

acpi_util.o: $S/dev/acpi/acpi_util.c
	${NORMAL_C}

acpi_wakedev.o: $S/dev/acpi/acpi_wakedev.c
	${NORMAL_C}

acpi_ec.o: $S/dev/acpi/acpi_ec.c
	${NORMAL_C}

acpi_lid.o: $S/dev/acpi/acpi_lid.c
	${NORMAL_C}

acpi_button.o: $S/dev/acpi/acpi_button.c
	${NORMAL_C}

acpi_acad.o: $S/dev/acpi/acpi_acad.c
	${NORMAL_C}

acpi_bat.o: $S/dev/acpi/acpi_bat.c
	${NORMAL_C}

acpi_display.o: $S/dev/acpi/acpi_display.c
	${NORMAL_C}

acpi_fan.o: $S/dev/acpi/acpi_fan.c
	${NORMAL_C}

acpi_tz.o: $S/dev/acpi/acpi_tz.c
	${NORMAL_C}

acpi_wdrt.o: $S/dev/acpi/acpi_wdrt.c
	${NORMAL_C}

pckbc_acpi.o: $S/dev/acpi/pckbc_acpi.c
	${NORMAL_C}

mpu_acpi.o: $S/dev/acpi/mpu_acpi.c
	${NORMAL_C}

joy_acpi.o: $S/dev/acpi/joy_acpi.c
	${NORMAL_C}

pcppi_acpi.o: $S/dev/acpi/pcppi_acpi.c
	${NORMAL_C}

attimer_acpi.o: $S/dev/acpi/attimer_acpi.c
	${NORMAL_C}

hpet_acpi.o: $S/dev/acpi/hpet_acpi.c
	${NORMAL_C}

asus_acpi.o: $S/dev/acpi/asus_acpi.c
	${NORMAL_C}

ug_acpi.o: $S/dev/acpi/ug_acpi.c
	${NORMAL_C}

sony_acpi.o: $S/dev/acpi/sony_acpi.c
	${NORMAL_C}

spic_acpi.o: $S/dev/acpi/spic_acpi.c
	${NORMAL_C}

thinkpad_acpi.o: $S/dev/acpi/thinkpad_acpi.c
	${NORMAL_C}

dalb_acpi.o: $S/dev/acpi/dalb_acpi.c
	${NORMAL_C}

wb_acpi.o: $S/dev/acpi/wb_acpi.c
	${NORMAL_C}

aibs_acpi.o: $S/dev/acpi/aibs_acpi.c
	${NORMAL_C}

fujbp_acpi.o: $S/dev/acpi/fujbp_acpi.c
	${NORMAL_C}

fujhk_acpi.o: $S/dev/acpi/fujhk_acpi.c
	${NORMAL_C}

wmi_acpi.o: $S/dev/acpi/wmi/wmi_acpi.c
	${NORMAL_C}

wmi_dell.o: $S/dev/acpi/wmi/wmi_dell.c
	${NORMAL_C}

wmi_eeepc.o: $S/dev/acpi/wmi/wmi_eeepc.c
	${NORMAL_C}

wmi_hp.o: $S/dev/acpi/wmi/wmi_hp.c
	${NORMAL_C}

wmi_msi.o: $S/dev/acpi/wmi/wmi_msi.c
	${NORMAL_C}

acpi_wakeup_low.o: $S/arch/amd64/acpi/acpi_wakeup_low.S
	${NORMAL_S}


##
## (9) port independent kernel machinery
##
.include "$S/conf/Makefile.kern.inc"

## Include rules for ACPI wakecode
.include "$S/arch/x86/acpi/Makefile.wakecode.inc"

##
## (10) Appending make options.
##
CPPFLAGS+=-I$S/dist/ipf
CPPFLAGS+=-I${S}/external/isc/atheros_hal/dist
CPPFLAGS+=-I${S}/external/isc/atheros_hal/ic
CPPFLAGS+=-I$S/../common/include
CPPFLAGS+=-I$S/external/bsd/acpica/dist/include
