/*
 * MACHINE GENERATED: DO NOT EDIT
 *
 * devsw.c, from "J4"
 */

#include <sys/param.h>
#include <sys/conf.h>

/* device switch table for block device */
extern const struct bdevsw wd_bdevsw;
extern const struct bdevsw swap_bdevsw;
extern const struct bdevsw fd_bdevsw;
extern const struct bdevsw sd_bdevsw;
extern const struct bdevsw st_bdevsw;
extern const struct bdevsw cd_bdevsw;
extern const struct bdevsw vnd_bdevsw;
extern const struct bdevsw ccd_bdevsw;
extern const struct bdevsw md_bdevsw;
extern const struct bdevsw raid_bdevsw;
extern const struct bdevsw ld_bdevsw;
extern const struct bdevsw cgd_bdevsw;
extern const struct bdevsw fss_bdevsw;
extern const struct bdevsw dk_bdevsw;

const struct bdevsw *bdevsw0[] = {
	&wd_bdevsw,
	&swap_bdevsw,
	&fd_bdevsw,
	NULL,
	&sd_bdevsw,
	&st_bdevsw,
	&cd_bdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&vnd_bdevsw,
	NULL,
	&ccd_bdevsw,
	&md_bdevsw,
	&raid_bdevsw,
	&ld_bdevsw,
	&cgd_bdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&fss_bdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	&dk_bdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

const struct bdevsw **bdevsw = bdevsw0;
const int sys_bdevsws = __arraycount(bdevsw0);
int max_bdevsws = __arraycount(bdevsw0);

/* device switch table for character device */
extern const struct cdevsw cons_cdevsw;
extern const struct cdevsw ctty_cdevsw;
extern const struct cdevsw mem_cdevsw;
extern const struct cdevsw wd_cdevsw;
extern const struct cdevsw swap_cdevsw;
extern const struct cdevsw pts_cdevsw;
extern const struct cdevsw ptc_cdevsw;
extern const struct cdevsw log_cdevsw;
extern const struct cdevsw com_cdevsw;
extern const struct cdevsw fd_cdevsw;
extern const struct cdevsw sd_cdevsw;
extern const struct cdevsw st_cdevsw;
extern const struct cdevsw cd_cdevsw;
extern const struct cdevsw lpt_cdevsw;
extern const struct cdevsw ch_cdevsw;
extern const struct cdevsw ccd_cdevsw;
extern const struct cdevsw ss_cdevsw;
extern const struct cdevsw uk_cdevsw;
extern const struct cdevsw filedesc_cdevsw;
extern const struct cdevsw bpf_cdevsw;
extern const struct cdevsw md_cdevsw;
extern const struct cdevsw cy_cdevsw;
extern const struct cdevsw tun_cdevsw;
extern const struct cdevsw vnd_cdevsw;
extern const struct cdevsw audio_cdevsw;
extern const struct cdevsw ipl_cdevsw;
extern const struct cdevsw rnd_cdevsw;
extern const struct cdevsw wsdisplay_cdevsw;
extern const struct cdevsw wskbd_cdevsw;
extern const struct cdevsw wsmouse_cdevsw;
extern const struct cdevsw usb_cdevsw;
extern const struct cdevsw uhid_cdevsw;
extern const struct cdevsw ulpt_cdevsw;
extern const struct cdevsw midi_cdevsw;
extern const struct cdevsw sequencer_cdevsw;
extern const struct cdevsw vcoda_cdevsw;
extern const struct cdevsw scsibus_cdevsw;
extern const struct cdevsw raid_cdevsw;
extern const struct cdevsw esh_cdevsw;
extern const struct cdevsw ugen_cdevsw;
extern const struct cdevsw wsmux_cdevsw;
extern const struct cdevsw ucom_cdevsw;
extern const struct cdevsw sysmon_cdevsw;
extern const struct cdevsw ld_cdevsw;
extern const struct cdevsw urio_cdevsw;
extern const struct cdevsw bktr_cdevsw;
extern const struct cdevsw cz_cdevsw;
extern const struct cdevsw ses_cdevsw;
extern const struct cdevsw uscanner_cdevsw;
extern const struct cdevsw iop_cdevsw;
extern const struct cdevsw mlx_cdevsw;
extern const struct cdevsw clockctl_cdevsw;
extern const struct cdevsw cgd_cdevsw;
extern const struct cdevsw agp_cdevsw;
extern const struct cdevsw pci_cdevsw;
extern const struct cdevsw irframe_cdevsw;
extern const struct cdevsw ksyms_cdevsw;
extern const struct cdevsw wsfont_cdevsw;
extern const struct cdevsw mly_cdevsw;
extern const struct cdevsw joy_cdevsw;
extern const struct cdevsw cir_cdevsw;
extern const struct cdevsw radio_cdevsw;
extern const struct cdevsw dpt_cdevsw;
extern const struct cdevsw twe_cdevsw;
extern const struct cdevsw nsmb_cdevsw;
extern const struct cdevsw crypto_cdevsw;
extern const struct cdevsw fss_cdevsw;
extern const struct cdevsw ptm_cdevsw;
extern const struct cdevsw atabus_cdevsw;
extern const struct cdevsw drvctl_cdevsw;
extern const struct cdevsw dk_cdevsw;
extern const struct cdevsw tap_cdevsw;
extern const struct cdevsw veriexec_cdevsw;
extern const struct cdevsw fw_cdevsw;
extern const struct cdevsw ucycom_cdevsw;
extern const struct cdevsw utoppy_cdevsw;
extern const struct cdevsw bthub_cdevsw;
extern const struct cdevsw amr_cdevsw;
extern const struct cdevsw lockstat_cdevsw;
extern const struct cdevsw putter_cdevsw;
extern const struct cdevsw drm_cdevsw;
extern const struct cdevsw bio_cdevsw;
extern const struct cdevsw twa_cdevsw;
extern const struct cdevsw cpuctl_cdevsw;
extern const struct cdevsw pad_cdevsw;
extern const struct cdevsw video_cdevsw;
extern const struct cdevsw hdaudio_cdevsw;
extern const struct cdevsw uhso_cdevsw;
extern const struct cdevsw dtv_cdevsw;
extern const struct cdevsw iic_cdevsw;
extern const struct cdevsw tpm_cdevsw;
extern const struct cdevsw mfi_cdevsw;

const struct cdevsw *cdevsw0[] = {
	&cons_cdevsw,
	&ctty_cdevsw,
	&mem_cdevsw,
	&wd_cdevsw,
	&swap_cdevsw,
	&pts_cdevsw,
	&ptc_cdevsw,
	&log_cdevsw,
	&com_cdevsw,
	&fd_cdevsw,
	NULL,
	NULL,
	NULL,
	&sd_cdevsw,
	&st_cdevsw,
	&cd_cdevsw,
	&lpt_cdevsw,
	&ch_cdevsw,
	&ccd_cdevsw,
	&ss_cdevsw,
	&uk_cdevsw,
	NULL,
	&filedesc_cdevsw,
	&bpf_cdevsw,
	&md_cdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&cy_cdevsw,
	NULL,
	&tun_cdevsw,
	&vnd_cdevsw,
	&audio_cdevsw,
	NULL,
	&ipl_cdevsw,
	NULL,
	&rnd_cdevsw,
	&wsdisplay_cdevsw,
	&wskbd_cdevsw,
	&wsmouse_cdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&usb_cdevsw,
	&uhid_cdevsw,
	&ulpt_cdevsw,
	&midi_cdevsw,
	&sequencer_cdevsw,
	&vcoda_cdevsw,
	&scsibus_cdevsw,
	&raid_cdevsw,
	&esh_cdevsw,
	&ugen_cdevsw,
	&wsmux_cdevsw,
	&ucom_cdevsw,
	&sysmon_cdevsw,
	NULL,
	&ld_cdevsw,
	&urio_cdevsw,
	&bktr_cdevsw,
	NULL,
	&cz_cdevsw,
	&ses_cdevsw,
	&uscanner_cdevsw,
	&iop_cdevsw,
	NULL,
	&mlx_cdevsw,
	&clockctl_cdevsw,
	NULL,
	&cgd_cdevsw,
	&agp_cdevsw,
	&pci_cdevsw,
	&irframe_cdevsw,
	&ksyms_cdevsw,
	&wsfont_cdevsw,
	&mly_cdevsw,
	NULL,
	&joy_cdevsw,
	&cir_cdevsw,
	&radio_cdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	&dpt_cdevsw,
	&twe_cdevsw,
	&nsmb_cdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&crypto_cdevsw,
	NULL,
	NULL,
	&fss_cdevsw,
	NULL,
	&ptm_cdevsw,
	&atabus_cdevsw,
	&drvctl_cdevsw,
	&dk_cdevsw,
	&tap_cdevsw,
	&veriexec_cdevsw,
	&fw_cdevsw,
	&ucycom_cdevsw,
	NULL,
	&utoppy_cdevsw,
	&bthub_cdevsw,
	&amr_cdevsw,
	&lockstat_cdevsw,
	&putter_cdevsw,
	NULL,
	&drm_cdevsw,
	&bio_cdevsw,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&twa_cdevsw,
	&cpuctl_cdevsw,
	&pad_cdevsw,
	NULL,
	NULL,
	NULL,
	&video_cdevsw,
	NULL,
	&hdaudio_cdevsw,
	&uhso_cdevsw,
	NULL,
	NULL,
	NULL,
	&dtv_cdevsw,
	&iic_cdevsw,
	NULL,
	NULL,
	&tpm_cdevsw,
	&mfi_cdevsw,
};

const struct cdevsw **cdevsw = cdevsw0;
const int sys_cdevsws = __arraycount(cdevsw0);
int max_cdevsws = __arraycount(cdevsw0);

/* device conversion table */
struct devsw_conv devsw_conv0[] = {
	{ "crypto", -1, 160, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "pf", -1, 161, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "fss", 163, 163, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "pps", -1, 164, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ptm", -1, 165, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "atabus", -1, 166, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "drvctl", -1, 167, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "dk", 168, 168, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tap", -1, 169, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "veriexec", -1, 170, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "fw", -1, 171, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ucycom", -1, 172, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "gpio", -1, 173, DEVNODE_VECTOR, DEVNODE_FLAG_LINKZERO, { 8, 0 }},
	{ "utoppy", -1, 174, DEVNODE_VECTOR, 0, { 2, 0 }},
	{ "bthub", -1, 175, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "amr", -1, 176, DEVNODE_VECTOR, 0, { 1, 0 }},
	{ "lockstat", -1, 177, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "putter", -1, 178, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "srt", -1, 179, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "drm", -1, 180, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bio", -1, 181, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "altmem", 182, 182, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "twa", -1, 187, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cpuctl", -1, 188, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "pad", -1, 189, DEVNODE_VECTOR, DEVNODE_FLAG_LINKZERO, { 4, 0 }},
	{ "zfs", 190, 190, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tprof", -1, 191, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isv", -1, 192, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "video", -1, 193, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "dm", 169, 194, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "hdaudio", -1, 195, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "uhso", -1, 196, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "rumpblk", 197, 197, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "npf", -1, 198, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "flash", 199, 199, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dtv", -1, 200, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iic", -1, 201, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "filemon", -1, 202, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iscsi", -1, 203, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tpm", -1, 204, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mfi", -1, 205, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cons", -1, 0, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ctty", -1, 1, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mem", -1, 2, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wd", 0, 3, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "swap", 1, 4, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pts", -1, 5, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ptc", -1, 6, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "log", -1, 7, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "com", -1, 8, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "fd", 2, 9, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wt", 3, 10, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pc", -1, 12, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sd", 4, 13, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "st", 5, 14, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cd", 6, 15, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "lpt", -1, 16, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ch", -1, 17, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ccd", 16, 18, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ss", -1, 19, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uk", -1, 20, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "filedesc", -1, 22, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bpf", -1, 23, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "md", 17, 24, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "spkr", -1, 27, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cy", -1, 38, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mcd", 7, 39, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tun", -1, 40, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "vnd", 14, 41, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "audio", -1, 42, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "svr4_net", -1, 43, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ipl", -1, 44, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "satlink", -1, 45, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "rnd", -1, 46, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsdisplay", -1, 47, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wskbd", -1, 48, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsmouse", -1, 49, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdn", -1, 50, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdnctl", -1, 51, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdnbchan", -1, 52, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdntrc", -1, 53, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdntel", -1, 54, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "usb", -1, 55, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uhid", -1, 56, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ulpt", -1, 57, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "midi", -1, 58, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sequencer", -1, 59, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "vcoda", -1, 60, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "scsibus", -1, 61, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "raid", 18, 62, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "esh", -1, 63, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ugen", -1, 64, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsmux", -1, 65, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ucom", -1, 66, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sysmon", -1, 67, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ld", 19, 69, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "urio", -1, 70, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bktr", -1, 71, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cz", -1, 73, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ses", -1, 74, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uscanner", -1, 75, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iop", -1, 76, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "altq", -1, 77, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mlx", -1, 78, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "clockctl", -1, 79, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cgd", 20, 81, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "agp", -1, 82, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pci", -1, 83, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "irframe", -1, 84, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ksyms", -1, 85, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsfont", -1, 86, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mly", -1, 87, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dpti", -1, 88, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "joy", -1, 89, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cir", -1, 90, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "radio", -1, 91, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "kttcp", -1, 92, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dpt", -1, 96, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "twe", -1, 97, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "nsmb", -1, 98, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xenevt", -1, 141, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xbd", 142, 142, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xencons", -1, 143, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
};

struct devsw_conv *devsw_conv = devsw_conv0;
int max_devsw_convs = __arraycount(devsw_conv0);

const dev_t swapdev = makedev(1, 0);
const dev_t zerodev = makedev(2, DEV_ZERO);

/* mem_no is only used in iskmemdev() */
const int mem_no = 2;
