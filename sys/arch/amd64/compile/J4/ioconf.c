/*
 * MACHINE GENERATED: DO NOT EDIT
 *
 * ioconf.c, from "J4"
 */

#include <sys/param.h>
#include <sys/conf.h>
#include <sys/device.h>
#include <sys/mount.h>

static const struct cfiattrdata gpibdevcf_iattrdata = {
	"gpibdev", 1,
	{
		{ "address", "-1", -1 },
	}
};
static const struct cfiattrdata ymcf_iattrdata = {
	"ym", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpibuscf_iattrdata = {
	"acpibus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata caccf_iattrdata = {
	"cac", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata spicf_iattrdata = {
	"spi", 1,
	{
		{ "slave", "NULL", 0 },
	}
};
static const struct cfiattrdata radiodevcf_iattrdata = {
	"radiodev", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ydscf_iattrdata = {
	"yds", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata mlxcf_iattrdata = {
	"mlx", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata ieee1394ifcf_iattrdata = {
	"ieee1394if", 2,
	{
		{ "euihi", "-1", -1 },
		{ "euilo", "-1", -1 },
	}
};
static const struct cfiattrdata scsibuscf_iattrdata = {
	"scsibus", 2,
	{
		{ "target", "-1", -1 },
		{ "lun", "-1", -1 },
	}
};
static const struct cfiattrdata ucombuscf_iattrdata = {
	"ucombus", 1,
	{
		{ "portno", "-1", -1 },
	}
};
static const struct cfiattrdata amrcf_iattrdata = {
	"amr", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata videobuscf_iattrdata = {
	"videobus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata fwhichbuscf_iattrdata = {
	"fwhichbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata isabuscf_iattrdata = {
	"isabus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata i2cbuscf_iattrdata = {
	"i2cbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ata_hlcf_iattrdata = {
	"ata_hl", 1,
	{
		{ "drive", "-1", -1 },
	}
};
static const struct cfiattrdata twacf_iattrdata = {
	"twa", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata fdccf_iattrdata = {
	"fdc", 1,
	{
		{ "drive", "-1", -1 },
	}
};
static const struct cfiattrdata twecf_iattrdata = {
	"twe", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata bthubcf_iattrdata = {
	"bthub", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata bthidbuscf_iattrdata = {
	"bthidbus", 1,
	{
		{ "reportid", "-1", -1 },
	}
};
static const struct cfiattrdata xirccf_iattrdata = {
	"xirc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpihpetbuscf_iattrdata = {
	"acpihpetbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpivgacf_iattrdata = {
	"acpivga", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcppicf_iattrdata = {
	"pcppi", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata depcacf_iattrdata = {
	"depca", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata wbsiocf_iattrdata = {
	"wbsio", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata sbpcf_iattrdata = {
	"sbp", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpiecdtbuscf_iattrdata = {
	"acpiecdtbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata svcf_iattrdata = {
	"sv", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ppbuscf_iattrdata = {
	"ppbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata commulticf_iattrdata = {
	"commulti", 1,
	{
		{ "slave", "-1", -1 },
	}
};
static const struct cfiattrdata eisabuscf_iattrdata = {
	"eisabus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata atapicf_iattrdata = {
	"atapi", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata atapibuscf_iattrdata = {
	"atapibus", 1,
	{
		{ "drive", "-1", -1 },
	}
};
static const struct cfiattrdata usbroothubifcf_iattrdata = {
	"usbroothubif", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata altmemdevcf_iattrdata = {
	"altmemdev", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ioapicbuscf_iattrdata = {
	"ioapicbus", 1,
	{
		{ "apid", "-1", -1 },
	}
};
static const struct cfiattrdata tcbuscf_iattrdata = {
	"tcbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata skccf_iattrdata = {
	"skc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata onewirebuscf_iattrdata = {
	"onewirebus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata tsdiocf_iattrdata = {
	"tsdio", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata cardbuscf_iattrdata = {
	"cardbus", 1,
	{
		{ "function", "-1", -1 },
	}
};
static const struct cfiattrdata fmscf_iattrdata = {
	"fms", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata voyagerbuscf_iattrdata = {
	"voyagerbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata iopcf_iattrdata = {
	"iop", 1,
	{
		{ "tid", "-1", -1 },
	}
};
static const struct cfiattrdata pckbcportcf_iattrdata = {
	"pckbcport", 2,
	{
		{ "irq", "-1", -1 },
		{ "port", "-1", -1 },
	}
};
static const struct cfiattrdata cbbuscf_iattrdata = {
	"cbbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata gpiocf_iattrdata = {
	"gpio", 3,
	{
		{ "offset", "-1", -1 },
		{ "mask", "0", 0 },
		{ "flag", "0", 0 },
	}
};
static const struct cfiattrdata cpubuscf_iattrdata = {
	"cpubus", 1,
	{
		{ "apid", "-1", -1 },
	}
};
static const struct cfiattrdata acpiwmibuscf_iattrdata = {
	"acpiwmibus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata dtvbuscf_iattrdata = {
	"dtvbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata gpiobuscf_iattrdata = {
	"gpiobus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata wsscf_iattrdata = {
	"wss", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcmcomcf_iattrdata = {
	"pcmcom", 1,
	{
		{ "slave", "-1", -1 },
	}
};
static const struct cfiattrdata drmcf_iattrdata = {
	"drm", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata aaccf_iattrdata = {
	"aac", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata pckbportcf_iattrdata = {
	"pckbport", 1,
	{
		{ "slot", "-1", -1 },
	}
};
static const struct cfiattrdata irbuscf_iattrdata = {
	"irbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcibuscf_iattrdata = {
	"pcibus", 1,
	{
		{ "bus", "-1", -1 },
	}
};
static const struct cfiattrdata cxgbccf_iattrdata = {
	"cxgbc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata upccf_iattrdata = {
	"upc", 1,
	{
		{ "offset", "-1", -1 },
	}
};
static const struct cfiattrdata hdaudiobuscf_iattrdata = {
	"hdaudiobus", 1,
	{
		{ "nid", "-1", -1 },
	}
};
static const struct cfiattrdata usbififcf_iattrdata = {
	"usbifif", 6,
	{
		{ "port", "-1", -1 },
		{ "configuration", "-1", -1 },
		{ "interface", "-1", -1 },
		{ "vendor", "-1", -1 },
		{ "product", "-1", -1 },
		{ "release", "-1", -1 },
	}
};
static const struct cfiattrdata acpiwdrtbuscf_iattrdata = {
	"acpiwdrtbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata amdpcibcf_iattrdata = {
	"amdpcib", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata amdtempbuscf_iattrdata = {
	"amdtempbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata iiccf_iattrdata = {
	"iic", 2,
	{
		{ "addr", "-1", -1 },
		{ "size", "-1", -1 },
	}
};
static const struct cfiattrdata eapcf_iattrdata = {
	"eap", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata onewirecf_iattrdata = {
	"onewire", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata mcabuscf_iattrdata = {
	"mcabus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcicf_iattrdata = {
	"pci", 2,
	{
		{ "dev", "-1", -1 },
		{ "function", "-1", -1 },
	}
};
static const struct cfiattrdata wsdisplaydevcf_iattrdata = {
	"wsdisplaydev", 1,
	{
		{ "kbdmux", "1", 1 },
	}
};
static const struct cfiattrdata miicf_iattrdata = {
	"mii", 1,
	{
		{ "phy", "-1", -1 },
	}
};
static const struct cfiattrdata cpcbuscf_iattrdata = {
	"cpcbus", 2,
	{
		{ "addr", "NULL", 0 },
		{ "irq", "-1", -1 },
	}
};
static const struct cfiattrdata nelecf_iattrdata = {
	"nele", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpiapmbuscf_iattrdata = {
	"acpiapmbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata parportcf_iattrdata = {
	"parport", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata nandbuscf_iattrdata = {
	"nandbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcmciacf_iattrdata = {
	"pcmcia", 1,
	{
		{ "function", "-1", -1 },
	}
};
static const struct cfiattrdata mskccf_iattrdata = {
	"mskc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata dbcoolcf_iattrdata = {
	"dbcool", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ataraidcf_iattrdata = {
	"ataraid", 2,
	{
		{ "vendtype", "-1", -1 },
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata usbdevifcf_iattrdata = {
	"usbdevif", 6,
	{
		{ "port", "-1", -1 },
		{ "configuration", "-1", -1 },
		{ "interface", "-1", -1 },
		{ "vendor", "-1", -1 },
		{ "product", "-1", -1 },
		{ "release", "-1", -1 },
	}
};
static const struct cfiattrdata norbuscf_iattrdata = {
	"norbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata ipmibuscf_iattrdata = {
	"ipmibus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata wskbddevcf_iattrdata = {
	"wskbddev", 2,
	{
		{ "console", "-1", -1 },
		{ "mux", "1", 1 },
	}
};
static const struct cfiattrdata audiobuscf_iattrdata = {
	"audiobus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata sbdspcf_iattrdata = {
	"sbdsp", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata virtiocf_iattrdata = {
	"virtio", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata btbuscf_iattrdata = {
	"btbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata agpbuscf_iattrdata = {
	"agpbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata isapnpcf_iattrdata = {
	"isapnp", 6,
	{
		{ "port", "-1", -1 },
		{ "size", "0", 0 },
		{ "iomem", "-1", -1 },
		{ "iosiz", "0", 0 },
		{ "irq", "-1", -1 },
		{ "drq", "-1", -1 },
	}
};
static const struct cfiattrdata cmpcicf_iattrdata = {
	"cmpci", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata midibuscf_iattrdata = {
	"midibus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata hpetichbuscf_iattrdata = {
	"hpetichbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata vmebuscf_iattrdata = {
	"vmebus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata wsemuldisplaydevcf_iattrdata = {
	"wsemuldisplaydev", 2,
	{
		{ "console", "-1", -1 },
		{ "kbdmux", "1", 1 },
	}
};
static const struct cfiattrdata mhzccf_iattrdata = {
	"mhzc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata uhidbuscf_iattrdata = {
	"uhidbus", 1,
	{
		{ "reportid", "-1", -1 },
	}
};
static const struct cfiattrdata flashbuscf_iattrdata = {
	"flashbus", 3,
	{
		{ "offset", "0", 0 },
		{ "size", "0", 0 },
		{ "readonly", "0", 0 },
	}
};
static const struct cfiattrdata nfsmbccf_iattrdata = {
	"nfsmbc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata icpcf_iattrdata = {
	"icp", 1,
	{
		{ "unit", "-1", -1 },
	}
};
static const struct cfiattrdata isacf_iattrdata = {
	"isa", 7,
	{
		{ "port", "-1", -1 },
		{ "size", "0", 0 },
		{ "iomem", "-1", -1 },
		{ "iosiz", "0", 0 },
		{ "irq", "-1", -1 },
		{ "drq", "-1", -1 },
		{ "drq2", "-1", -1 },
	}
};
static const struct cfiattrdata sdmmcbuscf_iattrdata = {
	"sdmmcbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata comcf_iattrdata = {
	"com", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata spiflashbuscf_iattrdata = {
	"spiflashbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata fwbuscf_iattrdata = {
	"fwbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata esocf_iattrdata = {
	"eso", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata puccf_iattrdata = {
	"puc", 1,
	{
		{ "port", "-1", -1 },
	}
};
static const struct cfiattrdata esscf_iattrdata = {
	"ess", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata acpinodebuscf_iattrdata = {
	"acpinodebus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcmciaslotcf_iattrdata = {
	"pcmciaslot", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata bicccf_iattrdata = {
	"bicc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata usbuscf_iattrdata = {
	"usbus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata wsmousedevcf_iattrdata = {
	"wsmousedev", 1,
	{
		{ "mux", "0", 0 },
	}
};
static const struct cfiattrdata scsicf_iattrdata = {
	"scsi", 1,
	{
		{ "channel", "-1", -1 },
	}
};
static const struct cfiattrdata sdmmccf_iattrdata = {
	"sdmmc", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata atacf_iattrdata = {
	"ata", 1,
	{
		{ "channel", "-1", -1 },
	}
};
static const struct cfiattrdata spibuscf_iattrdata = {
	"spibus", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata pcmciabuscf_iattrdata = {
	"pcmciabus", 2,
	{
		{ "controller", "-1", -1 },
		{ "socket", "-1", -1 },
	}
};
static const struct cfiattrdata jmide_hlcf_iattrdata = {
	"jmide_hl", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata drmbasecf_iattrdata = {
	"drmbase", 0, {
		{ NULL, NULL, 0 },
	}
};
static const struct cfiattrdata cpufeaturebuscf_iattrdata = {
	"cpufeaturebus", 0, {
		{ NULL, NULL, 0 },
	}
};

CFDRIVER_DECL(audio, DV_AUDIODEV, NULL);

CFDRIVER_DECL(midi, DV_DULL, NULL);

CFDRIVER_DECL(video, DV_DULL, NULL);

CFDRIVER_DECL(dtv, DV_DULL, NULL);

static const struct cfiattrdata * const iic_attrs[] = { &iiccf_iattrdata, NULL };
CFDRIVER_DECL(iic, DV_DULL, iic_attrs);

CFDRIVER_DECL(irframe, DV_DULL, NULL);

CFDRIVER_DECL(cir, DV_DULL, NULL);

CFDRIVER_DECL(lpt, DV_DULL, NULL);

CFDRIVER_DECL(tpm, DV_DULL, NULL);

CFDRIVER_DECL(ld, DV_DISK, NULL);

CFDRIVER_DECL(acphy, DV_DULL, NULL);

CFDRIVER_DECL(amhphy, DV_DULL, NULL);

CFDRIVER_DECL(bmtphy, DV_DULL, NULL);

CFDRIVER_DECL(brgphy, DV_DULL, NULL);

CFDRIVER_DECL(tlphy, DV_DULL, NULL);

CFDRIVER_DECL(nsphy, DV_DULL, NULL);

CFDRIVER_DECL(nsphyter, DV_DULL, NULL);

CFDRIVER_DECL(gentbi, DV_DULL, NULL);

CFDRIVER_DECL(glxtphy, DV_DULL, NULL);

CFDRIVER_DECL(gphyter, DV_DULL, NULL);

CFDRIVER_DECL(qsphy, DV_DULL, NULL);

CFDRIVER_DECL(inphy, DV_DULL, NULL);

CFDRIVER_DECL(iophy, DV_DULL, NULL);

CFDRIVER_DECL(exphy, DV_DULL, NULL);

CFDRIVER_DECL(lxtphy, DV_DULL, NULL);

CFDRIVER_DECL(makphy, DV_DULL, NULL);

CFDRIVER_DECL(icsphy, DV_DULL, NULL);

CFDRIVER_DECL(igphy, DV_DULL, NULL);

CFDRIVER_DECL(ikphy, DV_DULL, NULL);

CFDRIVER_DECL(sqphy, DV_DULL, NULL);

CFDRIVER_DECL(tqphy, DV_DULL, NULL);

CFDRIVER_DECL(dmphy, DV_DULL, NULL);

CFDRIVER_DECL(pnaphy, DV_DULL, NULL);

CFDRIVER_DECL(rgephy, DV_DULL, NULL);

CFDRIVER_DECL(urlphy, DV_DULL, NULL);

CFDRIVER_DECL(ukphy, DV_DULL, NULL);

CFDRIVER_DECL(ciphy, DV_DULL, NULL);

CFDRIVER_DECL(rlphy, DV_DULL, NULL);

CFDRIVER_DECL(atphy, DV_DULL, NULL);

CFDRIVER_DECL(ihphy, DV_DULL, NULL);

CFDRIVER_DECL(etphy, DV_DULL, NULL);

CFDRIVER_DECL(raid, DV_DISK, NULL);

static const struct cfiattrdata * const aic_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(aic, DV_DULL, aic_attrs);

static const struct cfiattrdata * const ahc_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(ahc, DV_DULL, ahc_attrs);

static const struct cfiattrdata * const ahd_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(ahd, DV_DULL, ahd_attrs);

static const struct cfiattrdata * const dpt_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(dpt, DV_DULL, dpt_attrs);

static const struct cfiattrdata * const cac_attrs[] = { &caccf_iattrdata, NULL };
CFDRIVER_DECL(cac, DV_DULL, cac_attrs);

static const struct cfiattrdata * const ciss_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(ciss, DV_DULL, ciss_attrs);

static const struct cfiattrdata * const mlx_attrs[] = { &mlxcf_iattrdata, NULL };
CFDRIVER_DECL(mlx, DV_DULL, mlx_attrs);

static const struct cfiattrdata * const icp_attrs[] = { &icpcf_iattrdata, NULL };
CFDRIVER_DECL(icp, DV_DULL, icp_attrs);

static const struct cfiattrdata * const icpsp_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(icpsp, DV_DULL, icpsp_attrs);

static const struct cfiattrdata * const aac_attrs[] = { &aaccf_iattrdata, NULL };
CFDRIVER_DECL(aac, DV_DULL, aac_attrs);

static const struct cfiattrdata * const adv_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(adv, DV_DULL, adv_attrs);

static const struct cfiattrdata * const adw_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(adw, DV_DULL, adw_attrs);

static const struct cfiattrdata * const bha_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(bha, DV_DULL, bha_attrs);

static const struct cfiattrdata * const iha_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(iha, DV_DULL, iha_attrs);

static const struct cfiattrdata * const isp_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(isp, DV_DULL, isp_attrs);

static const struct cfiattrdata * const mfi_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(mfi, DV_DULL, mfi_attrs);

static const struct cfiattrdata * const mpt_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(mpt, DV_DULL, mpt_attrs);

static const struct cfiattrdata * const siop_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(siop, DV_DULL, siop_attrs);

static const struct cfiattrdata * const esiop_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(esiop, DV_DULL, esiop_attrs);

CFDRIVER_DECL(an, DV_IFNET, NULL);

CFDRIVER_DECL(awi, DV_IFNET, NULL);

CFDRIVER_DECL(wi, DV_IFNET, NULL);

CFDRIVER_DECL(ath, DV_IFNET, NULL);

CFDRIVER_DECL(atw, DV_IFNET, NULL);

CFDRIVER_DECL(rtw, DV_IFNET, NULL);

CFDRIVER_DECL(ral, DV_IFNET, NULL);

static const struct cfiattrdata * const ep_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(ep, DV_IFNET, ep_attrs);

static const struct cfiattrdata * const ex_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(ex, DV_IFNET, ex_attrs);

CFDRIVER_DECL(le, DV_IFNET, NULL);

static const struct cfiattrdata * const hme_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(hme, DV_IFNET, hme_attrs);

CFDRIVER_DECL(cy, DV_TTY, NULL);

CFDRIVER_DECL(en, DV_IFNET, NULL);

static const struct cfiattrdata * const esp_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(esp, DV_DULL, esp_attrs);

static const struct cfiattrdata * const spc_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(spc, DV_DULL, spc_attrs);

CFDRIVER_DECL(ntwoc, DV_IFNET, NULL);

static const struct cfiattrdata * const fxp_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(fxp, DV_IFNET, fxp_attrs);

static const struct cfiattrdata * const sm_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(sm, DV_IFNET, sm_attrs);

static const struct cfiattrdata * const epic_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(epic, DV_IFNET, epic_attrs);

CFDRIVER_DECL(mbe, DV_IFNET, NULL);

static const struct cfiattrdata * const ne_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(ne, DV_IFNET, ne_attrs);

static const struct cfiattrdata * const com_attrs[] = { &comcf_iattrdata, NULL };
CFDRIVER_DECL(com, DV_TTY, com_attrs);

static const struct cfiattrdata * const pckbc_attrs[] = { &pckbportcf_iattrdata, NULL };
CFDRIVER_DECL(pckbc, DV_DULL, pckbc_attrs);

CFDRIVER_DECL(attimer, DV_DULL, NULL);

CFDRIVER_DECL(ug, DV_DULL, NULL);

CFDRIVER_DECL(esh, DV_IFNET, NULL);

static const struct cfiattrdata * const opl_attrs[] = { &midibuscf_iattrdata, NULL };
CFDRIVER_DECL(opl, DV_DULL, opl_attrs);

static const struct cfiattrdata * const mpu_attrs[] = { &midibuscf_iattrdata, NULL };
CFDRIVER_DECL(mpu, DV_DULL, mpu_attrs);

static const struct cfiattrdata * const rtk_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(rtk, DV_IFNET, rtk_attrs);

static const struct cfiattrdata * const re_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(re, DV_IFNET, re_attrs);

static const struct cfiattrdata * const wdc_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(wdc, DV_DULL, wdc_attrs);

static const struct cfiattrdata * const atabus_attrs[] = { &ata_hlcf_iattrdata, &atapicf_iattrdata, NULL };
CFDRIVER_DECL(atabus, DV_DULL, atabus_attrs);

static const struct cfiattrdata * const njata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(njata, DV_DULL, njata_attrs);

static const struct cfiattrdata * const ahcisata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(ahcisata, DV_DULL, ahcisata_attrs);

static const struct cfiattrdata * const siisata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(siisata, DV_DULL, siisata_attrs);

static const struct cfiattrdata * const mvsata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(mvsata, DV_DULL, mvsata_attrs);

static const struct cfiattrdata * const tlp_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(tlp, DV_IFNET, tlp_attrs);

static const struct cfiattrdata * const sf_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(sf, DV_IFNET, sf_attrs);

CFDRIVER_DECL(cs, DV_IFNET, NULL);

CFDRIVER_DECL(hpet, DV_DULL, NULL);

static const struct cfiattrdata * const drmdev_attrs[] = { &drmbasecf_iattrdata, NULL };
CFDRIVER_DECL(drmdev, DV_DULL, drmdev_attrs);

static const struct cfiattrdata * const inteldrm_attrs[] = { &drmbasecf_iattrdata, NULL };
CFDRIVER_DECL(inteldrm, DV_DULL, inteldrm_attrs);

static const struct cfiattrdata * const vga_attrs[] = { &drmcf_iattrdata, &wsemuldisplaydevcf_iattrdata, NULL };
CFDRIVER_DECL(vga, DV_DISPLAYDEV, vga_attrs);

CFDRIVER_DECL(wsdisplay, DV_DULL, NULL);

CFDRIVER_DECL(wskbd, DV_DULL, NULL);

CFDRIVER_DECL(wsmouse, DV_DULL, NULL);

static const struct cfiattrdata * const genfb_attrs[] = { &drmcf_iattrdata, &wsemuldisplaydevcf_iattrdata, NULL };
CFDRIVER_DECL(genfb, DV_DULL, genfb_attrs);

static const struct cfiattrdata * const uhci_attrs[] = { &usbuscf_iattrdata, NULL };
CFDRIVER_DECL(uhci, DV_DULL, uhci_attrs);

static const struct cfiattrdata * const ohci_attrs[] = { &usbuscf_iattrdata, NULL };
CFDRIVER_DECL(ohci, DV_DULL, ohci_attrs);

static const struct cfiattrdata * const ehci_attrs[] = { &usbuscf_iattrdata, NULL };
CFDRIVER_DECL(ehci, DV_DULL, ehci_attrs);

static const struct cfiattrdata * const slhci_attrs[] = { &usbuscf_iattrdata, NULL };
CFDRIVER_DECL(slhci, DV_DULL, slhci_attrs);

static const struct cfiattrdata * const sdhc_attrs[] = { &sdmmcbuscf_iattrdata, NULL };
CFDRIVER_DECL(sdhc, DV_DULL, sdhc_attrs);

static const struct cfiattrdata * const wb_attrs[] = { &sdmmcbuscf_iattrdata, NULL };
CFDRIVER_DECL(wb, DV_DULL, wb_attrs);

static const struct cfiattrdata * const mtd_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(mtd, DV_IFNET, mtd_attrs);

CFDRIVER_DECL(radio, DV_DULL, NULL);

static const struct cfiattrdata * const fwohci_attrs[] = { &fwbuscf_iattrdata, NULL };
CFDRIVER_DECL(fwohci, DV_DULL, fwohci_attrs);

static const struct cfiattrdata * const spic_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(spic, DV_DULL, spic_attrs);

CFDRIVER_DECL(bwi, DV_IFNET, NULL);

CFDRIVER_DECL(vnd, DV_DISK, NULL);

CFDRIVER_DECL(cgd, DV_DISK, NULL);

CFDRIVER_DECL(md, DV_DISK, NULL);

CFDRIVER_DECL(fss, DV_DISK, NULL);

CFDRIVER_DECL(tap, DV_IFNET, NULL);

CFDRIVER_DECL(joy, DV_DULL, NULL);

static const struct cfiattrdata * const pad_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(pad, DV_DULL, pad_attrs);

static const struct cfiattrdata * const cpu_attrs[] = { &cpufeaturebuscf_iattrdata, NULL };
CFDRIVER_DECL(cpu, DV_DULL, cpu_attrs);

CFDRIVER_DECL(acpicpu, DV_DULL, NULL);

CFDRIVER_DECL(coretemp, DV_DULL, NULL);

CFDRIVER_DECL(est, DV_DULL, NULL);

CFDRIVER_DECL(powernow, DV_DULL, NULL);

CFDRIVER_DECL(ioapic, DV_DULL, NULL);

CFDRIVER_DECL(ipmi, DV_DULL, NULL);

static const struct cfiattrdata * const scsibus_attrs[] = { &scsibuscf_iattrdata, NULL };
CFDRIVER_DECL(scsibus, DV_DULL, scsibus_attrs);

static const struct cfiattrdata * const atapibus_attrs[] = { &atapibuscf_iattrdata, NULL };
CFDRIVER_DECL(atapibus, DV_DULL, atapibus_attrs);

CFDRIVER_DECL(cd, DV_DISK, NULL);

CFDRIVER_DECL(ch, DV_DULL, NULL);

CFDRIVER_DECL(sd, DV_DISK, NULL);

CFDRIVER_DECL(st, DV_TAPE, NULL);

CFDRIVER_DECL(ses, DV_DULL, NULL);

CFDRIVER_DECL(ss, DV_DULL, NULL);

CFDRIVER_DECL(uk, DV_DULL, NULL);

CFDRIVER_DECL(wd, DV_DISK, NULL);

static const struct cfiattrdata * const ataraid_attrs[] = { &ataraidcf_iattrdata, NULL };
CFDRIVER_DECL(ataraid, DV_DULL, ataraid_attrs);

static const struct cfiattrdata * const iop_attrs[] = { &iopcf_iattrdata, NULL };
CFDRIVER_DECL(iop, DV_DULL, iop_attrs);

static const struct cfiattrdata * const iopsp_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(iopsp, DV_DULL, iopsp_attrs);

static const struct cfiattrdata * const mainbus_attrs[] = { &ipmibuscf_iattrdata, &ioapicbuscf_iattrdata, &cpubuscf_iattrdata, &acpibuscf_iattrdata, &pcibuscf_iattrdata, &isabuscf_iattrdata, NULL };
CFDRIVER_DECL(mainbus, DV_DULL, mainbus_attrs);

static const struct cfiattrdata * const pci_attrs[] = { &pcicf_iattrdata, NULL };
CFDRIVER_DECL(pci, DV_DULL, pci_attrs);

static const struct cfiattrdata * const twe_attrs[] = { &twecf_iattrdata, NULL };
CFDRIVER_DECL(twe, DV_DULL, twe_attrs);

static const struct cfiattrdata * const twa_attrs[] = { &twacf_iattrdata, NULL };
CFDRIVER_DECL(twa, DV_DULL, twa_attrs);

static const struct cfiattrdata * const amr_attrs[] = { &amrcf_iattrdata, NULL };
CFDRIVER_DECL(amr, DV_DULL, amr_attrs);

static const struct cfiattrdata * const arcmsr_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(arcmsr, DV_DULL, arcmsr_attrs);

static const struct cfiattrdata * const mly_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(mly, DV_DULL, mly_attrs);

static const struct cfiattrdata * const pcscp_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(pcscp, DV_DULL, pcscp_attrs);

static const struct cfiattrdata * const mpii_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(mpii, DV_DULL, mpii_attrs);

CFDRIVER_DECL(fpa, DV_IFNET, NULL);

static const struct cfiattrdata * const pcn_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(pcn, DV_IFNET, pcn_attrs);

static const struct cfiattrdata * const trm_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(trm, DV_DULL, trm_attrs);

static const struct cfiattrdata * const pciide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(pciide, DV_DULL, pciide_attrs);

static const struct cfiattrdata * const acardide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(acardide, DV_DULL, acardide_attrs);

static const struct cfiattrdata * const aceride_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(aceride, DV_DULL, aceride_attrs);

static const struct cfiattrdata * const artsata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(artsata, DV_DULL, artsata_attrs);

static const struct cfiattrdata * const cmdide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(cmdide, DV_DULL, cmdide_attrs);

static const struct cfiattrdata * const cypide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(cypide, DV_DULL, cypide_attrs);

static const struct cfiattrdata * const hptide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(hptide, DV_DULL, hptide_attrs);

static const struct cfiattrdata * const iteide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(iteide, DV_DULL, iteide_attrs);

static const struct cfiattrdata * const jmide_attrs[] = { &jmide_hlcf_iattrdata, &atacf_iattrdata, NULL };
CFDRIVER_DECL(jmide, DV_DULL, jmide_attrs);

static const struct cfiattrdata * const optiide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(optiide, DV_DULL, optiide_attrs);

static const struct cfiattrdata * const piixide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(piixide, DV_DULL, piixide_attrs);

static const struct cfiattrdata * const pdcsata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(pdcsata, DV_DULL, pdcsata_attrs);

static const struct cfiattrdata * const pdcide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(pdcide, DV_DULL, pdcide_attrs);

static const struct cfiattrdata * const svwsata_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(svwsata, DV_DULL, svwsata_attrs);

static const struct cfiattrdata * const satalink_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(satalink, DV_DULL, satalink_attrs);

static const struct cfiattrdata * const siside_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(siside, DV_DULL, siside_attrs);

static const struct cfiattrdata * const slide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(slide, DV_DULL, slide_attrs);

static const struct cfiattrdata * const viaide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(viaide, DV_DULL, viaide_attrs);

static const struct cfiattrdata * const ixpide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(ixpide, DV_DULL, ixpide_attrs);

static const struct cfiattrdata * const toshide_attrs[] = { &atacf_iattrdata, NULL };
CFDRIVER_DECL(toshide, DV_DULL, toshide_attrs);

static const struct cfiattrdata * const ppb_attrs[] = { &pcibuscf_iattrdata, NULL };
CFDRIVER_DECL(ppb, DV_DULL, ppb_attrs);

CFDRIVER_DECL(cz, DV_DULL, NULL);

static const struct cfiattrdata * const jme_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(jme, DV_IFNET, jme_attrs);

static const struct cfiattrdata * const tl_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(tl, DV_IFNET, tl_attrs);

CFDRIVER_DECL(lmc, DV_IFNET, NULL);

static const struct cfiattrdata * const bktr_attrs[] = { &radiodevcf_iattrdata, NULL };
CFDRIVER_DECL(bktr, DV_DULL, bktr_attrs);

static const struct cfiattrdata * const clcs_attrs[] = { &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(clcs, DV_DULL, clcs_attrs);

static const struct cfiattrdata * const clct_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(clct, DV_DULL, clct_attrs);

static const struct cfiattrdata * const fms_attrs[] = { &fmscf_iattrdata, &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(fms, DV_DULL, fms_attrs);

static const struct cfiattrdata * const eap_attrs[] = { &eapcf_iattrdata, &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(eap, DV_DULL, eap_attrs);

static const struct cfiattrdata * const auacer_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(auacer, DV_DULL, auacer_attrs);

static const struct cfiattrdata * const auich_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(auich, DV_DULL, auich_attrs);

static const struct cfiattrdata * const auvia_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(auvia, DV_DULL, auvia_attrs);

static const struct cfiattrdata * const auixp_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(auixp, DV_DULL, auixp_attrs);

static const struct cfiattrdata * const neo_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(neo, DV_DULL, neo_attrs);

static const struct cfiattrdata * const esa_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(esa, DV_DULL, esa_attrs);

static const struct cfiattrdata * const eso_attrs[] = { &esocf_iattrdata, &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(eso, DV_DULL, eso_attrs);

static const struct cfiattrdata * const esm_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(esm, DV_DULL, esm_attrs);

static const struct cfiattrdata * const sv_attrs[] = { &svcf_iattrdata, &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(sv, DV_DULL, sv_attrs);

static const struct cfiattrdata * const cmpci_attrs[] = { &cmpcicf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(cmpci, DV_DULL, cmpci_attrs);

static const struct cfiattrdata * const yds_attrs[] = { &ydscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(yds, DV_DULL, yds_attrs);

static const struct cfiattrdata * const emuxki_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(emuxki, DV_DULL, emuxki_attrs);

static const struct cfiattrdata * const autri_attrs[] = { &midibuscf_iattrdata, &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(autri, DV_DULL, autri_attrs);

static const struct cfiattrdata * const puc_attrs[] = { &puccf_iattrdata, NULL };
CFDRIVER_DECL(puc, DV_DULL, puc_attrs);

static const struct cfiattrdata * const vr_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(vr, DV_IFNET, vr_attrs);

static const struct cfiattrdata * const sip_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(sip, DV_IFNET, sip_attrs);

static const struct cfiattrdata * const gsip_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(gsip, DV_IFNET, gsip_attrs);

static const struct cfiattrdata * const stge_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(stge, DV_IFNET, stge_attrs);

static const struct cfiattrdata * const wm_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(wm, DV_IFNET, wm_attrs);

static const struct cfiattrdata * const bge_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(bge, DV_IFNET, bge_attrs);

static const struct cfiattrdata * const bnx_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(bnx, DV_IFNET, bnx_attrs);

CFDRIVER_DECL(ti, DV_IFNET, NULL);

static const struct cfiattrdata * const ste_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(ste, DV_IFNET, ste_attrs);

static const struct cfiattrdata * const cbb_attrs[] = { &pcmciaslotcf_iattrdata, NULL };
CFDRIVER_DECL(cbb, DV_DULL, cbb_attrs);

static const struct cfiattrdata * const piixpm_attrs[] = { &i2cbuscf_iattrdata, NULL };
CFDRIVER_DECL(piixpm, DV_DULL, piixpm_attrs);

static const struct cfiattrdata * const amdpm_attrs[] = { &i2cbuscf_iattrdata, NULL };
CFDRIVER_DECL(amdpm, DV_DULL, amdpm_attrs);

CFDRIVER_DECL(hifn, DV_DULL, NULL);

CFDRIVER_DECL(ubsec, DV_DULL, NULL);

CFDRIVER_DECL(weasel, DV_DULL, NULL);

CFDRIVER_DECL(txp, DV_IFNET, NULL);

static const struct cfiattrdata * const skc_attrs[] = { &skccf_iattrdata, NULL };
CFDRIVER_DECL(skc, DV_DULL, skc_attrs);

static const struct cfiattrdata * const sk_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(sk, DV_IFNET, sk_attrs);

static const struct cfiattrdata * const bce_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(bce, DV_IFNET, bce_attrs);

CFDRIVER_DECL(dge, DV_IFNET, NULL);

CFDRIVER_DECL(ipw, DV_IFNET, NULL);

CFDRIVER_DECL(iwi, DV_IFNET, NULL);

CFDRIVER_DECL(wpi, DV_IFNET, NULL);

CFDRIVER_DECL(iwn, DV_IFNET, NULL);

CFDRIVER_DECL(xge, DV_IFNET, NULL);

static const struct cfiattrdata * const vge_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(vge, DV_IFNET, vge_attrs);

static const struct cfiattrdata * const nfe_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(nfe, DV_IFNET, nfe_attrs);

static const struct cfiattrdata * const mskc_attrs[] = { &mskccf_iattrdata, NULL };
CFDRIVER_DECL(mskc, DV_DULL, mskc_attrs);

static const struct cfiattrdata * const msk_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(msk, DV_IFNET, msk_attrs);

static const struct cfiattrdata * const nfsmbc_attrs[] = { &nfsmbccf_iattrdata, NULL };
CFDRIVER_DECL(nfsmbc, DV_DULL, nfsmbc_attrs);

static const struct cfiattrdata * const nfsmb_attrs[] = { &i2cbuscf_iattrdata, NULL };
CFDRIVER_DECL(nfsmb, DV_DULL, nfsmb_attrs);

static const struct cfiattrdata * const ichsmb_attrs[] = { &i2cbuscf_iattrdata, NULL };
CFDRIVER_DECL(ichsmb, DV_DULL, ichsmb_attrs);

static const struct cfiattrdata * const age_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(age, DV_IFNET, age_attrs);

static const struct cfiattrdata * const alc_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(alc, DV_IFNET, alc_attrs);

static const struct cfiattrdata * const ale_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(ale, DV_IFNET, ale_attrs);

static const struct cfiattrdata * const lii_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(lii, DV_IFNET, lii_attrs);

static const struct cfiattrdata * const hdaudio_attrs[] = { &hdaudiobuscf_iattrdata, NULL };
CFDRIVER_DECL(hdaudio, DV_DULL, hdaudio_attrs);

static const struct cfiattrdata * const hdafg_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(hdafg, DV_DULL, hdafg_attrs);

static const struct cfiattrdata * const et_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(et, DV_IFNET, et_attrs);

static const struct cfiattrdata * const cxdtv_attrs[] = { &i2cbuscf_iattrdata, &dtvbuscf_iattrdata, NULL };
CFDRIVER_DECL(cxdtv, DV_DULL, cxdtv_attrs);

static const struct cfiattrdata * const coram_attrs[] = { &i2cbuscf_iattrdata, &dtvbuscf_iattrdata, NULL };
CFDRIVER_DECL(coram, DV_DULL, coram_attrs);

static const struct cfiattrdata * const virtio_attrs[] = { &virtiocf_iattrdata, NULL };
CFDRIVER_DECL(virtio, DV_DULL, virtio_attrs);

CFDRIVER_DECL(viomb, DV_DULL, NULL);

CFDRIVER_DECL(vioif, DV_DULL, NULL);

CFDRIVER_DECL(agp, DV_DULL, NULL);

CFDRIVER_DECL(aapic, DV_DULL, NULL);

static const struct cfiattrdata * const pchb_attrs[] = { &amdtempbuscf_iattrdata, &agpbuscf_iattrdata, &pcibuscf_iattrdata, NULL };
CFDRIVER_DECL(pchb, DV_DULL, pchb_attrs);

static const struct cfiattrdata * const pcib_attrs[] = { &isabuscf_iattrdata, NULL };
CFDRIVER_DECL(pcib, DV_DULL, pcib_attrs);

CFDRIVER_DECL(amdtemp, DV_DULL, NULL);

static const struct cfiattrdata * const ichlpcib_attrs[] = { &gpiobuscf_iattrdata, &hpetichbuscf_iattrdata, &fwhichbuscf_iattrdata, &isabuscf_iattrdata, NULL };
CFDRIVER_DECL(ichlpcib, DV_DULL, ichlpcib_attrs);

CFDRIVER_DECL(fwhrng, DV_DULL, NULL);

static const struct cfiattrdata * const isa_attrs[] = { &isacf_iattrdata, NULL };
CFDRIVER_DECL(isa, DV_DULL, isa_attrs);

static const struct cfiattrdata * const pcppi_attrs[] = { &pcppicf_iattrdata, NULL };
CFDRIVER_DECL(pcppi, DV_DULL, pcppi_attrs);

static const struct cfiattrdata * const pckbd_attrs[] = { &wskbddevcf_iattrdata, NULL };
CFDRIVER_DECL(pckbd, DV_DULL, pckbd_attrs);

static const struct cfiattrdata * const pms_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(pms, DV_DULL, pms_attrs);

CFDRIVER_DECL(sysbeep, DV_DULL, NULL);

static const struct cfiattrdata * const fdc_attrs[] = { &fdccf_iattrdata, NULL };
CFDRIVER_DECL(fdc, DV_DULL, fdc_attrs);

CFDRIVER_DECL(fd, DV_DISK, NULL);

static const struct cfiattrdata * const cardslot_attrs[] = { &pcmciabuscf_iattrdata, &cbbuscf_iattrdata, NULL };
CFDRIVER_DECL(cardslot, DV_DULL, cardslot_attrs);

static const struct cfiattrdata * const cardbus_attrs[] = { &cardbuscf_iattrdata, NULL };
CFDRIVER_DECL(cardbus, DV_DULL, cardbus_attrs);

static const struct cfiattrdata * const pcmcia_attrs[] = { &pcmciacf_iattrdata, NULL };
CFDRIVER_DECL(pcmcia, DV_DULL, pcmcia_attrs);

static const struct cfiattrdata * const pcmcom_attrs[] = { &pcmcomcf_iattrdata, NULL };
CFDRIVER_DECL(pcmcom, DV_DULL, pcmcom_attrs);

CFDRIVER_DECL(cnw, DV_IFNET, NULL);

static const struct cfiattrdata * const mhzc_attrs[] = { &mhzccf_iattrdata, NULL };
CFDRIVER_DECL(mhzc, DV_DULL, mhzc_attrs);

CFDRIVER_DECL(ray, DV_IFNET, NULL);

static const struct cfiattrdata * const xirc_attrs[] = { &xirccf_iattrdata, NULL };
CFDRIVER_DECL(xirc, DV_DULL, xirc_attrs);

static const struct cfiattrdata * const xi_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(xi, DV_IFNET, xi_attrs);

static const struct cfiattrdata * const bt3c_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(bt3c, DV_DULL, bt3c_attrs);

static const struct cfiattrdata * const btbc_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(btbc, DV_DULL, btbc_attrs);

static const struct cfiattrdata * const usb_attrs[] = { &usbroothubifcf_iattrdata, NULL };
CFDRIVER_DECL(usb, DV_DULL, usb_attrs);

static const struct cfiattrdata * const uhub_attrs[] = { &usbififcf_iattrdata, &usbdevifcf_iattrdata, NULL };
CFDRIVER_DECL(uhub, DV_DULL, uhub_attrs);

static const struct cfiattrdata * const uaudio_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(uaudio, DV_DULL, uaudio_attrs);

static const struct cfiattrdata * const umidi_attrs[] = { &midibuscf_iattrdata, NULL };
CFDRIVER_DECL(umidi, DV_DULL, umidi_attrs);

CFDRIVER_DECL(ucom, DV_DULL, NULL);

CFDRIVER_DECL(ugen, DV_DULL, NULL);

static const struct cfiattrdata * const uhidev_attrs[] = { &uhidbuscf_iattrdata, NULL };
CFDRIVER_DECL(uhidev, DV_DULL, uhidev_attrs);

CFDRIVER_DECL(uhid, DV_DULL, NULL);

static const struct cfiattrdata * const ukbd_attrs[] = { &wskbddevcf_iattrdata, NULL };
CFDRIVER_DECL(ukbd, DV_DULL, ukbd_attrs);

static const struct cfiattrdata * const ums_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(ums, DV_DULL, ums_attrs);

static const struct cfiattrdata * const uts_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(uts, DV_DULL, uts_attrs);

static const struct cfiattrdata * const uep_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(uep, DV_DULL, uep_attrs);

CFDRIVER_DECL(ucycom, DV_DULL, NULL);

CFDRIVER_DECL(ulpt, DV_DULL, NULL);

static const struct cfiattrdata * const umass_attrs[] = { &ata_hlcf_iattrdata, &atapicf_iattrdata, &scsicf_iattrdata, NULL };
CFDRIVER_DECL(umass, DV_DULL, umass_attrs);

static const struct cfiattrdata * const uirda_attrs[] = { &irbuscf_iattrdata, NULL };
CFDRIVER_DECL(uirda, DV_DULL, uirda_attrs);

static const struct cfiattrdata * const stuirda_attrs[] = { &irbuscf_iattrdata, NULL };
CFDRIVER_DECL(stuirda, DV_DULL, stuirda_attrs);

static const struct cfiattrdata * const ustir_attrs[] = { &irbuscf_iattrdata, NULL };
CFDRIVER_DECL(ustir, DV_DULL, ustir_attrs);

static const struct cfiattrdata * const irmce_attrs[] = { &irbuscf_iattrdata, NULL };
CFDRIVER_DECL(irmce, DV_DULL, irmce_attrs);

static const struct cfiattrdata * const ubt_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(ubt, DV_DULL, ubt_attrs);

CFDRIVER_DECL(aubtfwl, DV_DULL, NULL);

static const struct cfiattrdata * const pseye_attrs[] = { &videobuscf_iattrdata, NULL };
CFDRIVER_DECL(pseye, DV_DULL, pseye_attrs);

static const struct cfiattrdata * const uvideo_attrs[] = { &videobuscf_iattrdata, NULL };
CFDRIVER_DECL(uvideo, DV_DULL, uvideo_attrs);

static const struct cfiattrdata * const auvitek_attrs[] = { &usbififcf_iattrdata, &i2cbuscf_iattrdata, &dtvbuscf_iattrdata, &videobuscf_iattrdata, NULL };
CFDRIVER_DECL(auvitek, DV_DULL, auvitek_attrs);

static const struct cfiattrdata * const emdtv_attrs[] = { &irbuscf_iattrdata, &dtvbuscf_iattrdata, NULL };
CFDRIVER_DECL(emdtv, DV_DULL, emdtv_attrs);

CFDRIVER_DECL(urio, DV_DULL, NULL);

CFDRIVER_DECL(uipad, DV_DULL, NULL);

CFDRIVER_DECL(uberry, DV_DULL, NULL);

static const struct cfiattrdata * const uvisor_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uvisor, DV_DULL, uvisor_attrs);

static const struct cfiattrdata * const ugensa_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(ugensa, DV_DULL, ugensa_attrs);

static const struct cfiattrdata * const u3g_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(u3g, DV_DULL, u3g_attrs);

CFDRIVER_DECL(u3ginit, DV_DULL, NULL);

CFDRIVER_DECL(uyap, DV_DULL, NULL);

static const struct cfiattrdata * const udsbr_attrs[] = { &radiodevcf_iattrdata, NULL };
CFDRIVER_DECL(udsbr, DV_DULL, udsbr_attrs);

static const struct cfiattrdata * const aue_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(aue, DV_IFNET, aue_attrs);

CFDRIVER_DECL(cdce, DV_IFNET, NULL);

CFDRIVER_DECL(cue, DV_IFNET, NULL);

CFDRIVER_DECL(kue, DV_IFNET, NULL);

CFDRIVER_DECL(upl, DV_IFNET, NULL);

static const struct cfiattrdata * const url_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(url, DV_IFNET, url_attrs);

static const struct cfiattrdata * const axe_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(axe, DV_IFNET, axe_attrs);

static const struct cfiattrdata * const udav_attrs[] = { &miicf_iattrdata, NULL };
CFDRIVER_DECL(udav, DV_IFNET, udav_attrs);

CFDRIVER_DECL(otus, DV_IFNET, NULL);

static const struct cfiattrdata * const umodem_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(umodem, DV_DULL, umodem_attrs);

static const struct cfiattrdata * const uftdi_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uftdi, DV_DULL, uftdi_attrs);

static const struct cfiattrdata * const uplcom_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uplcom, DV_DULL, uplcom_attrs);

static const struct cfiattrdata * const umct_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(umct, DV_DULL, umct_attrs);

static const struct cfiattrdata * const uvscom_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uvscom, DV_DULL, uvscom_attrs);

static const struct cfiattrdata * const ubsa_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(ubsa, DV_DULL, ubsa_attrs);

static const struct cfiattrdata * const uipaq_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uipaq, DV_DULL, uipaq_attrs);

static const struct cfiattrdata * const ukyopon_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(ukyopon, DV_DULL, ukyopon_attrs);

static const struct cfiattrdata * const uslsa_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uslsa, DV_DULL, uslsa_attrs);

static const struct cfiattrdata * const uchcom_attrs[] = { &ucombuscf_iattrdata, NULL };
CFDRIVER_DECL(uchcom, DV_DULL, uchcom_attrs);

CFDRIVER_DECL(uscanner, DV_DULL, NULL);

static const struct cfiattrdata * const usscanner_attrs[] = { &scsicf_iattrdata, NULL };
CFDRIVER_DECL(usscanner, DV_DULL, usscanner_attrs);

CFDRIVER_DECL(atu, DV_IFNET, NULL);

CFDRIVER_DECL(rum, DV_IFNET, NULL);

CFDRIVER_DECL(utoppy, DV_DULL, NULL);

CFDRIVER_DECL(zyd, DV_IFNET, NULL);

static const struct cfiattrdata * const udl_attrs[] = { &wsemuldisplaydevcf_iattrdata, NULL };
CFDRIVER_DECL(udl, DV_DULL, udl_attrs);

CFDRIVER_DECL(uhso, DV_IFNET, NULL);

CFDRIVER_DECL(urndis, DV_IFNET, NULL);

CFDRIVER_DECL(urtwn, DV_IFNET, NULL);

CFDRIVER_DECL(urtw, DV_IFNET, NULL);

static const struct cfiattrdata * const bthub_attrs[] = { &bthubcf_iattrdata, NULL };
CFDRIVER_DECL(bthub, DV_DULL, bthub_attrs);

static const struct cfiattrdata * const bthidev_attrs[] = { &bthidbuscf_iattrdata, NULL };
CFDRIVER_DECL(bthidev, DV_DULL, bthidev_attrs);

static const struct cfiattrdata * const btkbd_attrs[] = { &wskbddevcf_iattrdata, NULL };
CFDRIVER_DECL(btkbd, DV_DULL, btkbd_attrs);

static const struct cfiattrdata * const btms_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(btms, DV_DULL, btms_attrs);

static const struct cfiattrdata * const btmagic_attrs[] = { &wsmousedevcf_iattrdata, NULL };
CFDRIVER_DECL(btmagic, DV_DULL, btmagic_attrs);

static const struct cfiattrdata * const btsco_attrs[] = { &audiobuscf_iattrdata, NULL };
CFDRIVER_DECL(btsco, DV_DULL, btsco_attrs);

static const struct cfiattrdata * const btuart_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(btuart, DV_DULL, btuart_attrs);

static const struct cfiattrdata * const bcsp_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(bcsp, DV_DULL, bcsp_attrs);

static const struct cfiattrdata * const sdmmc_attrs[] = { &sdmmccf_iattrdata, NULL };
CFDRIVER_DECL(sdmmc, DV_DULL, sdmmc_attrs);

static const struct cfiattrdata * const sbt_attrs[] = { &btbuscf_iattrdata, NULL };
CFDRIVER_DECL(sbt, DV_DULL, sbt_attrs);

static const struct cfiattrdata * const ieee1394if_attrs[] = { &ieee1394ifcf_iattrdata, NULL };
CFDRIVER_DECL(ieee1394if, DV_DULL, ieee1394if_attrs);

CFDRIVER_DECL(fwip, DV_IFNET, NULL);

static const struct cfiattrdata * const sbp_attrs[] = { &sbpcf_iattrdata, &scsicf_iattrdata, NULL };
CFDRIVER_DECL(sbp, DV_DULL, sbp_attrs);

static const struct cfiattrdata * const acpi_attrs[] = { &acpiwdrtbuscf_iattrdata, &acpihpetbuscf_iattrdata, &acpiecdtbuscf_iattrdata, &acpinodebuscf_iattrdata, &acpiapmbuscf_iattrdata, NULL };
CFDRIVER_DECL(acpi, DV_DULL, acpi_attrs);

CFDRIVER_DECL(acpiec, DV_DULL, NULL);

CFDRIVER_DECL(acpiecdt, DV_DULL, NULL);

CFDRIVER_DECL(acpilid, DV_DULL, NULL);

CFDRIVER_DECL(acpibut, DV_DULL, NULL);

CFDRIVER_DECL(acpiacad, DV_DULL, NULL);

CFDRIVER_DECL(acpibat, DV_DULL, NULL);

static const struct cfiattrdata * const acpivga_attrs[] = { &acpivgacf_iattrdata, NULL };
CFDRIVER_DECL(acpivga, DV_DULL, acpivga_attrs);

CFDRIVER_DECL(acpiout, DV_DULL, NULL);

CFDRIVER_DECL(acpifan, DV_DULL, NULL);

CFDRIVER_DECL(acpitz, DV_DULL, NULL);

CFDRIVER_DECL(acpiwdrt, DV_DULL, NULL);

CFDRIVER_DECL(asus, DV_DULL, NULL);

CFDRIVER_DECL(sony, DV_DISPLAYDEV, NULL);

CFDRIVER_DECL(thinkpad, DV_DULL, NULL);

CFDRIVER_DECL(acpidalb, DV_DULL, NULL);

CFDRIVER_DECL(aibs, DV_DULL, NULL);

CFDRIVER_DECL(fujbp, DV_DULL, NULL);

CFDRIVER_DECL(fujhk, DV_DULL, NULL);

static const struct cfiattrdata * const acpiwmi_attrs[] = { &acpiwmibuscf_iattrdata, NULL };
CFDRIVER_DECL(acpiwmi, DV_DULL, acpiwmi_attrs);

CFDRIVER_DECL(wmidell, DV_DULL, NULL);

CFDRIVER_DECL(wmieeepc, DV_DULL, NULL);

CFDRIVER_DECL(wmihp, DV_DULL, NULL);

CFDRIVER_DECL(wmimsi, DV_DULL, NULL);


struct cfdriver * const cfdriver_list_initial[] = {
	&audio_cd,
	&midi_cd,
	&video_cd,
	&dtv_cd,
	&iic_cd,
	&irframe_cd,
	&cir_cd,
	&lpt_cd,
	&tpm_cd,
	&ld_cd,
	&acphy_cd,
	&amhphy_cd,
	&bmtphy_cd,
	&brgphy_cd,
	&tlphy_cd,
	&nsphy_cd,
	&nsphyter_cd,
	&gentbi_cd,
	&glxtphy_cd,
	&gphyter_cd,
	&qsphy_cd,
	&inphy_cd,
	&iophy_cd,
	&exphy_cd,
	&lxtphy_cd,
	&makphy_cd,
	&icsphy_cd,
	&igphy_cd,
	&ikphy_cd,
	&sqphy_cd,
	&tqphy_cd,
	&dmphy_cd,
	&pnaphy_cd,
	&rgephy_cd,
	&urlphy_cd,
	&ukphy_cd,
	&ciphy_cd,
	&rlphy_cd,
	&atphy_cd,
	&ihphy_cd,
	&etphy_cd,
	&raid_cd,
	&aic_cd,
	&ahc_cd,
	&ahd_cd,
	&dpt_cd,
	&cac_cd,
	&ciss_cd,
	&mlx_cd,
	&icp_cd,
	&icpsp_cd,
	&aac_cd,
	&adv_cd,
	&adw_cd,
	&bha_cd,
	&iha_cd,
	&isp_cd,
	&mfi_cd,
	&mpt_cd,
	&siop_cd,
	&esiop_cd,
	&an_cd,
	&awi_cd,
	&wi_cd,
	&ath_cd,
	&atw_cd,
	&rtw_cd,
	&ral_cd,
	&ep_cd,
	&ex_cd,
	&le_cd,
	&hme_cd,
	&cy_cd,
	&en_cd,
	&esp_cd,
	&spc_cd,
	&ntwoc_cd,
	&fxp_cd,
	&sm_cd,
	&epic_cd,
	&mbe_cd,
	&ne_cd,
	&com_cd,
	&pckbc_cd,
	&attimer_cd,
	&ug_cd,
	&esh_cd,
	&opl_cd,
	&mpu_cd,
	&rtk_cd,
	&re_cd,
	&wdc_cd,
	&atabus_cd,
	&njata_cd,
	&ahcisata_cd,
	&siisata_cd,
	&mvsata_cd,
	&tlp_cd,
	&sf_cd,
	&cs_cd,
	&hpet_cd,
	&drmdev_cd,
	&inteldrm_cd,
	&vga_cd,
	&wsdisplay_cd,
	&wskbd_cd,
	&wsmouse_cd,
	&genfb_cd,
	&uhci_cd,
	&ohci_cd,
	&ehci_cd,
	&slhci_cd,
	&sdhc_cd,
	&wb_cd,
	&mtd_cd,
	&radio_cd,
	&fwohci_cd,
	&spic_cd,
	&bwi_cd,
	&vnd_cd,
	&cgd_cd,
	&md_cd,
	&fss_cd,
	&tap_cd,
	&joy_cd,
	&pad_cd,
	&cpu_cd,
	&acpicpu_cd,
	&coretemp_cd,
	&est_cd,
	&powernow_cd,
	&ioapic_cd,
	&ipmi_cd,
	&scsibus_cd,
	&atapibus_cd,
	&cd_cd,
	&ch_cd,
	&sd_cd,
	&st_cd,
	&ses_cd,
	&ss_cd,
	&uk_cd,
	&wd_cd,
	&ataraid_cd,
	&iop_cd,
	&iopsp_cd,
	&mainbus_cd,
	&pci_cd,
	&twe_cd,
	&twa_cd,
	&amr_cd,
	&arcmsr_cd,
	&mly_cd,
	&pcscp_cd,
	&mpii_cd,
	&fpa_cd,
	&pcn_cd,
	&trm_cd,
	&pciide_cd,
	&acardide_cd,
	&aceride_cd,
	&artsata_cd,
	&cmdide_cd,
	&cypide_cd,
	&hptide_cd,
	&iteide_cd,
	&jmide_cd,
	&optiide_cd,
	&piixide_cd,
	&pdcsata_cd,
	&pdcide_cd,
	&svwsata_cd,
	&satalink_cd,
	&siside_cd,
	&slide_cd,
	&viaide_cd,
	&ixpide_cd,
	&toshide_cd,
	&ppb_cd,
	&cz_cd,
	&jme_cd,
	&tl_cd,
	&lmc_cd,
	&bktr_cd,
	&clcs_cd,
	&clct_cd,
	&fms_cd,
	&eap_cd,
	&auacer_cd,
	&auich_cd,
	&auvia_cd,
	&auixp_cd,
	&neo_cd,
	&esa_cd,
	&eso_cd,
	&esm_cd,
	&sv_cd,
	&cmpci_cd,
	&yds_cd,
	&emuxki_cd,
	&autri_cd,
	&puc_cd,
	&vr_cd,
	&sip_cd,
	&gsip_cd,
	&stge_cd,
	&wm_cd,
	&bge_cd,
	&bnx_cd,
	&ti_cd,
	&ste_cd,
	&cbb_cd,
	&piixpm_cd,
	&amdpm_cd,
	&hifn_cd,
	&ubsec_cd,
	&weasel_cd,
	&txp_cd,
	&skc_cd,
	&sk_cd,
	&bce_cd,
	&dge_cd,
	&ipw_cd,
	&iwi_cd,
	&wpi_cd,
	&iwn_cd,
	&xge_cd,
	&vge_cd,
	&nfe_cd,
	&mskc_cd,
	&msk_cd,
	&nfsmbc_cd,
	&nfsmb_cd,
	&ichsmb_cd,
	&age_cd,
	&alc_cd,
	&ale_cd,
	&lii_cd,
	&hdaudio_cd,
	&hdafg_cd,
	&et_cd,
	&cxdtv_cd,
	&coram_cd,
	&virtio_cd,
	&viomb_cd,
	&vioif_cd,
	&agp_cd,
	&aapic_cd,
	&pchb_cd,
	&pcib_cd,
	&amdtemp_cd,
	&ichlpcib_cd,
	&fwhrng_cd,
	&isa_cd,
	&pcppi_cd,
	&pckbd_cd,
	&pms_cd,
	&sysbeep_cd,
	&fdc_cd,
	&fd_cd,
	&cardslot_cd,
	&cardbus_cd,
	&pcmcia_cd,
	&pcmcom_cd,
	&cnw_cd,
	&mhzc_cd,
	&ray_cd,
	&xirc_cd,
	&xi_cd,
	&bt3c_cd,
	&btbc_cd,
	&usb_cd,
	&uhub_cd,
	&uaudio_cd,
	&umidi_cd,
	&ucom_cd,
	&ugen_cd,
	&uhidev_cd,
	&uhid_cd,
	&ukbd_cd,
	&ums_cd,
	&uts_cd,
	&uep_cd,
	&ucycom_cd,
	&ulpt_cd,
	&umass_cd,
	&uirda_cd,
	&stuirda_cd,
	&ustir_cd,
	&irmce_cd,
	&ubt_cd,
	&aubtfwl_cd,
	&pseye_cd,
	&uvideo_cd,
	&auvitek_cd,
	&emdtv_cd,
	&urio_cd,
	&uipad_cd,
	&uberry_cd,
	&uvisor_cd,
	&ugensa_cd,
	&u3g_cd,
	&u3ginit_cd,
	&uyap_cd,
	&udsbr_cd,
	&aue_cd,
	&cdce_cd,
	&cue_cd,
	&kue_cd,
	&upl_cd,
	&url_cd,
	&axe_cd,
	&udav_cd,
	&otus_cd,
	&umodem_cd,
	&uftdi_cd,
	&uplcom_cd,
	&umct_cd,
	&uvscom_cd,
	&ubsa_cd,
	&uipaq_cd,
	&ukyopon_cd,
	&uslsa_cd,
	&uchcom_cd,
	&uscanner_cd,
	&usscanner_cd,
	&atu_cd,
	&rum_cd,
	&utoppy_cd,
	&zyd_cd,
	&udl_cd,
	&uhso_cd,
	&urndis_cd,
	&urtwn_cd,
	&urtw_cd,
	&bthub_cd,
	&bthidev_cd,
	&btkbd_cd,
	&btms_cd,
	&btmagic_cd,
	&btsco_cd,
	&btuart_cd,
	&bcsp_cd,
	&sdmmc_cd,
	&sbt_cd,
	&ieee1394if_cd,
	&fwip_cd,
	&sbp_cd,
	&acpi_cd,
	&acpiec_cd,
	&acpiecdt_cd,
	&acpilid_cd,
	&acpibut_cd,
	&acpiacad_cd,
	&acpibat_cd,
	&acpivga_cd,
	&acpiout_cd,
	&acpifan_cd,
	&acpitz_cd,
	&acpiwdrt_cd,
	&asus_cd,
	&sony_cd,
	&thinkpad_cd,
	&acpidalb_cd,
	&aibs_cd,
	&fujbp_cd,
	&fujhk_cd,
	&acpiwmi_cd,
	&wmidell_cd,
	&wmieeepc_cd,
	&wmihp_cd,
	&wmimsi_cd,
	NULL
};

extern struct cfattach audio_ca;
extern struct cfattach midi_ca;
extern struct cfattach video_ca;
extern struct cfattach dtv_ca;
extern struct cfattach iic_ca;
extern struct cfattach irframe_ca;
extern struct cfattach cir_ca;
extern struct cfattach acphy_ca;
extern struct cfattach amhphy_ca;
extern struct cfattach bmtphy_ca;
extern struct cfattach brgphy_ca;
extern struct cfattach tlphy_ca;
extern struct cfattach nsphy_ca;
extern struct cfattach nsphyter_ca;
extern struct cfattach gentbi_ca;
extern struct cfattach glxtphy_ca;
extern struct cfattach gphyter_ca;
extern struct cfattach qsphy_ca;
extern struct cfattach inphy_ca;
extern struct cfattach iophy_ca;
extern struct cfattach exphy_ca;
extern struct cfattach lxtphy_ca;
extern struct cfattach makphy_ca;
extern struct cfattach icsphy_ca;
extern struct cfattach igphy_ca;
extern struct cfattach ikphy_ca;
extern struct cfattach sqphy_ca;
extern struct cfattach tqphy_ca;
extern struct cfattach dmphy_ca;
extern struct cfattach pnaphy_ca;
extern struct cfattach rgephy_ca;
extern struct cfattach urlphy_ca;
extern struct cfattach ukphy_ca;
extern struct cfattach ciphy_ca;
extern struct cfattach rlphy_ca;
extern struct cfattach atphy_ca;
extern struct cfattach ihphy_ca;
extern struct cfattach etphy_ca;
extern struct cfattach ld_cac_ca;
extern struct cfattach ld_mlx_ca;
extern struct cfattach ld_icp_ca;
extern struct cfattach icpsp_ca;
extern struct cfattach ld_aac_ca;
extern struct cfattach atabus_ca;
extern struct cfattach drmdev_ca;
extern struct cfattach inteldrm_ca;
extern struct cfattach wsdisplay_emul_ca;
extern struct cfattach wskbd_ca;
extern struct cfattach wsmouse_ca;
extern struct cfattach radio_ca;
extern struct cfattach cpu_ca;
extern struct cfattach acpicpu_ca;
extern struct cfattach coretemp_ca;
extern struct cfattach est_ca;
extern struct cfattach powernow_ca;
extern struct cfattach ioapic_ca;
extern struct cfattach ipmi_ca;
extern struct cfattach scsibus_ca;
extern struct cfattach atapibus_ca;
extern struct cfattach cd_ca;
extern struct cfattach ch_ca;
extern struct cfattach sd_ca;
extern struct cfattach st_scsibus_ca;
extern struct cfattach st_atapibus_ca;
extern struct cfattach ses_ca;
extern struct cfattach ss_ca;
extern struct cfattach uk_ca;
extern struct cfattach wd_ca;
extern struct cfattach ld_ataraid_ca;
extern struct cfattach ld_iop_ca;
extern struct cfattach iopsp_ca;
extern struct cfattach mainbus_ca;
extern struct cfattach pci_ca;
extern struct cfattach ahc_pci_ca;
extern struct cfattach ahd_pci_ca;
extern struct cfattach iop_pci_ca;
extern struct cfattach twe_ca;
extern struct cfattach ld_twe_ca;
extern struct cfattach twa_ca;
extern struct cfattach ld_twa_ca;
extern struct cfattach amr_ca;
extern struct cfattach ld_amr_ca;
extern struct cfattach arcmsr_ca;
extern struct cfattach cac_pci_ca;
extern struct cfattach mlx_pci_ca;
extern struct cfattach mly_ca;
extern struct cfattach mtd_pci_ca;
extern struct cfattach icp_pci_ca;
extern struct cfattach aac_pci_ca;
extern struct cfattach dpt_pci_ca;
extern struct cfattach adv_pci_ca;
extern struct cfattach adw_pci_ca;
extern struct cfattach pcscp_ca;
extern struct cfattach ciss_pci_ca;
extern struct cfattach bha_pci_ca;
extern struct cfattach isp_pci_ca;
extern struct cfattach mfi_pci_ca;
extern struct cfattach mpt_pci_ca;
extern struct cfattach mpii_ca;
extern struct cfattach en_pci_ca;
extern struct cfattach ep_pci_ca;
extern struct cfattach ex_pci_ca;
extern struct cfattach fpa_ca;
extern struct cfattach le_pci_ca;
extern struct cfattach pcn_ca;
extern struct cfattach siop_pci_ca;
extern struct cfattach esiop_pci_ca;
extern struct cfattach iha_pci_ca;
extern struct cfattach trm_ca;
extern struct cfattach pciide_ca;
extern struct cfattach ahcisata_pci_ca;
extern struct cfattach acardide_ca;
extern struct cfattach aceride_ca;
extern struct cfattach artsata_ca;
extern struct cfattach cmdide_ca;
extern struct cfattach cypide_ca;
extern struct cfattach hptide_ca;
extern struct cfattach iteide_ca;
extern struct cfattach jmide_ca;
extern struct cfattach jmahci_ca;
extern struct cfattach optiide_ca;
extern struct cfattach piixide_ca;
extern struct cfattach pdcsata_ca;
extern struct cfattach pdcide_ca;
extern struct cfattach svwsata_ca;
extern struct cfattach satalink_ca;
extern struct cfattach siside_ca;
extern struct cfattach slide_ca;
extern struct cfattach viaide_ca;
extern struct cfattach ixpide_ca;
extern struct cfattach toshide_ca;
extern struct cfattach ppb_ca;
extern struct cfattach cy_pci_ca;
extern struct cfattach cz_ca;
extern struct cfattach fxp_pci_ca;
extern struct cfattach hme_pci_ca;
extern struct cfattach jme_ca;
extern struct cfattach ne_pci_ca;
extern struct cfattach tl_ca;
extern struct cfattach ntwoc_pci_ca;
extern struct cfattach lmc_ca;
extern struct cfattach esh_pci_ca;
extern struct cfattach vga_pci_ca;
extern struct cfattach bktr_ca;
extern struct cfattach clcs_ca;
extern struct cfattach clct_ca;
extern struct cfattach fms_ca;
extern struct cfattach opl_fms_ca;
extern struct cfattach eap_ca;
extern struct cfattach auacer_ca;
extern struct cfattach auich_ca;
extern struct cfattach auvia_ca;
extern struct cfattach auixp_ca;
extern struct cfattach neo_ca;
extern struct cfattach esa_ca;
extern struct cfattach eso_ca;
extern struct cfattach opl_eso_ca;
extern struct cfattach mpu_eso_ca;
extern struct cfattach esm_ca;
extern struct cfattach sv_ca;
extern struct cfattach opl_sv_ca;
extern struct cfattach cmpci_ca;
extern struct cfattach opl_cmpci_ca;
extern struct cfattach mpu_cmpci_ca;
extern struct cfattach yds_ca;
extern struct cfattach mpu_yds_ca;
extern struct cfattach emuxki_ca;
extern struct cfattach autri_ca;
extern struct cfattach epic_pci_ca;
extern struct cfattach puc_ca;
extern struct cfattach com_puc_ca;
extern struct cfattach lpt_puc_ca;
extern struct cfattach uhci_pci_ca;
extern struct cfattach ohci_pci_ca;
extern struct cfattach ehci_pci_ca;
extern struct cfattach fwohci_pci_ca;
extern struct cfattach vr_ca;
extern struct cfattach sip_ca;
extern struct cfattach gsip_ca;
extern struct cfattach stge_ca;
extern struct cfattach wm_ca;
extern struct cfattach bge_ca;
extern struct cfattach bnx_ca;
extern struct cfattach rtk_pci_ca;
extern struct cfattach tlp_pci_ca;
extern struct cfattach ti_ca;
extern struct cfattach sf_pci_ca;
extern struct cfattach ste_ca;
extern struct cfattach cbb_pci_ca;
extern struct cfattach piixpm_ca;
extern struct cfattach amdpm_ca;
extern struct cfattach hifn_ca;
extern struct cfattach ubsec_ca;
extern struct cfattach an_pci_ca;
extern struct cfattach atw_pci_ca;
extern struct cfattach rtw_pci_ca;
extern struct cfattach ral_pci_ca;
extern struct cfattach wi_pci_ca;
extern struct cfattach weasel_pci_ca;
extern struct cfattach txp_ca;
extern struct cfattach skc_ca;
extern struct cfattach sk_ca;
extern struct cfattach bce_ca;
extern struct cfattach dge_ca;
extern struct cfattach re_pci_ca;
extern struct cfattach ipw_ca;
extern struct cfattach iwi_ca;
extern struct cfattach wpi_ca;
extern struct cfattach iwn_ca;
extern struct cfattach xge_ca;
extern struct cfattach vge_ca;
extern struct cfattach ath_pci_ca;
extern struct cfattach nfe_ca;
extern struct cfattach mskc_ca;
extern struct cfattach msk_ca;
extern struct cfattach sdhc_pci_ca;
extern struct cfattach genfb_pci_ca;
extern struct cfattach nfsmbc_ca;
extern struct cfattach nfsmb_ca;
extern struct cfattach ichsmb_ca;
extern struct cfattach age_ca;
extern struct cfattach alc_ca;
extern struct cfattach ale_ca;
extern struct cfattach lii_ca;
extern struct cfattach siisata_pci_ca;
extern struct cfattach bwi_pci_ca;
extern struct cfattach mvsata_pci_ca;
extern struct cfattach hdafg_ca;
extern struct cfattach hdaudio_pci_ca;
extern struct cfattach et_ca;
extern struct cfattach cxdtv_ca;
extern struct cfattach coram_ca;
extern struct cfattach virtio_ca;
extern struct cfattach ld_virtio_ca;
extern struct cfattach viomb_ca;
extern struct cfattach vioif_ca;
extern struct cfattach agp_ca;
extern struct cfattach aapic_ca;
extern struct cfattach pchb_ca;
extern struct cfattach pcib_ca;
extern struct cfattach amdtemp_ca;
extern struct cfattach ichlpcib_ca;
extern struct cfattach fwhrng_ca;
extern struct cfattach isa_ca;
extern struct cfattach com_isa_ca;
extern struct cfattach lpt_isa_ca;
extern struct cfattach wdc_isa_ca;
extern struct cfattach pckbc_isa_ca;
extern struct cfattach pcppi_ca;
extern struct cfattach midi_pcppi_ca;
extern struct cfattach attimer_isa_ca;
extern struct cfattach tpm_isa_ca;
extern struct cfattach pckbd_ca;
extern struct cfattach pms_ca;
extern struct cfattach sysbeep_ca;
extern struct cfattach fdc_isa_ca;
extern struct cfattach fd_ca;
extern struct cfattach cardslot_ca;
extern struct cfattach cardbus_ca;
extern struct cfattach ex_cardbus_ca;
extern struct cfattach fxp_cardbus_ca;
extern struct cfattach com_cardbus_ca;
extern struct cfattach atw_cardbus_ca;
extern struct cfattach rtw_cardbus_ca;
extern struct cfattach ral_cardbus_ca;
extern struct cfattach tlp_cardbus_ca;
extern struct cfattach ohci_cardbus_ca;
extern struct cfattach uhci_cardbus_ca;
extern struct cfattach ehci_cardbus_ca;
extern struct cfattach fwohci_cardbus_ca;
extern struct cfattach ahc_cardbus_ca;
extern struct cfattach rtk_cardbus_ca;
extern struct cfattach re_cardbus_ca;
extern struct cfattach adv_cardbus_ca;
extern struct cfattach ath_cardbus_ca;
extern struct cfattach njata_cardbus_ca;
extern struct cfattach siisata_cardbus_ca;
extern struct cfattach pcmcia_ca;
extern struct cfattach ep_pcmcia_ca;
extern struct cfattach ne_pcmcia_ca;
extern struct cfattach aic_pcmcia_ca;
extern struct cfattach esp_pcmcia_ca;
extern struct cfattach spc_pcmcia_ca;
extern struct cfattach com_pcmcia_ca;
extern struct cfattach wdc_pcmcia_ca;
extern struct cfattach sm_pcmcia_ca;
extern struct cfattach mbe_pcmcia_ca;
extern struct cfattach pcmcom_ca;
extern struct cfattach com_pcmcom_ca;
extern struct cfattach cnw_ca;
extern struct cfattach mhzc_ca;
extern struct cfattach com_mhzc_ca;
extern struct cfattach sm_mhzc_ca;
extern struct cfattach ray_ca;
extern struct cfattach awi_pcmcia_ca;
extern struct cfattach wi_pcmcia_ca;
extern struct cfattach xirc_ca;
extern struct cfattach com_xirc_ca;
extern struct cfattach xi_xirc_ca;
extern struct cfattach cs_pcmcia_ca;
extern struct cfattach an_pcmcia_ca;
extern struct cfattach bt3c_ca;
extern struct cfattach slhci_pcmcia_ca;
extern struct cfattach btbc_ca;
extern struct cfattach usb_ca;
extern struct cfattach uroothub_ca;
extern struct cfattach uhub_ca;
extern struct cfattach uaudio_ca;
extern struct cfattach umidi_ca;
extern struct cfattach ucom_ca;
extern struct cfattach ugen_ca;
extern struct cfattach uhidev_ca;
extern struct cfattach uhid_ca;
extern struct cfattach ukbd_ca;
extern struct cfattach ums_ca;
extern struct cfattach uts_ca;
extern struct cfattach uep_ca;
extern struct cfattach ucycom_ca;
extern struct cfattach ulpt_ca;
extern struct cfattach umass_ca;
extern struct cfattach uirda_ca;
extern struct cfattach stuirda_ca;
extern struct cfattach ustir_ca;
extern struct cfattach irmce_ca;
extern struct cfattach ubt_ca;
extern struct cfattach aubtfwl_ca;
extern struct cfattach pseye_ca;
extern struct cfattach uvideo_ca;
extern struct cfattach auvitek_ca;
extern struct cfattach emdtv_ca;
extern struct cfattach urio_ca;
extern struct cfattach uipad_ca;
extern struct cfattach uberry_ca;
extern struct cfattach uvisor_ca;
extern struct cfattach ugensa_ca;
extern struct cfattach u3g_ca;
extern struct cfattach u3ginit_ca;
extern struct cfattach uyap_ca;
extern struct cfattach udsbr_ca;
extern struct cfattach aue_ca;
extern struct cfattach cdce_ca;
extern struct cfattach cue_ca;
extern struct cfattach kue_ca;
extern struct cfattach upl_ca;
extern struct cfattach url_ca;
extern struct cfattach axe_ca;
extern struct cfattach udav_ca;
extern struct cfattach otus_ca;
extern struct cfattach umodem_ca;
extern struct cfattach uftdi_ca;
extern struct cfattach uplcom_ca;
extern struct cfattach umct_ca;
extern struct cfattach uvscom_ca;
extern struct cfattach ubsa_ca;
extern struct cfattach uipaq_ca;
extern struct cfattach ukyopon_ca;
extern struct cfattach uslsa_ca;
extern struct cfattach uchcom_ca;
extern struct cfattach uscanner_ca;
extern struct cfattach usscanner_ca;
extern struct cfattach atu_ca;
extern struct cfattach ural_ca;
extern struct cfattach rum_ca;
extern struct cfattach utoppy_ca;
extern struct cfattach zyd_ca;
extern struct cfattach udl_ca;
extern struct cfattach uhso_ca;
extern struct cfattach urndis_ca;
extern struct cfattach urtwn_ca;
extern struct cfattach urtw_ca;
extern struct cfattach bthub_ca;
extern struct cfattach bthidev_ca;
extern struct cfattach btkbd_ca;
extern struct cfattach btms_ca;
extern struct cfattach btmagic_ca;
extern struct cfattach btsco_ca;
extern struct cfattach sdmmc_ca;
extern struct cfattach ld_sdmmc_ca;
extern struct cfattach sbt_ca;
extern struct cfattach ieee1394if_ca;
extern struct cfattach fwip_ca;
extern struct cfattach sbp_ca;
extern struct cfattach acpi_ca;
extern struct cfattach acpiec_ca;
extern struct cfattach acpiecdt_ca;
extern struct cfattach acpilid_ca;
extern struct cfattach acpibut_ca;
extern struct cfattach acpiacad_ca;
extern struct cfattach acpibat_ca;
extern struct cfattach acpivga_ca;
extern struct cfattach acpiout_ca;
extern struct cfattach acpifan_ca;
extern struct cfattach acpitz_ca;
extern struct cfattach acpiwdrt_ca;
extern struct cfattach pckbc_acpi_ca;
extern struct cfattach mpu_acpi_ca;
extern struct cfattach joy_acpi_ca;
extern struct cfattach pcppi_acpi_ca;
extern struct cfattach attimer_acpi_ca;
extern struct cfattach hpet_acpi_dev_ca;
extern struct cfattach hpet_acpi_tab_ca;
extern struct cfattach asus_ca;
extern struct cfattach ug_acpi_ca;
extern struct cfattach sony_acpi_ca;
extern struct cfattach spic_acpi_ca;
extern struct cfattach thinkpad_ca;
extern struct cfattach acpidalb_ca;
extern struct cfattach wb_acpi_ca;
extern struct cfattach aibs_ca;
extern struct cfattach fujbp_ca;
extern struct cfattach fujhk_ca;
extern struct cfattach acpiwmi_ca;
extern struct cfattach wmidell_ca;
extern struct cfattach wmieeepc_ca;
extern struct cfattach wmihp_ca;
extern struct cfattach wmimsi_ca;

/* locators */
static int loc[886] = {
	0x3f8, 0, -1, 0, 4, -1, -1, 0x1f0,
	0, -1, 0, 14, -1, -1, -1, 0,
	0xfed40000, 0, 7, -1, -1, -1, 0, -1,
	0, -1, -1, -1, 0x3f0, 0, -1, 0,
	6, 2, -1, -1, 0, -1, 0, -1,
	-1, -1, -1, 0, -1, 0, -1, -1,
	-1, 0x2f8, 0, -1, 0, 3, -1, -1,
	0x278, 0, -1, 0, -1, -1, -1, 0x170,
	0, -1, 0, 15, -1, -1, 0x378, 0,
	-1, 0, 7, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	1, -1, 1, -1, 1, -1, 1, -1,
	1, -1, 1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, 0, 0, 0, 0, 0, 0, 0,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1,
};

static const struct cfparent pspec0 = {
	"cpubus", "mainbus", DVUNIT_ANY
};
static const struct cfparent pspec1 = {
	"ioapicbus", "mainbus", DVUNIT_ANY
};
static const struct cfparent pspec2 = {
	"cpufeaturebus", "cpu", DVUNIT_ANY
};
static const struct cfparent pspec3 = {
	"cpufeaturebus", "cpu", 0
};
static const struct cfparent pspec4 = {
	"ipmibus", "mainbus", DVUNIT_ANY
};
static const struct cfparent pspec5 = {
	"acpibus", "mainbus", 0
};
static const struct cfparent pspec6 = {
	"acpinodebus", "acpi", DVUNIT_ANY
};
static const struct cfparent pspec7 = {
	"acpiecdtbus", "acpi", DVUNIT_ANY
};
static const struct cfparent pspec8 = {
	"acpivga", "acpivga", DVUNIT_ANY
};
static const struct cfparent pspec9 = {
	"acpiwdrtbus", "acpi", DVUNIT_ANY
};
static const struct cfparent pspec10 = {
	"acpihpetbus", NULL, 0
};
static const struct cfparent pspec11 = {
	"acpinodebus", NULL, 0
};
static const struct cfparent pspec12 = {
	"wsmousedev", "spic", DVUNIT_ANY
};
static const struct cfparent pspec13 = {
	"sdmmcbus", "wb", DVUNIT_ANY
};
static const struct cfparent pspec14 = {
	"acpiwmibus", NULL, 0
};
static const struct cfparent pspec15 = {
	"pcibus", "mainbus", DVUNIT_ANY
};
static const struct cfparent pspec16 = {
	"pcibus", "pchb", DVUNIT_ANY
};
static const struct cfparent pspec17 = {
	"pcibus", "ppb", DVUNIT_ANY
};
static const struct cfparent pspec18 = {
	"pci", "pci", DVUNIT_ANY
};
static const struct cfparent pspec19 = {
	"fwhichbus", "ichlpcib", DVUNIT_ANY
};
static const struct cfparent pspec20 = {
	"agpbus", "pchb", DVUNIT_ANY
};
static const struct cfparent pspec21 = {
	"isabus", "mainbus", DVUNIT_ANY
};
static const struct cfparent pspec22 = {
	"isabus", "pcib", DVUNIT_ANY
};
static const struct cfparent pspec23 = {
	"isabus", "ichlpcib", DVUNIT_ANY
};
static const struct cfparent pspec24 = {
	"pcmciaslot", "cbb", DVUNIT_ANY
};
static const struct cfparent pspec25 = {
	"cbbus", "cardslot", DVUNIT_ANY
};
static const struct cfparent pspec26 = {
	"pcmciabus", "cardslot", DVUNIT_ANY
};
static const struct cfparent pspec27 = {
	"isa", "isa", DVUNIT_ANY
};
static const struct cfparent pspec28 = {
	"pckbport", "pckbc", DVUNIT_ANY
};
static const struct cfparent pspec29 = {
	"wsemuldisplaydev", "vga", DVUNIT_ANY
};
static const struct cfparent pspec30 = {
	"wsemuldisplaydev", NULL, 0
};
static const struct cfparent pspec31 = {
	"wskbddev", "pckbd", DVUNIT_ANY
};
static const struct cfparent pspec32 = {
	"wsmousedev", "pms", DVUNIT_ANY
};
static const struct cfparent pspec33 = {
	"pcppi", "pcppi", DVUNIT_ANY
};
static const struct cfparent pspec34 = {
	"drm", NULL, 0
};
static const struct cfparent pspec35 = {
	"drmbase", "inteldrm", DVUNIT_ANY
};
static const struct cfparent pspec36 = {
	"puc", "puc", DVUNIT_ANY
};
static const struct cfparent pspec37 = {
	"pcmcia", "pcmcia", DVUNIT_ANY
};
static const struct cfparent pspec38 = {
	"pcmcom", "pcmcom", DVUNIT_ANY
};
static const struct cfparent pspec39 = {
	"cardbus", "cardbus", DVUNIT_ANY
};
static const struct cfparent pspec40 = {
	"amdtempbus", "pchb", DVUNIT_ANY
};
static const struct cfparent pspec41 = {
	"nfsmbc", "nfsmbc", DVUNIT_ANY
};
static const struct cfparent pspec42 = {
	"i2cbus", "nfsmb", DVUNIT_ANY
};
static const struct cfparent pspec43 = {
	"i2cbus", "piixpm", DVUNIT_ANY
};
static const struct cfparent pspec44 = {
	"i2cbus", "ichsmb", DVUNIT_ANY
};
static const struct cfparent pspec45 = {
	"iop", "iop", DVUNIT_ANY
};
static const struct cfparent pspec46 = {
	"scsi", NULL, 0
};
static const struct cfparent pspec47 = {
	"scsibus", "scsibus", DVUNIT_ANY
};
static const struct cfparent pspec48 = {
	"aac", "aac", DVUNIT_ANY
};
static const struct cfparent pspec49 = {
	"amr", "amr", DVUNIT_ANY
};
static const struct cfparent pspec50 = {
	"cac", "cac", DVUNIT_ANY
};
static const struct cfparent pspec51 = {
	"icp", "icp", DVUNIT_ANY
};
static const struct cfparent pspec52 = {
	"twe", "twe", DVUNIT_ANY
};
static const struct cfparent pspec53 = {
	"twa", "twa", DVUNIT_ANY
};
static const struct cfparent pspec54 = {
	"mlx", "mlx", DVUNIT_ANY
};
static const struct cfparent pspec55 = {
	"jmide_hl", "jmide", DVUNIT_ANY
};
static const struct cfparent pspec56 = {
	"ata", NULL, 0
};
static const struct cfparent pspec57 = {
	"ata_hl", "atabus", DVUNIT_ANY
};
static const struct cfparent pspec58 = {
	"atapi", NULL, 0
};
static const struct cfparent pspec59 = {
	"ataraid", "ataraid", DVUNIT_ANY
};
static const struct cfparent pspec60 = {
	"atapibus", "atapibus", DVUNIT_ANY
};
static const struct cfparent pspec61 = {
	"fdc", "fdc", DVUNIT_ANY
};
static const struct cfparent pspec62 = {
	"mskc", "mskc", DVUNIT_ANY
};
static const struct cfparent pspec63 = {
	"skc", "skc", DVUNIT_ANY
};
static const struct cfparent pspec64 = {
	"xirc", "xirc", DVUNIT_ANY
};
static const struct cfparent pspec65 = {
	"mhzc", "mhzc", DVUNIT_ANY
};
static const struct cfparent pspec66 = {
	"mii", NULL, 0
};
static const struct cfparent pspec67 = {
	"usbus", "ehci", DVUNIT_ANY
};
static const struct cfparent pspec68 = {
	"usbus", "ohci", DVUNIT_ANY
};
static const struct cfparent pspec69 = {
	"usbus", "uhci", DVUNIT_ANY
};
static const struct cfparent pspec70 = {
	"usbus", "slhci", DVUNIT_ANY
};
static const struct cfparent pspec71 = {
	"usbroothubif", "usb", DVUNIT_ANY
};
static const struct cfparent pspec72 = {
	"usbdevif", "uhub", DVUNIT_ANY
};
static const struct cfparent pspec73 = {
	"usbifif", "uhub", DVUNIT_ANY
};
static const struct cfparent pspec74 = {
	"uhidbus", "uhidev", DVUNIT_ANY
};
static const struct cfparent pspec75 = {
	"wsmousedev", "ums", DVUNIT_ANY
};
static const struct cfparent pspec76 = {
	"wsmousedev", "uts", DVUNIT_ANY
};
static const struct cfparent pspec77 = {
	"wsmousedev", "uep", DVUNIT_ANY
};
static const struct cfparent pspec78 = {
	"wskbddev", "ukbd", DVUNIT_ANY
};
static const struct cfparent pspec79 = {
	"wsemuldisplaydev", "udl", DVUNIT_ANY
};
static const struct cfparent pspec80 = {
	"ucombus", "umodem", DVUNIT_ANY
};
static const struct cfparent pspec81 = {
	"ata_hl", "umass", DVUNIT_ANY
};
static const struct cfparent pspec82 = {
	"usbifif", NULL, 0
};
static const struct cfparent pspec83 = {
	"irbus", "uirda", DVUNIT_ANY
};
static const struct cfparent pspec84 = {
	"irbus", "stuirda", DVUNIT_ANY
};
static const struct cfparent pspec85 = {
	"irbus", "ustir", DVUNIT_ANY
};
static const struct cfparent pspec86 = {
	"irbus", "irmce", DVUNIT_ANY
};
static const struct cfparent pspec87 = {
	"ucombus", "ubsa", DVUNIT_ANY
};
static const struct cfparent pspec88 = {
	"ucombus", "uchcom", DVUNIT_ANY
};
static const struct cfparent pspec89 = {
	"ucombus", "uftdi", DVUNIT_ANY
};
static const struct cfparent pspec90 = {
	"ucombus", "uipaq", DVUNIT_ANY
};
static const struct cfparent pspec91 = {
	"ucombus", "umct", DVUNIT_ANY
};
static const struct cfparent pspec92 = {
	"ucombus", "uplcom", DVUNIT_ANY
};
static const struct cfparent pspec93 = {
	"ucombus", "uslsa", DVUNIT_ANY
};
static const struct cfparent pspec94 = {
	"ucombus", "uvscom", DVUNIT_ANY
};
static const struct cfparent pspec95 = {
	"ucombus", "uvisor", DVUNIT_ANY
};
static const struct cfparent pspec96 = {
	"ucombus", "ukyopon", DVUNIT_ANY
};
static const struct cfparent pspec97 = {
	"radiodev", "udsbr", DVUNIT_ANY
};
static const struct cfparent pspec98 = {
	"ucombus", "u3g", DVUNIT_ANY
};
static const struct cfparent pspec99 = {
	"ucombus", "ugensa", DVUNIT_ANY
};
static const struct cfparent pspec100 = {
	"fwbus", "fwohci", DVUNIT_ANY
};
static const struct cfparent pspec101 = {
	"ieee1394if", "ieee1394if", DVUNIT_ANY
};
static const struct cfparent pspec102 = {
	"cmpci", "cmpci", DVUNIT_ANY
};
static const struct cfparent pspec103 = {
	"eso", "eso", DVUNIT_ANY
};
static const struct cfparent pspec104 = {
	"fms", "fms", DVUNIT_ANY
};
static const struct cfparent pspec105 = {
	"sv", "sv", DVUNIT_ANY
};
static const struct cfparent pspec106 = {
	"hdaudiobus", NULL, 0
};
static const struct cfparent pspec107 = {
	"audiobus", NULL, 0
};
static const struct cfparent pspec108 = {
	"yds", "yds", DVUNIT_ANY
};
static const struct cfparent pspec109 = {
	"midibus", NULL, 0
};
static const struct cfparent pspec110 = {
	"irbus", "emdtv", DVUNIT_ANY
};
static const struct cfparent pspec111 = {
	"videobus", NULL, 0
};
static const struct cfparent pspec112 = {
	"dtvbus", NULL, 0
};
static const struct cfparent pspec113 = {
	"radiodev", "bktr", DVUNIT_ANY
};
static const struct cfparent pspec114 = {
	"sdmmc", "sdmmc", DVUNIT_ANY
};
static const struct cfparent pspec115 = {
	"btbus", "bcsp", DVUNIT_ANY
};
static const struct cfparent pspec116 = {
	"btbus", "bt3c", DVUNIT_ANY
};
static const struct cfparent pspec117 = {
	"btbus", "btbc", DVUNIT_ANY
};
static const struct cfparent pspec118 = {
	"btbus", "btuart", DVUNIT_ANY
};
static const struct cfparent pspec119 = {
	"btbus", "sbt", DVUNIT_ANY
};
static const struct cfparent pspec120 = {
	"btbus", "ubt", DVUNIT_ANY
};
static const struct cfparent pspec121 = {
	"bthub", "bthub", DVUNIT_ANY
};
static const struct cfparent pspec122 = {
	"bthidbus", "bthidev", DVUNIT_ANY
};
static const struct cfparent pspec123 = {
	"wsmousedev", "btms", DVUNIT_ANY
};
static const struct cfparent pspec124 = {
	"wskbddev", "btkbd", DVUNIT_ANY
};
static const struct cfparent pspec125 = {
	"wsmousedev", "btmagic", DVUNIT_ANY
};
static const struct cfparent pspec126 = {
	"sdmmcbus", "sdhc", DVUNIT_ANY
};
static const struct cfparent pspec127 = {
	"virtio", "virtio", DVUNIT_ANY
};

#define NORM FSTATE_NOTFOUND
#define STAR FSTATE_STAR

struct cfdata cfdata[] = {
    /* driver           attachment    unit state loc   flags pspec */
/*  0: audio* at audiobus? */
    { "audio",		"audio",	 0, STAR,     loc,      0, &pspec107 },
/*  1: midi* at midibus? */
    { "midi",		"midi",		 0, STAR,     loc,      0, &pspec109 },
/*  2: midi* at pcppi? */
    { "midi",		"midi_pcppi",	 0, STAR,     loc,      0, &pspec33 },
/*  3: video* at videobus? */
    { "video",		"video",	 0, STAR,     loc,      0, &pspec111 },
/*  4: dtv* at dtvbus? */
    { "dtv",		"dtv",		 0, STAR,     loc,      0, &pspec112 },
/*  5: iic* at nfsmb? */
    { "iic",		"iic",		 0, STAR,     loc,      0, &pspec42 },
/*  6: iic* at piixpm? */
    { "iic",		"iic",		 0, STAR,     loc,      0, &pspec43 },
/*  7: iic* at ichsmb? */
    { "iic",		"iic",		 0, STAR,     loc,      0, &pspec44 },
/*  8: irframe* at uirda? */
    { "irframe",		"irframe",	 0, STAR,     loc,      0, &pspec83 },
/*  9: irframe* at stuirda? */
    { "irframe",		"irframe",	 0, STAR,     loc,      0, &pspec84 },
/* 10: irframe* at ustir? */
    { "irframe",		"irframe",	 0, STAR,     loc,      0, &pspec85 },
/* 11: cir* at irmce? */
    { "cir",		"cir",		 0, STAR,     loc,      0, &pspec86 },
/* 12: cir* at emdtv? */
    { "cir",		"cir",		 0, STAR,     loc,      0, &pspec110 },
/* 13: lpt0 at isa? port 0x378 size 0 iomem -1 iosiz 0 irq 7 drq -1 drq2 -1 */
    { "lpt",		"lpt_isa",	 0, NORM, loc+ 70,      0, &pspec27 },
/* 14: lpt1 at isa? port 0x278 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    { "lpt",		"lpt_isa",	 1, NORM, loc+ 56,      0, &pspec27 },
/* 15: lpt* at puc? port -1 */
    { "lpt",		"lpt_puc",	 2, STAR, loc+774,      0, &pspec36 },
/* 16: tpm* at isa? port -1 size 0 iomem 0xfed40000 iosiz 0 irq 7 drq -1 drq2 -1 */
    { "tpm",		"tpm_isa",	 0, STAR, loc+ 14,      0, &pspec27 },
/* 17: ld* at iop? tid -1 */
    { "ld",		"ld_iop",	 0, STAR, loc+763,      0, &pspec45 },
/* 18: ld* at aac? unit -1 */
    { "ld",		"ld_aac",	 0, STAR, loc+762,      0, &pspec48 },
/* 19: ld* at amr? unit -1 */
    { "ld",		"ld_amr",	 0, STAR, loc+761,      0, &pspec49 },
/* 20: ld* at cac? unit -1 */
    { "ld",		"ld_cac",	 0, STAR, loc+760,      0, &pspec50 },
/* 21: ld* at icp? unit -1 */
    { "ld",		"ld_icp",	 0, STAR, loc+885,      0, &pspec51 },
/* 22: ld* at twe? unit -1 */
    { "ld",		"ld_twe",	 0, STAR, loc+881,      0, &pspec52 },
/* 23: ld* at twa? unit -1 */
    { "ld",		"ld_twa",	 0, STAR, loc+880,      0, &pspec53 },
/* 24: ld* at mlx? unit -1 */
    { "ld",		"ld_mlx",	 0, STAR, loc+878,      0, &pspec54 },
/* 25: ld* at ataraid? vendtype -1 unit -1 */
    { "ld",		"ld_ataraid",	 0, STAR, loc+433,      0, &pspec59 },
/* 26: ld* at sdmmc? */
    { "ld",		"ld_sdmmc",	 0, STAR,     loc,      0, &pspec114 },
/* 27: ld* at virtio? */
    { "ld",		"ld_virtio",	 0, STAR,     loc,      0, &pspec127 },
/* 28: acphy* at mii? phy -1 */
    { "acphy",		"acphy",	 0, STAR, loc+865,      0, &pspec66 },
/* 29: amhphy* at mii? phy -1 */
    { "amhphy",		"amhphy",	 0, STAR, loc+864,      0, &pspec66 },
/* 30: bmtphy* at mii? phy -1 */
    { "bmtphy",		"bmtphy",	 0, STAR, loc+826,      0, &pspec66 },
/* 31: brgphy* at mii? phy -1 */
    { "brgphy",		"brgphy",	 0, STAR, loc+824,      0, &pspec66 },
/* 32: tlphy* at mii? phy -1 */
    { "tlphy",		"tlphy",	 0, STAR, loc+817,      0, &pspec66 },
/* 33: nsphy* at mii? phy -1 */
    { "nsphy",		"nsphy",	 0, STAR, loc+809,      0, &pspec66 },
/* 34: nsphyter* at mii? phy -1 */
    { "nsphyter",	"nsphyter",	 0, STAR, loc+788,      0, &pspec66 },
/* 35: gentbi* at mii? phy -1 */
    { "gentbi",		"gentbi",	 0, STAR, loc+787,      0, &pspec66 },
/* 36: glxtphy* at mii? phy -1 */
    { "glxtphy",		"glxtphy",	 0, STAR, loc+786,      0, &pspec66 },
/* 37: gphyter* at mii? phy -1 */
    { "gphyter",		"gphyter",	 0, STAR, loc+785,      0, &pspec66 },
/* 38: qsphy* at mii? phy -1 */
    { "qsphy",		"qsphy",	 0, STAR, loc+784,      0, &pspec66 },
/* 39: inphy* at mii? phy -1 */
    { "inphy",		"inphy",	 0, STAR, loc+783,      0, &pspec66 },
/* 40: iophy* at mii? phy -1 */
    { "iophy",		"iophy",	 0, STAR, loc+782,      0, &pspec66 },
/* 41: exphy* at mii? phy -1 */
    { "exphy",		"exphy",	 0, STAR, loc+780,      0, &pspec66 },
/* 42: lxtphy* at mii? phy -1 */
    { "lxtphy",		"lxtphy",	 0, STAR, loc+876,      0, &pspec66 },
/* 43: makphy* at mii? phy -1 */
    { "makphy",		"makphy",	 0, STAR, loc+875,      0, &pspec66 },
/* 44: icsphy* at mii? phy -1 */
    { "icsphy",		"icsphy",	 0, STAR, loc+775,      0, &pspec66 },
/* 45: igphy* at mii? phy -1 */
    { "igphy",		"igphy",	 0, STAR, loc+862,      0, &pspec66 },
/* 46: ikphy* at mii? phy -1 */
    { "ikphy",		"ikphy",	 0, STAR, loc+861,      0, &pspec66 },
/* 47: sqphy* at mii? phy -1 */
    { "sqphy",		"sqphy",	 0, STAR, loc+860,      0, &pspec66 },
/* 48: tqphy* at mii? phy -1 */
    { "tqphy",		"tqphy",	 0, STAR, loc+859,      0, &pspec66 },
/* 49: dmphy* at mii? phy -1 */
    { "dmphy",		"dmphy",	 0, STAR, loc+858,      0, &pspec66 },
/* 50: pnaphy* at mii? phy -1 */
    { "pnaphy",		"pnaphy",	 0, STAR, loc+857,      0, &pspec66 },
/* 51: rgephy* at mii? phy -1 */
    { "rgephy",		"rgephy",	 0, STAR, loc+856,      0, &pspec66 },
/* 52: urlphy* at mii? phy -1 */
    { "urlphy",		"urlphy",	 0, STAR, loc+855,      0, &pspec66 },
/* 53: ukphy* at mii? phy -1 */
    { "ukphy",		"ukphy",	 0, STAR, loc+854,      0, &pspec66 },
/* 54: ciphy* at mii? phy -1 */
    { "ciphy",		"ciphy",	 0, STAR, loc+853,      0, &pspec66 },
/* 55: rlphy* at mii? phy -1 */
    { "rlphy",		"rlphy",	 0, STAR, loc+852,      0, &pspec66 },
/* 56: atphy* at mii? phy -1 */
    { "atphy",		"atphy",	 0, STAR, loc+850,      0, &pspec66 },
/* 57: ihphy* at mii? phy -1 */
    { "ihphy",		"ihphy",	 0, STAR, loc+840,      0, &pspec66 },
/* 58: etphy* at mii? phy -1 */
    { "etphy",		"etphy",	 0, STAR, loc+836,      0, &pspec66 },
/* 59: aic* at pcmcia? function -1 */
    { "aic",		"aic_pcmcia",	 0, STAR, loc+800,      0, &pspec37 },
/* 60: ahc* at pci? dev -1 function -1 */
    { "ahc",		"ahc_pci",	 0, STAR, loc+435,      0, &pspec18 },
/* 61: ahc* at cardbus? function -1 */
    { "ahc",		"ahc_cardbus",	 0, STAR, loc+792,      0, &pspec39 },
/* 62: ahd* at pci? dev -1 function -1 */
    { "ahd",		"ahd_pci",	 0, STAR, loc+437,      0, &pspec18 },
/* 63: dpt* at pci? dev -1 function -1 */
    { "dpt",		"dpt_pci",	 0, STAR, loc+439,      0, &pspec18 },
/* 64: cac* at pci? dev -1 function -1 */
    { "cac",		"cac_pci",	 0, STAR, loc+441,      0, &pspec18 },
/* 65: ciss* at pci? dev -1 function -1 */
    { "ciss",		"ciss_pci",	 0, STAR, loc+443,      0, &pspec18 },
/* 66: mlx* at pci? dev -1 function -1 */
    { "mlx",		"mlx_pci",	 0, STAR, loc+445,      0, &pspec18 },
/* 67: icp* at pci? dev -1 function -1 */
    { "icp",		"icp_pci",	 0, STAR, loc+447,      0, &pspec18 },
/* 68: icpsp* at icp? unit -1 */
    { "icpsp",		"icpsp",	 0, STAR, loc+791,      0, &pspec51 },
/* 69: aac* at pci? dev -1 function -1 */
    { "aac",		"aac_pci",	 0, STAR, loc+449,      0, &pspec18 },
/* 70: adv* at pci? dev -1 function -1 */
    { "adv",		"adv_pci",	 0, STAR, loc+451,      0, &pspec18 },
/* 71: adv* at cardbus? function -1 */
    { "adv",		"adv_cardbus",	 0, STAR, loc+790,      0, &pspec39 },
/* 72: adw* at pci? dev -1 function -1 */
    { "adw",		"adw_pci",	 0, STAR, loc+453,      0, &pspec18 },
/* 73: bha* at pci? dev -1 function -1 */
    { "bha",		"bha_pci",	 0, STAR, loc+455,      0, &pspec18 },
/* 74: iha* at pci? dev -1 function -1 */
    { "iha",		"iha_pci",	 0, STAR, loc+457,      0, &pspec18 },
/* 75: isp* at pci? dev -1 function -1 */
    { "isp",		"isp_pci",	 0, STAR, loc+459,      0, &pspec18 },
/* 76: mfi* at pci? dev -1 function -1 */
    { "mfi",		"mfi_pci",	 0, STAR, loc+461,      0, &pspec18 },
/* 77: mpt* at pci? dev -1 function -1 */
    { "mpt",		"mpt_pci",	 0, STAR, loc+463,      0, &pspec18 },
/* 78: siop* at pci? dev -1 function -1 */
    { "siop",		"siop_pci",	 0, STAR, loc+465,      0, &pspec18 },
/* 79: esiop* at pci? dev -1 function -1 */
    { "esiop",		"esiop_pci",	 0, STAR, loc+467,      0, &pspec18 },
/* 80: an* at pci? dev -1 function -1 */
    { "an",		"an_pci",	 0, STAR, loc+469,      0, &pspec18 },
/* 81: an* at pcmcia? function -1 */
    { "an",		"an_pcmcia",	 0, STAR, loc+819,      0, &pspec37 },
/* 82: awi* at pcmcia? function -1 */
    { "awi",		"awi_pcmcia",	 0, STAR, loc+789,      0, &pspec37 },
/* 83: wi* at pci? dev -1 function -1 */
    { "wi",		"wi_pci",	 0, STAR, loc+471,      0, &pspec18 },
/* 84: wi* at pcmcia? function -1 */
    { "wi",		"wi_pcmcia",	 0, STAR, loc+769,      0, &pspec37 },
/* 85: ath* at pci? dev -1 function -1 */
    { "ath",		"ath_pci",	 0, STAR, loc+473,      0, &pspec18 },
/* 86: ath* at cardbus? function -1 */
    { "ath",		"ath_cardbus",	 0, STAR, loc+768,      0, &pspec39 },
/* 87: atw* at pci? dev -1 function -1 */
    { "atw",		"atw_pci",	 0, STAR, loc+475,      0, &pspec18 },
/* 88: atw* at cardbus? function -1 */
    { "atw",		"atw_cardbus",	 0, STAR, loc+879,      0, &pspec39 },
/* 89: rtw* at pci? dev -1 function -1 */
    { "rtw",		"rtw_pci",	 0, STAR, loc+477,      0, &pspec18 },
/* 90: rtw* at cardbus? function -1 */
    { "rtw",		"rtw_cardbus",	 0, STAR, loc+877,      0, &pspec39 },
/* 91: ral* at pci? dev -1 function -1 */
    { "ral",		"ral_pci",	 0, STAR, loc+479,      0, &pspec18 },
/* 92: ral* at cardbus? function -1 */
    { "ral",		"ral_cardbus",	 0, STAR, loc+870,      0, &pspec39 },
/* 93: ral* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ral",		"ural",		 0, STAR, loc+ 89,      0, &pspec72 },
/* 94: ep* at pci? dev -1 function -1 */
    { "ep",		"ep_pci",	 0, STAR, loc+481,      0, &pspec18 },
/* 95: ep* at pcmcia? function -1 */
    { "ep",		"ep_pcmcia",	 0, STAR, loc+869,      0, &pspec37 },
/* 96: ex* at pci? dev -1 function -1 */
    { "ex",		"ex_pci",	 0, STAR, loc+483,      0, &pspec18 },
/* 97: ex* at cardbus? function -1 */
    { "ex",		"ex_cardbus",	 0, STAR, loc+812,      0, &pspec39 },
/* 98: le* at pci? dev -1 function -1 */
    { "le",		"le_pci",	 0, STAR, loc+485,      0, &pspec18 },
/* 99: hme* at pci? dev -1 function -1 */
    { "hme",		"hme_pci",	 0, STAR, loc+487,      0, &pspec18 },
/*100: cy* at pci? dev -1 function -1 */
    { "cy",		"cy_pci",	 0, STAR, loc+489,      0, &pspec18 },
/*101: en* at pci? dev -1 function -1 */
    { "en",		"en_pci",	 0, STAR, loc+491,      0, &pspec18 },
/*102: esp* at pcmcia? function -1 */
    { "esp",		"esp_pcmcia",	 0, STAR, loc+821,      0, &pspec37 },
/*103: spc* at pcmcia? function -1 */
    { "spc",		"spc_pcmcia",	 0, STAR, loc+822,      0, &pspec37 },
/*104: ntwoc* at pci? dev -1 function -1 */
    { "ntwoc",		"ntwoc_pci",	 0, STAR, loc+493,      0, &pspec18 },
/*105: fxp* at pci? dev -1 function -1 */
    { "fxp",		"fxp_pci",	 0, STAR, loc+495,      0, &pspec18 },
/*106: fxp* at cardbus? function -1 */
    { "fxp",		"fxp_cardbus",	 0, STAR, loc+842,      0, &pspec39 },
/*107: sm* at pcmcia? function -1 */
    { "sm",		"sm_pcmcia",	 0, STAR, loc+863,      0, &pspec37 },
/*108: sm* at mhzc? */
    { "sm",		"sm_mhzc",	 0, STAR,     loc,      0, &pspec65 },
/*109: epic* at pci? dev -1 function -1 */
    { "epic",		"epic_pci",	 0, STAR, loc+497,      0, &pspec18 },
/*110: mbe* at pcmcia? function -1 */
    { "mbe",		"mbe_pcmcia",	 0, STAR, loc+866,      0, &pspec37 },
/*111: ne* at pci? dev -1 function -1 */
    { "ne",		"ne_pci",	 0, STAR, loc+499,      0, &pspec18 },
/*112: ne* at pcmcia? function -1 */
    { "ne",		"ne_pcmcia",	 0, STAR, loc+868,      0, &pspec37 },
/*113: com0 at isa? port 0x3f8 size 0 iomem -1 iosiz 0 irq 4 drq -1 drq2 -1 */
    { "com",		"com_isa",	 0, NORM, loc+  0,      0, &pspec27 },
/*114: com1 at isa? port 0x2f8 size 0 iomem -1 iosiz 0 irq 3 drq -1 drq2 -1 */
    { "com",		"com_isa",	 1, NORM, loc+ 49,      0, &pspec27 },
/*115: com* at puc? port -1 */
    { "com",		"com_puc",	 2, STAR, loc+871,      0, &pspec36 },
/*116: com* at pcmcia? function -1 */
    { "com",		"com_pcmcia",	 2, STAR, loc+872,      0, &pspec37 },
/*117: com* at pcmcom? slave -1 */
    { "com",		"com_pcmcom",	 2, STAR, loc+873,      0, &pspec38 },
/*118: com* at cardbus? function -1 */
    { "com",		"com_cardbus",	 2, STAR, loc+874,      0, &pspec39 },
/*119: com* at xirc? */
    { "com",		"com_xirc",	 2, STAR,     loc,      0, &pspec64 },
/*120: com* at mhzc? */
    { "com",		"com_mhzc",	 2, STAR,     loc,      0, &pspec65 },
/*121: pckbc0 at isa? port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    { "pckbc",		"pckbc_isa",	 0, NORM, loc+ 35,      0, &pspec27 },
/*122: pckbc* at acpi? */
    { "pckbc",		"pckbc_acpi",	 1, STAR,     loc,      0, &pspec6 },
/*123: attimer0 at isa? port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    { "attimer",		"attimer_isa",	 0, NORM, loc+ 21,      0, &pspec27 },
/*124: attimer* at acpi? */
    { "attimer",		"attimer_acpi",	 1, STAR,     loc,      0, &pspec6 },
/*125: ug* at acpi? */
    { "ug",		"ug_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*126: esh* at pci? dev -1 function -1 */
    { "esh",		"esh_pci",	 0, STAR, loc+501,      0, &pspec18 },
/*127: opl* at cmpci? */
    { "opl",		"opl_cmpci",	 0, STAR,     loc,    0x1, &pspec102 },
/*128: opl* at eso? */
    { "opl",		"opl_eso",	 0, STAR,     loc,      0, &pspec103 },
/*129: opl* at fms? */
    { "opl",		"opl_fms",	 0, STAR,     loc,      0, &pspec104 },
/*130: opl* at sv? */
    { "opl",		"opl_sv",	 0, STAR,     loc,      0, &pspec105 },
/*131: mpu* at acpi? */
    { "mpu",		"mpu_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*132: mpu* at cmpci? */
    { "mpu",		"mpu_cmpci",	 0, STAR,     loc,      0, &pspec102 },
/*133: mpu* at eso? */
    { "mpu",		"mpu_eso",	 0, STAR,     loc,      0, &pspec103 },
/*134: mpu* at yds? */
    { "mpu",		"mpu_yds",	 0, STAR,     loc,      0, &pspec108 },
/*135: rtk* at pci? dev -1 function -1 */
    { "rtk",		"rtk_pci",	 0, STAR, loc+503,      0, &pspec18 },
/*136: rtk* at cardbus? function -1 */
    { "rtk",		"rtk_cardbus",	 0, STAR, loc+765,      0, &pspec39 },
/*137: re* at pci? dev -1 function -1 */
    { "re",		"re_pci",	 0, STAR, loc+505,      0, &pspec18 },
/*138: re* at cardbus? function -1 */
    { "re",		"re_cardbus",	 0, STAR, loc+767,      0, &pspec39 },
/*139: wdc0 at isa? port 0x1f0 size 0 iomem -1 iosiz 0 irq 14 drq -1 drq2 -1 */
    { "wdc",		"wdc_isa",	 0, NORM, loc+  7,      0, &pspec27 },
/*140: wdc1 at isa? port 0x170 size 0 iomem -1 iosiz 0 irq 15 drq -1 drq2 -1 */
    { "wdc",		"wdc_isa",	 1, NORM, loc+ 63,      0, &pspec27 },
/*141: wdc* at pcmcia? function -1 */
    { "wdc",		"wdc_pcmcia",	 2, STAR, loc+770,      0, &pspec37 },
/*142: atabus* at ata? channel -1 */
    { "atabus",		"atabus",	 0, STAR, loc+771,      0, &pspec56 },
/*143: njata* at cardbus? function -1 */
    { "njata",		"njata_cardbus",	 0, STAR, loc+772,    0x1, &pspec39 },
/*144: ahcisata* at pci? dev -1 function -1 */
    { "ahcisata",	"ahcisata_pci",	 0, STAR, loc+507,      0, &pspec18 },
/*145: ahcisata* at jmide? */
    { "ahcisata",	"jmahci",	 0, STAR,     loc,      0, &pspec55 },
/*146: siisata* at pci? dev -1 function -1 */
    { "siisata",		"siisata_pci",	 0, STAR, loc+509,      0, &pspec18 },
/*147: siisata* at cardbus? function -1 */
    { "siisata",		"siisata_cardbus",	 0, STAR, loc+776,      0, &pspec39 },
/*148: mvsata* at pci? dev -1 function -1 */
    { "mvsata",		"mvsata_pci",	 0, STAR, loc+511,      0, &pspec18 },
/*149: tlp* at pci? dev -1 function -1 */
    { "tlp",		"tlp_pci",	 0, STAR, loc+513,      0, &pspec18 },
/*150: tlp* at cardbus? function -1 */
    { "tlp",		"tlp_cardbus",	 0, STAR, loc+779,      0, &pspec39 },
/*151: sf* at pci? dev -1 function -1 */
    { "sf",		"sf_pci",	 0, STAR, loc+515,      0, &pspec18 },
/*152: cs* at pcmcia? function -1 */
    { "cs",		"cs_pcmcia",	 0, STAR, loc+781,      0, &pspec37 },
/*153: hpet* at acpihpetbus? */
    { "hpet",		"hpet_acpi_tab",	 0, STAR,     loc,      0, &pspec10 },
/*154: hpet* at acpinodebus? */
    { "hpet",		"hpet_acpi_dev",	 0, STAR,     loc,      0, &pspec11 },
/*155: drmdev* at inteldrm? */
    { "drmdev",		"drmdev",	 0, STAR,     loc,      0, &pspec35 },
/*156: inteldrm* at drm? */
    { "inteldrm",	"inteldrm",	 0, STAR,     loc,      0, &pspec34 },
/*157: vga* at pci? dev -1 function -1 */
    { "vga",		"vga_pci",	 0, STAR, loc+517,      0, &pspec18 },
/*158: wsdisplay* at vga? console -1 kbdmux 1 */
    { "wsdisplay",	"wsdisplay_emul",	 0, STAR, loc+519,      0, &pspec29 },
/*159: wsdisplay* at wsemuldisplaydev? console -1 kbdmux 1 */
    { "wsdisplay",	"wsdisplay_emul",	 0, STAR, loc+521,      0, &pspec30 },
/*160: wsdisplay* at udl? console -1 kbdmux 1 */
    { "wsdisplay",	"wsdisplay_emul",	 0, STAR, loc+523,      0, &pspec79 },
/*161: wskbd* at pckbd? console -1 mux 1 */
    { "wskbd",		"wskbd",	 0, STAR, loc+525,      0, &pspec31 },
/*162: wskbd* at ukbd? console -1 mux 1 */
    { "wskbd",		"wskbd",	 0, STAR, loc+527,      0, &pspec78 },
/*163: wskbd* at btkbd? console -1 mux 1 */
    { "wskbd",		"wskbd",	 0, STAR, loc+529,      0, &pspec124 },
/*164: wsmouse* at spic? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+793,      0, &pspec12 },
/*165: wsmouse* at pms? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+794,      0, &pspec32 },
/*166: wsmouse* at ums? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+795,      0, &pspec75 },
/*167: wsmouse* at uts? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+796,      0, &pspec76 },
/*168: wsmouse* at uep? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+797,      0, &pspec77 },
/*169: wsmouse* at btms? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+798,      0, &pspec123 },
/*170: wsmouse* at btmagic? mux 0 */
    { "wsmouse",		"wsmouse",	 0, STAR, loc+799,      0, &pspec125 },
/*171: genfb* at pci? dev -1 function -1 */
    { "genfb",		"genfb_pci",	 0, STAR, loc+531,      0, &pspec18 },
/*172: uhci* at pci? dev -1 function -1 */
    { "uhci",		"uhci_pci",	 0, STAR, loc+533,      0, &pspec18 },
/*173: uhci* at cardbus? function -1 */
    { "uhci",		"uhci_cardbus",	 0, STAR, loc+802,      0, &pspec39 },
/*174: ohci* at pci? dev -1 function -1 */
    { "ohci",		"ohci_pci",	 0, STAR, loc+535,      0, &pspec18 },
/*175: ohci* at cardbus? function -1 */
    { "ohci",		"ohci_cardbus",	 0, STAR, loc+804,      0, &pspec39 },
/*176: ehci* at pci? dev -1 function -1 */
    { "ehci",		"ehci_pci",	 0, STAR, loc+537,      0, &pspec18 },
/*177: ehci* at cardbus? function -1 */
    { "ehci",		"ehci_cardbus",	 0, STAR, loc+806,      0, &pspec39 },
/*178: slhci* at pcmcia? function -1 */
    { "slhci",		"slhci_pcmcia",	 0, STAR, loc+807,      0, &pspec37 },
/*179: sdhc* at pci? dev -1 function -1 */
    { "sdhc",		"sdhc_pci",	 0, STAR, loc+539,      0, &pspec18 },
/*180: wb* at acpi? */
    { "wb",		"wb_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*181: mtd* at pci? dev -1 function -1 */
    { "mtd",		"mtd_pci",	 0, STAR, loc+541,      0, &pspec18 },
/*182: radio* at udsbr? */
    { "radio",		"radio",	 0, STAR,     loc,      0, &pspec97 },
/*183: radio* at bktr? */
    { "radio",		"radio",	 0, STAR,     loc,      0, &pspec113 },
/*184: fwohci* at pci? dev -1 function -1 */
    { "fwohci",		"fwohci_pci",	 0, STAR, loc+543,      0, &pspec18 },
/*185: fwohci* at cardbus? function -1 */
    { "fwohci",		"fwohci_cardbus",	 0, STAR, loc+814,      0, &pspec39 },
/*186: spic* at acpi? */
    { "spic",		"spic_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*187: bwi* at pci? dev -1 function -1 */
    { "bwi",		"bwi_pci",	 0, STAR, loc+545,      0, &pspec18 },
/*188: joy* at acpi? */
    { "joy",		"joy_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*189: cpu* at mainbus? apid -1 */
    { "cpu",		"cpu",		 0, STAR, loc+818,      0, &pspec0 },
/*190: acpicpu* at cpu? */
    { "acpicpu",		"acpicpu",	 0, STAR,     loc,      0, &pspec2 },
/*191: coretemp* at cpu? */
    { "coretemp",	"coretemp",	 0, STAR,     loc,      0, &pspec2 },
/*192: est0 at cpu0 */
    { "est",		"est",		 0, NORM,     loc,      0, &pspec3 },
/*193: powernow0 at cpu0 */
    { "powernow",	"powernow",	 0, NORM,     loc,      0, &pspec3 },
/*194: ioapic* at mainbus? apid -1 */
    { "ioapic",		"ioapic",	 0, STAR, loc+823,      0, &pspec1 },
/*195: ipmi0 at mainbus? */
    { "ipmi",		"ipmi",		 0, NORM,     loc,      0, &pspec4 },
/*196: scsibus* at scsi? channel -1 */
    { "scsibus",		"scsibus",	 0, STAR, loc+825,      0, &pspec46 },
/*197: atapibus* at atapi? */
    { "atapibus",	"atapibus",	 0, STAR,     loc,      0, &pspec58 },
/*198: cd* at scsibus? target -1 lun -1 */
    { "cd",		"cd",		 0, STAR, loc+547,      0, &pspec47 },
/*199: cd* at atapibus? drive -1 */
    { "cd",		"cd",		 0, STAR, loc+828,      0, &pspec60 },
/*200: ch* at scsibus? target -1 lun -1 */
    { "ch",		"ch",		 0, STAR, loc+549,      0, &pspec47 },
/*201: sd* at scsibus? target -1 lun -1 */
    { "sd",		"sd",		 0, STAR, loc+551,      0, &pspec47 },
/*202: sd* at atapibus? drive -1 */
    { "sd",		"sd",		 0, STAR, loc+831,      0, &pspec60 },
/*203: st* at scsibus? target -1 lun -1 */
    { "st",		"st_scsibus",	 0, STAR, loc+553,      0, &pspec47 },
/*204: st* at atapibus? drive -1 */
    { "st",		"st_atapibus",	 0, STAR, loc+833,      0, &pspec60 },
/*205: ses* at scsibus? target -1 lun -1 */
    { "ses",		"ses",		 0, STAR, loc+555,      0, &pspec47 },
/*206: ss* at scsibus? target -1 lun -1 */
    { "ss",		"ss",		 0, STAR, loc+557,      0, &pspec47 },
/*207: uk* at scsibus? target -1 lun -1 */
    { "uk",		"uk",		 0, STAR, loc+559,      0, &pspec47 },
/*208: uk* at atapibus? drive -1 */
    { "uk",		"uk",		 0, STAR, loc+837,      0, &pspec60 },
/*209: wd* at atabus? drive -1 */
    { "wd",		"wd",		 0, STAR, loc+838,      0, &pspec57 },
/*210: wd* at umass? drive -1 */
    { "wd",		"wd",		 0, STAR, loc+839,      0, &pspec81 },
/*211: iop* at pci? dev -1 function -1 */
    { "iop",		"iop_pci",	 0, STAR, loc+561,      0, &pspec18 },
/*212: iopsp* at iop? tid -1 */
    { "iopsp",		"iopsp",	 0, STAR, loc+841,      0, &pspec45 },
/*213: mainbus0 at root */
    { "mainbus",		"mainbus",	 0, NORM,     loc,      0, NULL },
/*214: pci* at mainbus? bus -1 */
    { "pci",		"pci",		 0, STAR, loc+843,      0, &pspec15 },
/*215: pci* at pchb? bus -1 */
    { "pci",		"pci",		 0, STAR, loc+844,      0, &pspec16 },
/*216: pci* at ppb? bus -1 */
    { "pci",		"pci",		 0, STAR, loc+845,      0, &pspec17 },
/*217: twe* at pci? dev -1 function -1 */
    { "twe",		"twe",		 0, STAR, loc+563,      0, &pspec18 },
/*218: twa* at pci? dev -1 function -1 */
    { "twa",		"twa",		 0, STAR, loc+565,      0, &pspec18 },
/*219: amr* at pci? dev -1 function -1 */
    { "amr",		"amr",		 0, STAR, loc+567,      0, &pspec18 },
/*220: arcmsr* at pci? dev -1 function -1 */
    { "arcmsr",		"arcmsr",	 0, STAR, loc+569,      0, &pspec18 },
/*221: mly* at pci? dev -1 function -1 */
    { "mly",		"mly",		 0, STAR, loc+571,      0, &pspec18 },
/*222: pcscp* at pci? dev -1 function -1 */
    { "pcscp",		"pcscp",	 0, STAR, loc+573,      0, &pspec18 },
/*223: mpii* at pci? dev -1 function -1 */
    { "mpii",		"mpii",		 0, STAR, loc+575,      0, &pspec18 },
/*224: fpa* at pci? dev -1 function -1 */
    { "fpa",		"fpa",		 0, STAR, loc+577,      0, &pspec18 },
/*225: pcn* at pci? dev -1 function -1 */
    { "pcn",		"pcn",		 0, STAR, loc+579,      0, &pspec18 },
/*226: trm* at pci? dev -1 function -1 */
    { "trm",		"trm",		 0, STAR, loc+581,      0, &pspec18 },
/*227: pciide* at pci? dev -1 function -1 */
    { "pciide",		"pciide",	 0, STAR, loc+583,      0, &pspec18 },
/*228: acardide* at pci? dev -1 function -1 */
    { "acardide",	"acardide",	 0, STAR, loc+585,      0, &pspec18 },
/*229: aceride* at pci? dev -1 function -1 */
    { "aceride",		"aceride",	 0, STAR, loc+587,      0, &pspec18 },
/*230: artsata* at pci? dev -1 function -1 */
    { "artsata",		"artsata",	 0, STAR, loc+589,      0, &pspec18 },
/*231: cmdide* at pci? dev -1 function -1 */
    { "cmdide",		"cmdide",	 0, STAR, loc+591,      0, &pspec18 },
/*232: cypide* at pci? dev -1 function -1 */
    { "cypide",		"cypide",	 0, STAR, loc+593,      0, &pspec18 },
/*233: hptide* at pci? dev -1 function -1 */
    { "hptide",		"hptide",	 0, STAR, loc+595,      0, &pspec18 },
/*234: iteide* at pci? dev -1 function -1 */
    { "iteide",		"iteide",	 0, STAR, loc+597,      0, &pspec18 },
/*235: jmide* at pci? dev -1 function -1 */
    { "jmide",		"jmide",	 0, STAR, loc+599,      0, &pspec18 },
/*236: optiide* at pci? dev -1 function -1 */
    { "optiide",		"optiide",	 0, STAR, loc+601,      0, &pspec18 },
/*237: piixide* at pci? dev -1 function -1 */
    { "piixide",		"piixide",	 0, STAR, loc+603,      0, &pspec18 },
/*238: pdcsata* at pci? dev -1 function -1 */
    { "pdcsata",		"pdcsata",	 0, STAR, loc+605,      0, &pspec18 },
/*239: pdcide* at pci? dev -1 function -1 */
    { "pdcide",		"pdcide",	 0, STAR, loc+607,      0, &pspec18 },
/*240: svwsata* at pci? dev -1 function -1 */
    { "svwsata",		"svwsata",	 0, STAR, loc+609,      0, &pspec18 },
/*241: satalink* at pci? dev -1 function -1 */
    { "satalink",	"satalink",	 0, STAR, loc+611,      0, &pspec18 },
/*242: siside* at pci? dev -1 function -1 */
    { "siside",		"siside",	 0, STAR, loc+613,      0, &pspec18 },
/*243: slide* at pci? dev -1 function -1 */
    { "slide",		"slide",	 0, STAR, loc+615,      0, &pspec18 },
/*244: viaide* at pci? dev -1 function -1 */
    { "viaide",		"viaide",	 0, STAR, loc+617,      0, &pspec18 },
/*245: ixpide* at pci? dev -1 function -1 */
    { "ixpide",		"ixpide",	 0, STAR, loc+619,      0, &pspec18 },
/*246: toshide* at pci? dev -1 function -1 */
    { "toshide",		"toshide",	 0, STAR, loc+621,      0, &pspec18 },
/*247: ppb* at pci? dev -1 function -1 */
    { "ppb",		"ppb",		 0, STAR, loc+623,      0, &pspec18 },
/*248: cz* at pci? dev -1 function -1 */
    { "cz",		"cz",		 0, STAR, loc+625,      0, &pspec18 },
/*249: jme* at pci? dev -1 function -1 */
    { "jme",		"jme",		 0, STAR, loc+627,      0, &pspec18 },
/*250: tl* at pci? dev -1 function -1 */
    { "tl",		"tl",		 0, STAR, loc+629,      0, &pspec18 },
/*251: lmc* at pci? dev -1 function -1 */
    { "lmc",		"lmc",		 0, STAR, loc+631,      0, &pspec18 },
/*252: bktr* at pci? dev -1 function -1 */
    { "bktr",		"bktr",		 0, STAR, loc+633,      0, &pspec18 },
/*253: clcs* at pci? dev -1 function -1 */
    { "clcs",		"clcs",		 0, STAR, loc+635,      0, &pspec18 },
/*254: clct* at pci? dev -1 function -1 */
    { "clct",		"clct",		 0, STAR, loc+637,      0, &pspec18 },
/*255: fms* at pci? dev -1 function -1 */
    { "fms",		"fms",		 0, STAR, loc+639,      0, &pspec18 },
/*256: eap* at pci? dev -1 function -1 */
    { "eap",		"eap",		 0, STAR, loc+641,      0, &pspec18 },
/*257: auacer* at pci? dev -1 function -1 */
    { "auacer",		"auacer",	 0, STAR, loc+643,      0, &pspec18 },
/*258: auich* at pci? dev -1 function -1 */
    { "auich",		"auich",	 0, STAR, loc+645,      0, &pspec18 },
/*259: auvia* at pci? dev -1 function -1 */
    { "auvia",		"auvia",	 0, STAR, loc+647,      0, &pspec18 },
/*260: auixp* at pci? dev -1 function -1 */
    { "auixp",		"auixp",	 0, STAR, loc+649,      0, &pspec18 },
/*261: neo* at pci? dev -1 function -1 */
    { "neo",		"neo",		 0, STAR, loc+651,      0, &pspec18 },
/*262: esa* at pci? dev -1 function -1 */
    { "esa",		"esa",		 0, STAR, loc+653,      0, &pspec18 },
/*263: eso* at pci? dev -1 function -1 */
    { "eso",		"eso",		 0, STAR, loc+655,      0, &pspec18 },
/*264: esm* at pci? dev -1 function -1 */
    { "esm",		"esm",		 0, STAR, loc+657,      0, &pspec18 },
/*265: sv* at pci? dev -1 function -1 */
    { "sv",		"sv",		 0, STAR, loc+659,      0, &pspec18 },
/*266: cmpci* at pci? dev -1 function -1 */
    { "cmpci",		"cmpci",	 0, STAR, loc+661,      0, &pspec18 },
/*267: yds* at pci? dev -1 function -1 */
    { "yds",		"yds",		 0, STAR, loc+663,      0, &pspec18 },
/*268: emuxki* at pci? dev -1 function -1 */
    { "emuxki",		"emuxki",	 0, STAR, loc+665,      0, &pspec18 },
/*269: autri* at pci? dev -1 function -1 */
    { "autri",		"autri",	 0, STAR, loc+667,      0, &pspec18 },
/*270: puc* at pci? dev -1 function -1 */
    { "puc",		"puc",		 0, STAR, loc+669,      0, &pspec18 },
/*271: vr* at pci? dev -1 function -1 */
    { "vr",		"vr",		 0, STAR, loc+671,      0, &pspec18 },
/*272: sip* at pci? dev -1 function -1 */
    { "sip",		"sip",		 0, STAR, loc+673,      0, &pspec18 },
/*273: gsip* at pci? dev -1 function -1 */
    { "gsip",		"gsip",		 0, STAR, loc+675,      0, &pspec18 },
/*274: stge* at pci? dev -1 function -1 */
    { "stge",		"stge",		 0, STAR, loc+677,      0, &pspec18 },
/*275: wm* at pci? dev -1 function -1 */
    { "wm",		"wm",		 0, STAR, loc+679,      0, &pspec18 },
/*276: bge* at pci? dev -1 function -1 */
    { "bge",		"bge",		 0, STAR, loc+681,      0, &pspec18 },
/*277: bnx* at pci? dev -1 function -1 */
    { "bnx",		"bnx",		 0, STAR, loc+683,      0, &pspec18 },
/*278: ti* at pci? dev -1 function -1 */
    { "ti",		"ti",		 0, STAR, loc+685,      0, &pspec18 },
/*279: ste* at pci? dev -1 function -1 */
    { "ste",		"ste",		 0, STAR, loc+687,      0, &pspec18 },
/*280: cbb* at pci? dev -1 function -1 */
    { "cbb",		"cbb_pci",	 0, STAR, loc+689,      0, &pspec18 },
/*281: piixpm* at pci? dev -1 function -1 */
    { "piixpm",		"piixpm",	 0, STAR, loc+691,      0, &pspec18 },
/*282: amdpm* at pci? dev -1 function -1 */
    { "amdpm",		"amdpm",	 0, STAR, loc+693,      0, &pspec18 },
/*283: hifn* at pci? dev -1 function -1 */
    { "hifn",		"hifn",		 0, STAR, loc+695,      0, &pspec18 },
/*284: ubsec* at pci? dev -1 function -1 */
    { "ubsec",		"ubsec",	 0, STAR, loc+697,      0, &pspec18 },
/*285: weasel* at pci? dev -1 function -1 */
    { "weasel",		"weasel_pci",	 0, STAR, loc+699,      0, &pspec18 },
/*286: txp* at pci? dev -1 function -1 */
    { "txp",		"txp",		 0, STAR, loc+701,      0, &pspec18 },
/*287: skc* at pci? dev -1 function -1 */
    { "skc",		"skc",		 0, STAR, loc+703,      0, &pspec18 },
/*288: sk* at skc? */
    { "sk",		"sk",		 0, STAR,     loc,      0, &pspec63 },
/*289: bce* at pci? dev -1 function -1 */
    { "bce",		"bce",		 0, STAR, loc+705,      0, &pspec18 },
/*290: dge* at pci? dev -1 function -1 */
    { "dge",		"dge",		 0, STAR, loc+431,      0, &pspec18 },
/*291: ipw* at pci? dev -1 function -1 */
    { "ipw",		"ipw",		 0, STAR, loc+707,      0, &pspec18 },
/*292: iwi* at pci? dev -1 function -1 */
    { "iwi",		"iwi",		 0, STAR, loc+709,      0, &pspec18 },
/*293: wpi* at pci? dev -1 function -1 */
    { "wpi",		"wpi",		 0, STAR, loc+711,      0, &pspec18 },
/*294: iwn* at pci? dev -1 function -1 */
    { "iwn",		"iwn",		 0, STAR, loc+713,      0, &pspec18 },
/*295: xge* at pci? dev -1 function -1 */
    { "xge",		"xge",		 0, STAR, loc+715,      0, &pspec18 },
/*296: vge* at pci? dev -1 function -1 */
    { "vge",		"vge",		 0, STAR, loc+717,      0, &pspec18 },
/*297: nfe* at pci? dev -1 function -1 */
    { "nfe",		"nfe",		 0, STAR, loc+719,      0, &pspec18 },
/*298: mskc* at pci? dev -1 function -1 */
    { "mskc",		"mskc",		 0, STAR, loc+721,      0, &pspec18 },
/*299: msk* at mskc? */
    { "msk",		"msk",		 0, STAR,     loc,      0, &pspec62 },
/*300: nfsmbc* at pci? dev -1 function -1 */
    { "nfsmbc",		"nfsmbc",	 0, STAR, loc+723,      0, &pspec18 },
/*301: nfsmb* at nfsmbc? */
    { "nfsmb",		"nfsmb",	 0, STAR,     loc,      0, &pspec41 },
/*302: ichsmb* at pci? dev -1 function -1 */
    { "ichsmb",		"ichsmb",	 0, STAR, loc+725,      0, &pspec18 },
/*303: age* at pci? dev -1 function -1 */
    { "age",		"age",		 0, STAR, loc+727,      0, &pspec18 },
/*304: alc* at pci? dev -1 function -1 */
    { "alc",		"alc",		 0, STAR, loc+729,      0, &pspec18 },
/*305: ale* at pci? dev -1 function -1 */
    { "ale",		"ale",		 0, STAR, loc+731,      0, &pspec18 },
/*306: lii* at pci? dev -1 function -1 */
    { "lii",		"lii",		 0, STAR, loc+733,      0, &pspec18 },
/*307: hdaudio* at pci? dev -1 function -1 */
    { "hdaudio",		"hdaudio_pci",	 0, STAR, loc+735,      0, &pspec18 },
/*308: hdafg* at hdaudiobus? nid -1 */
    { "hdafg",		"hdafg",	 0, STAR, loc+883,      0, &pspec106 },
/*309: et* at pci? dev -1 function -1 */
    { "et",		"et",		 0, STAR, loc+737,      0, &pspec18 },
/*310: cxdtv* at pci? dev -1 function -1 */
    { "cxdtv",		"cxdtv",	 0, STAR, loc+739,      0, &pspec18 },
/*311: coram* at pci? dev -1 function -1 */
    { "coram",		"coram",	 0, STAR, loc+741,      0, &pspec18 },
/*312: virtio* at pci? dev -1 function -1 */
    { "virtio",		"virtio",	 0, STAR, loc+743,      0, &pspec18 },
/*313: viomb* at virtio? */
    { "viomb",		"viomb",	 0, STAR,     loc,      0, &pspec127 },
/*314: vioif* at virtio? */
    { "vioif",		"vioif",	 0, STAR,     loc,      0, &pspec127 },
/*315: agp* at pchb? */
    { "agp",		"agp",		 0, STAR,     loc,      0, &pspec20 },
/*316: aapic* at pci? dev -1 function -1 */
    { "aapic",		"aapic",	 0, STAR, loc+745,      0, &pspec18 },
/*317: pchb* at pci? dev -1 function -1 */
    { "pchb",		"pchb",		 0, STAR, loc+747,      0, &pspec18 },
/*318: pcib* at pci? dev -1 function -1 */
    { "pcib",		"pcib",		 0, STAR, loc+749,      0, &pspec18 },
/*319: amdtemp* at pchb? */
    { "amdtemp",		"amdtemp",	 0, STAR,     loc,      0, &pspec40 },
/*320: ichlpcib* at pci? dev -1 function -1 */
    { "ichlpcib",	"ichlpcib",	 0, STAR, loc+751,      0, &pspec18 },
/*321: fwhrng* at ichlpcib? */
    { "fwhrng",		"fwhrng",	 0, STAR,     loc,      0, &pspec19 },
/*322: isa0 at mainbus? */
    { "isa",		"isa",		 0, NORM,     loc,      0, &pspec21 },
/*323: isa0 at pcib? */
    { "isa",		"isa",		 0, NORM,     loc,      0, &pspec22 },
/*324: isa0 at ichlpcib? */
    { "isa",		"isa",		 0, NORM,     loc,      0, &pspec23 },
/*325: pcppi0 at isa? port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    { "pcppi",		"pcppi",	 0, NORM, loc+ 42,      0, &pspec27 },
/*326: pcppi* at acpi? */
    { "pcppi",		"pcppi_acpi",	 1, STAR,     loc,      0, &pspec6 },
/*327: pckbd* at pckbc? slot -1 */
    { "pckbd",		"pckbd",	 0, STAR, loc+811,      0, &pspec28 },
/*328: pms* at pckbc? slot -1 */
    { "pms",		"pms",		 0, STAR, loc+815,      0, &pspec28 },
/*329: sysbeep0 at pcppi? */
    { "sysbeep",		"sysbeep",	 0, NORM,     loc,      0, &pspec33 },
/*330: fdc0 at isa? port 0x3f0 size 0 iomem -1 iosiz 0 irq 6 drq 2 drq2 -1 */
    { "fdc",		"fdc_isa",	 0, NORM, loc+ 28,      0, &pspec27 },
/*331: fd* at fdc? drive -1 */
    { "fd",		"fd",		 0, STAR, loc+820,      0, &pspec61 },
/*332: cardslot* at cbb? */
    { "cardslot",	"cardslot",	 0, STAR,     loc,      0, &pspec24 },
/*333: cardbus* at cardslot? */
    { "cardbus",		"cardbus",	 0, STAR,     loc,      0, &pspec25 },
/*334: pcmcia* at cardslot? controller -1 socket -1 */
    { "pcmcia",		"pcmcia",	 0, STAR, loc+753,      0, &pspec26 },
/*335: pcmcom* at pcmcia? function -1 */
    { "pcmcom",		"pcmcom",	 0, STAR, loc+867,      0, &pspec37 },
/*336: cnw* at pcmcia? function -1 */
    { "cnw",		"cnw",		 0, STAR, loc+882,      0, &pspec37 },
/*337: mhzc* at pcmcia? function -1 */
    { "mhzc",		"mhzc",		 0, STAR, loc+764,      0, &pspec37 },
/*338: ray* at pcmcia? function -1 */
    { "ray",		"ray",		 0, STAR, loc+766,      0, &pspec37 },
/*339: xirc* at pcmcia? function -1 */
    { "xirc",		"xirc",		 0, STAR, loc+773,      0, &pspec37 },
/*340: xi* at xirc? */
    { "xi",		"xi_xirc",	 0, STAR,     loc,      0, &pspec64 },
/*341: bt3c* at pcmcia? function -1 */
    { "bt3c",		"bt3c",		 0, STAR, loc+777,      0, &pspec37 },
/*342: btbc* at pcmcia? function -1 */
    { "btbc",		"btbc",		 0, STAR, loc+778,      0, &pspec37 },
/*343: usb* at ehci? */
    { "usb",		"usb",		 0, STAR,     loc,      0, &pspec67 },
/*344: usb* at ohci? */
    { "usb",		"usb",		 0, STAR,     loc,      0, &pspec68 },
/*345: usb* at uhci? */
    { "usb",		"usb",		 0, STAR,     loc,      0, &pspec69 },
/*346: usb* at slhci? */
    { "usb",		"usb",		 0, STAR,     loc,      0, &pspec70 },
/*347: uhub* at usb? */
    { "uhub",		"uroothub",	 0, STAR,     loc,      0, &pspec71 },
/*348: uhub* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uhub",		"uhub",		 0, STAR, loc+371,      0, &pspec72 },
/*349: uaudio* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uaudio",		"uaudio",	 0, STAR, loc+353,      0, &pspec73 },
/*350: uaudio* at usbifif? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uaudio",		"uaudio",	 0, STAR, loc+311,      0, &pspec82 },
/*351: umidi* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "umidi",		"umidi",	 0, STAR, loc+299,      0, &pspec73 },
/*352: ucom* at umodem? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+801,      0, &pspec80 },
/*353: ucom* at ubsa? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+803,      0, &pspec87 },
/*354: ucom* at uchcom? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+805,      0, &pspec88 },
/*355: ucom* at uftdi? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+808,      0, &pspec89 },
/*356: ucom* at uipaq? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+810,      0, &pspec90 },
/*357: ucom* at umct? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+813,      0, &pspec91 },
/*358: ucom* at uplcom? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+816,      0, &pspec92 },
/*359: ucom* at uslsa? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+827,      0, &pspec93 },
/*360: ucom* at uvscom? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+829,      0, &pspec94 },
/*361: ucom* at uvisor? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+830,      0, &pspec95 },
/*362: ucom* at ukyopon? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+832,      0, &pspec96 },
/*363: ucom* at u3g? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+834,      0, &pspec98 },
/*364: ucom* at ugensa? portno -1 */
    { "ucom",		"ucom",		 0, STAR, loc+835,      0, &pspec99 },
/*365: ugen* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ugen",		"ugen",		 0, STAR, loc+293,      0, &pspec72 },
/*366: uhidev* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uhidev",		"uhidev",	 0, STAR, loc+287,      0, &pspec73 },
/*367: uhid* at uhidev? reportid -1 */
    { "uhid",		"uhid",		 0, STAR, loc+846,      0, &pspec74 },
/*368: ukbd* at uhidev? reportid -1 */
    { "ukbd",		"ukbd",		 0, STAR, loc+847,      0, &pspec74 },
/*369: ums* at uhidev? reportid -1 */
    { "ums",		"ums",		 0, STAR, loc+848,      0, &pspec74 },
/*370: uts* at uhidev? reportid -1 */
    { "uts",		"uts",		 0, STAR, loc+849,      0, &pspec74 },
/*371: uep* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uep",		"uep",		 0, STAR, loc+281,      0, &pspec72 },
/*372: ucycom* at uhidev? reportid -1 */
    { "ucycom",		"ucycom",	 0, STAR, loc+851,      0, &pspec74 },
/*373: ulpt* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ulpt",		"ulpt",		 0, STAR, loc+275,      0, &pspec73 },
/*374: umass* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "umass",		"umass",	 0, STAR, loc+269,      0, &pspec73 },
/*375: uirda* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uirda",		"uirda",	 0, STAR, loc+263,      0, &pspec73 },
/*376: stuirda* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "stuirda",		"stuirda",	 0, STAR, loc+257,      0, &pspec73 },
/*377: ustir* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ustir",		"ustir",	 0, STAR, loc+251,      0, &pspec72 },
/*378: irmce* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "irmce",		"irmce",	 0, STAR, loc+245,      0, &pspec73 },
/*379: ubt* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ubt",		"ubt",		 0, STAR, loc+239,      0, &pspec72 },
/*380: aubtfwl* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "aubtfwl",		"aubtfwl",	 0, STAR, loc+233,      0, &pspec72 },
/*381: pseye* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "pseye",		"pseye",	 0, STAR, loc+227,      0, &pspec73 },
/*382: uvideo* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uvideo",		"uvideo",	 0, STAR, loc+221,      0, &pspec73 },
/*383: auvitek* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "auvitek",		"auvitek",	 0, STAR, loc+215,      0, &pspec72 },
/*384: emdtv* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "emdtv",		"emdtv",	 0, STAR, loc+209,      0, &pspec72 },
/*385: urio* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "urio",		"urio",		 0, STAR, loc+203,      0, &pspec72 },
/*386: uipad* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uipad",		"uipad",	 0, STAR, loc+197,      0, &pspec72 },
/*387: uberry* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uberry",		"uberry",	 0, STAR, loc+191,      0, &pspec72 },
/*388: uvisor* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uvisor",		"uvisor",	 0, STAR, loc+185,      0, &pspec72 },
/*389: ugensa* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ugensa",		"ugensa",	 0, STAR, loc+179,      0, &pspec72 },
/*390: u3g* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "u3g",		"u3g",		 0, STAR, loc+173,      0, &pspec73 },
/*391: u3ginit* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "u3ginit",		"u3ginit",	 0, STAR, loc+167,      0, &pspec72 },
/*392: uyap* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uyap",		"uyap",		 0, STAR, loc+161,      0, &pspec72 },
/*393: udsbr* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "udsbr",		"udsbr",	 0, STAR, loc+155,      0, &pspec72 },
/*394: aue* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "aue",		"aue",		 0, STAR, loc+149,      0, &pspec72 },
/*395: cdce* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "cdce",		"cdce",		 0, STAR, loc+143,      0, &pspec73 },
/*396: cue* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "cue",		"cue",		 0, STAR, loc+137,      0, &pspec72 },
/*397: kue* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "kue",		"kue",		 0, STAR, loc+131,      0, &pspec72 },
/*398: upl* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "upl",		"upl",		 0, STAR, loc+125,      0, &pspec72 },
/*399: url* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "url",		"url",		 0, STAR, loc+119,      0, &pspec72 },
/*400: axe* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "axe",		"axe",		 0, STAR, loc+113,      0, &pspec72 },
/*401: udav* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "udav",		"udav",		 0, STAR, loc+107,      0, &pspec72 },
/*402: otus* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "otus",		"otus",		 0, STAR, loc+101,      0, &pspec72 },
/*403: umodem* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "umodem",		"umodem",	 0, STAR, loc+ 83,      0, &pspec73 },
/*404: uftdi* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uftdi",		"uftdi",	 0, STAR, loc+ 77,      0, &pspec72 },
/*405: uplcom* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uplcom",		"uplcom",	 0, STAR, loc+425,      0, &pspec72 },
/*406: umct* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "umct",		"umct",		 0, STAR, loc+419,      0, &pspec72 },
/*407: uvscom* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uvscom",		"uvscom",	 0, STAR, loc+413,      0, &pspec72 },
/*408: ubsa* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ubsa",		"ubsa",		 0, STAR, loc+407,      0, &pspec72 },
/*409: uipaq* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uipaq",		"uipaq",	 0, STAR, loc+401,      0, &pspec72 },
/*410: ukyopon* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "ukyopon",		"ukyopon",	 0, STAR, loc+395,      0, &pspec73 },
/*411: uslsa* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uslsa",		"uslsa",	 0, STAR, loc+389,      0, &pspec73 },
/*412: uchcom* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uchcom",		"uchcom",	 0, STAR, loc+383,      0, &pspec72 },
/*413: uscanner* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uscanner",	"uscanner",	 0, STAR, loc+377,      0, &pspec72 },
/*414: usscanner* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "usscanner",	"usscanner",	 0, STAR, loc+359,      0, &pspec72 },
/*415: atu* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "atu",		"atu",		 0, STAR, loc+365,      0, &pspec72 },
/*416: rum* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "rum",		"rum",		 0, STAR, loc+347,      0, &pspec72 },
/*417: utoppy* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "utoppy",		"utoppy",	 0, STAR, loc+341,      0, &pspec72 },
/*418: zyd* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "zyd",		"zyd",		 0, STAR, loc+335,      0, &pspec72 },
/*419: udl* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "udl",		"udl",		 0, STAR, loc+329,      0, &pspec72 },
/*420: uhso* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "uhso",		"uhso",		 0, STAR, loc+323,      0, &pspec72 },
/*421: urndis* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "urndis",		"urndis",	 0, STAR, loc+317,      0, &pspec73 },
/*422: urtwn* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "urtwn",		"urtwn",	 0, STAR, loc+305,      0, &pspec72 },
/*423: urtw* at uhub? port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    { "urtw",		"urtw",		 0, STAR, loc+ 95,      0, &pspec72 },
/*424: bthub* at bcsp? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec115 },
/*425: bthub* at bt3c? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec116 },
/*426: bthub* at btbc? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec117 },
/*427: bthub* at btuart? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec118 },
/*428: bthub* at sbt? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec119 },
/*429: bthub* at ubt? */
    { "bthub",		"bthub",	 0, STAR,     loc,      0, &pspec120 },
/*430: bthidev* at bthub? */
    { "bthidev",		"bthidev",	 0, STAR,     loc,      0, &pspec121 },
/*431: btkbd* at bthidev? reportid -1 */
    { "btkbd",		"btkbd",	 0, STAR, loc+884,      0, &pspec122 },
/*432: btms* at bthidev? reportid -1 */
    { "btms",		"btms",		 0, STAR, loc+759,      0, &pspec122 },
/*433: btmagic* at bthub? */
    { "btmagic",		"btmagic",	 0, STAR,     loc,      0, &pspec121 },
/*434: btsco* at bthub? */
    { "btsco",		"btsco",	 0, STAR,     loc,      0, &pspec121 },
/*435: sdmmc* at wb? */
    { "sdmmc",		"sdmmc",	 0, STAR,     loc,      0, &pspec13 },
/*436: sdmmc* at sdhc? */
    { "sdmmc",		"sdmmc",	 0, STAR,     loc,      0, &pspec126 },
/*437: sbt* at sdmmc? */
    { "sbt",		"sbt",		 0, STAR,     loc,      0, &pspec114 },
/*438: ieee1394if* at fwohci? */
    { "ieee1394if",	"ieee1394if",	 0, STAR,     loc,      0, &pspec100 },
/*439: fwip* at ieee1394if? euihi -1 euilo -1 */
    { "fwip",		"fwip",		 0, STAR, loc+755,      0, &pspec101 },
/*440: sbp* at ieee1394if? euihi -1 euilo -1 */
    { "sbp",		"sbp",		 0, STAR, loc+757,      0, &pspec101 },
/*441: acpi0 at mainbus0 */
    { "acpi",		"acpi",		 0, NORM,     loc,      0, &pspec5 },
/*442: acpiec* at acpi? */
    { "acpiec",		"acpiec",	 0, STAR,     loc,      0, &pspec6 },
/*443: acpiecdt* at acpi? */
    { "acpiecdt",	"acpiecdt",	 0, STAR,     loc,      0, &pspec7 },
/*444: acpilid* at acpi? */
    { "acpilid",		"acpilid",	 0, STAR,     loc,      0, &pspec6 },
/*445: acpibut* at acpi? */
    { "acpibut",		"acpibut",	 0, STAR,     loc,      0, &pspec6 },
/*446: acpiacad* at acpi? */
    { "acpiacad",	"acpiacad",	 0, STAR,     loc,      0, &pspec6 },
/*447: acpibat* at acpi? */
    { "acpibat",		"acpibat",	 0, STAR,     loc,      0, &pspec6 },
/*448: acpivga* at acpi? */
    { "acpivga",		"acpivga",	 0, STAR,     loc,      0, &pspec6 },
/*449: acpiout* at acpivga? */
    { "acpiout",		"acpiout",	 0, STAR,     loc,      0, &pspec8 },
/*450: acpifan* at acpi? */
    { "acpifan",		"acpifan",	 0, STAR,     loc,      0, &pspec6 },
/*451: acpitz* at acpi? */
    { "acpitz",		"acpitz",	 0, STAR,     loc,      0, &pspec6 },
/*452: acpiwdrt* at acpi? */
    { "acpiwdrt",	"acpiwdrt",	 0, STAR,     loc,      0, &pspec9 },
/*453: asus* at acpi? */
    { "asus",		"asus",		 0, STAR,     loc,      0, &pspec6 },
/*454: sony* at acpi? */
    { "sony",		"sony_acpi",	 0, STAR,     loc,      0, &pspec6 },
/*455: thinkpad* at acpi? */
    { "thinkpad",	"thinkpad",	 0, STAR,     loc,      0, &pspec6 },
/*456: acpidalb* at acpi? */
    { "acpidalb",	"acpidalb",	 0, STAR,     loc,      0, &pspec6 },
/*457: aibs* at acpi? */
    { "aibs",		"aibs",		 0, STAR,     loc,      0, &pspec6 },
/*458: fujbp* at acpi? */
    { "fujbp",		"fujbp",	 0, STAR,     loc,      0, &pspec6 },
/*459: fujhk* at acpi? */
    { "fujhk",		"fujhk",	 0, STAR,     loc,      0, &pspec6 },
/*460: acpiwmi* at acpi? */
    { "acpiwmi",		"acpiwmi",	 0, STAR,     loc,      0, &pspec6 },
/*461: wmidell* at acpiwmibus? */
    { "wmidell",		"wmidell",	 0, STAR,     loc,      0, &pspec14 },
/*462: wmieeepc* at acpiwmibus? */
    { "wmieeepc",	"wmieeepc",	 0, STAR,     loc,      0, &pspec14 },
/*463: wmihp* at acpiwmibus? */
    { "wmihp",		"wmihp",	 0, STAR,     loc,      0, &pspec14 },
/*464: wmimsi* at acpiwmibus? */
    { "wmimsi",		"wmimsi",	 0, STAR,     loc,      0, &pspec14 },
    { NULL,		NULL,		 0, 0,    NULL,      0, NULL }
};

static struct cfattach * const audio_cfattachinit[] = {
	&audio_ca, NULL
};
static struct cfattach * const midi_cfattachinit[] = {
	&midi_ca, &midi_pcppi_ca, NULL
};
static struct cfattach * const video_cfattachinit[] = {
	&video_ca, NULL
};
static struct cfattach * const dtv_cfattachinit[] = {
	&dtv_ca, NULL
};
static struct cfattach * const iic_cfattachinit[] = {
	&iic_ca, NULL
};
static struct cfattach * const irframe_cfattachinit[] = {
	&irframe_ca, NULL
};
static struct cfattach * const cir_cfattachinit[] = {
	&cir_ca, NULL
};
static struct cfattach * const lpt_cfattachinit[] = {
	&lpt_puc_ca, &lpt_isa_ca, NULL
};
static struct cfattach * const tpm_cfattachinit[] = {
	&tpm_isa_ca, NULL
};
static struct cfattach * const ld_cfattachinit[] = {
	&ld_cac_ca, &ld_mlx_ca, &ld_icp_ca, &ld_aac_ca, &ld_ataraid_ca, &ld_iop_ca, &ld_twe_ca, &ld_twa_ca, &ld_amr_ca, &ld_virtio_ca, &ld_sdmmc_ca, NULL
};
static struct cfattach * const acphy_cfattachinit[] = {
	&acphy_ca, NULL
};
static struct cfattach * const amhphy_cfattachinit[] = {
	&amhphy_ca, NULL
};
static struct cfattach * const bmtphy_cfattachinit[] = {
	&bmtphy_ca, NULL
};
static struct cfattach * const brgphy_cfattachinit[] = {
	&brgphy_ca, NULL
};
static struct cfattach * const tlphy_cfattachinit[] = {
	&tlphy_ca, NULL
};
static struct cfattach * const nsphy_cfattachinit[] = {
	&nsphy_ca, NULL
};
static struct cfattach * const nsphyter_cfattachinit[] = {
	&nsphyter_ca, NULL
};
static struct cfattach * const gentbi_cfattachinit[] = {
	&gentbi_ca, NULL
};
static struct cfattach * const glxtphy_cfattachinit[] = {
	&glxtphy_ca, NULL
};
static struct cfattach * const gphyter_cfattachinit[] = {
	&gphyter_ca, NULL
};
static struct cfattach * const qsphy_cfattachinit[] = {
	&qsphy_ca, NULL
};
static struct cfattach * const inphy_cfattachinit[] = {
	&inphy_ca, NULL
};
static struct cfattach * const iophy_cfattachinit[] = {
	&iophy_ca, NULL
};
static struct cfattach * const exphy_cfattachinit[] = {
	&exphy_ca, NULL
};
static struct cfattach * const lxtphy_cfattachinit[] = {
	&lxtphy_ca, NULL
};
static struct cfattach * const makphy_cfattachinit[] = {
	&makphy_ca, NULL
};
static struct cfattach * const icsphy_cfattachinit[] = {
	&icsphy_ca, NULL
};
static struct cfattach * const igphy_cfattachinit[] = {
	&igphy_ca, NULL
};
static struct cfattach * const ikphy_cfattachinit[] = {
	&ikphy_ca, NULL
};
static struct cfattach * const sqphy_cfattachinit[] = {
	&sqphy_ca, NULL
};
static struct cfattach * const tqphy_cfattachinit[] = {
	&tqphy_ca, NULL
};
static struct cfattach * const dmphy_cfattachinit[] = {
	&dmphy_ca, NULL
};
static struct cfattach * const pnaphy_cfattachinit[] = {
	&pnaphy_ca, NULL
};
static struct cfattach * const rgephy_cfattachinit[] = {
	&rgephy_ca, NULL
};
static struct cfattach * const urlphy_cfattachinit[] = {
	&urlphy_ca, NULL
};
static struct cfattach * const ukphy_cfattachinit[] = {
	&ukphy_ca, NULL
};
static struct cfattach * const ciphy_cfattachinit[] = {
	&ciphy_ca, NULL
};
static struct cfattach * const rlphy_cfattachinit[] = {
	&rlphy_ca, NULL
};
static struct cfattach * const atphy_cfattachinit[] = {
	&atphy_ca, NULL
};
static struct cfattach * const ihphy_cfattachinit[] = {
	&ihphy_ca, NULL
};
static struct cfattach * const etphy_cfattachinit[] = {
	&etphy_ca, NULL
};
static struct cfattach * const aic_cfattachinit[] = {
	&aic_pcmcia_ca, NULL
};
static struct cfattach * const ahc_cfattachinit[] = {
	&ahc_pci_ca, &ahc_cardbus_ca, NULL
};
static struct cfattach * const ahd_cfattachinit[] = {
	&ahd_pci_ca, NULL
};
static struct cfattach * const dpt_cfattachinit[] = {
	&dpt_pci_ca, NULL
};
static struct cfattach * const cac_cfattachinit[] = {
	&cac_pci_ca, NULL
};
static struct cfattach * const ciss_cfattachinit[] = {
	&ciss_pci_ca, NULL
};
static struct cfattach * const mlx_cfattachinit[] = {
	&mlx_pci_ca, NULL
};
static struct cfattach * const icp_cfattachinit[] = {
	&icp_pci_ca, NULL
};
static struct cfattach * const icpsp_cfattachinit[] = {
	&icpsp_ca, NULL
};
static struct cfattach * const aac_cfattachinit[] = {
	&aac_pci_ca, NULL
};
static struct cfattach * const adv_cfattachinit[] = {
	&adv_pci_ca, &adv_cardbus_ca, NULL
};
static struct cfattach * const adw_cfattachinit[] = {
	&adw_pci_ca, NULL
};
static struct cfattach * const bha_cfattachinit[] = {
	&bha_pci_ca, NULL
};
static struct cfattach * const iha_cfattachinit[] = {
	&iha_pci_ca, NULL
};
static struct cfattach * const isp_cfattachinit[] = {
	&isp_pci_ca, NULL
};
static struct cfattach * const mfi_cfattachinit[] = {
	&mfi_pci_ca, NULL
};
static struct cfattach * const mpt_cfattachinit[] = {
	&mpt_pci_ca, NULL
};
static struct cfattach * const siop_cfattachinit[] = {
	&siop_pci_ca, NULL
};
static struct cfattach * const esiop_cfattachinit[] = {
	&esiop_pci_ca, NULL
};
static struct cfattach * const an_cfattachinit[] = {
	&an_pci_ca, &an_pcmcia_ca, NULL
};
static struct cfattach * const awi_cfattachinit[] = {
	&awi_pcmcia_ca, NULL
};
static struct cfattach * const wi_cfattachinit[] = {
	&wi_pci_ca, &wi_pcmcia_ca, NULL
};
static struct cfattach * const ath_cfattachinit[] = {
	&ath_pci_ca, &ath_cardbus_ca, NULL
};
static struct cfattach * const atw_cfattachinit[] = {
	&atw_pci_ca, &atw_cardbus_ca, NULL
};
static struct cfattach * const rtw_cfattachinit[] = {
	&rtw_pci_ca, &rtw_cardbus_ca, NULL
};
static struct cfattach * const ral_cfattachinit[] = {
	&ral_pci_ca, &ral_cardbus_ca, &ural_ca, NULL
};
static struct cfattach * const ep_cfattachinit[] = {
	&ep_pci_ca, &ep_pcmcia_ca, NULL
};
static struct cfattach * const ex_cfattachinit[] = {
	&ex_pci_ca, &ex_cardbus_ca, NULL
};
static struct cfattach * const le_cfattachinit[] = {
	&le_pci_ca, NULL
};
static struct cfattach * const hme_cfattachinit[] = {
	&hme_pci_ca, NULL
};
static struct cfattach * const cy_cfattachinit[] = {
	&cy_pci_ca, NULL
};
static struct cfattach * const en_cfattachinit[] = {
	&en_pci_ca, NULL
};
static struct cfattach * const esp_cfattachinit[] = {
	&esp_pcmcia_ca, NULL
};
static struct cfattach * const spc_cfattachinit[] = {
	&spc_pcmcia_ca, NULL
};
static struct cfattach * const ntwoc_cfattachinit[] = {
	&ntwoc_pci_ca, NULL
};
static struct cfattach * const fxp_cfattachinit[] = {
	&fxp_pci_ca, &fxp_cardbus_ca, NULL
};
static struct cfattach * const sm_cfattachinit[] = {
	&sm_pcmcia_ca, &sm_mhzc_ca, NULL
};
static struct cfattach * const epic_cfattachinit[] = {
	&epic_pci_ca, NULL
};
static struct cfattach * const mbe_cfattachinit[] = {
	&mbe_pcmcia_ca, NULL
};
static struct cfattach * const ne_cfattachinit[] = {
	&ne_pci_ca, &ne_pcmcia_ca, NULL
};
static struct cfattach * const com_cfattachinit[] = {
	&com_puc_ca, &com_isa_ca, &com_cardbus_ca, &com_pcmcia_ca, &com_pcmcom_ca, &com_mhzc_ca, &com_xirc_ca, NULL
};
static struct cfattach * const pckbc_cfattachinit[] = {
	&pckbc_isa_ca, &pckbc_acpi_ca, NULL
};
static struct cfattach * const attimer_cfattachinit[] = {
	&attimer_isa_ca, &attimer_acpi_ca, NULL
};
static struct cfattach * const ug_cfattachinit[] = {
	&ug_acpi_ca, NULL
};
static struct cfattach * const esh_cfattachinit[] = {
	&esh_pci_ca, NULL
};
static struct cfattach * const opl_cfattachinit[] = {
	&opl_fms_ca, &opl_eso_ca, &opl_sv_ca, &opl_cmpci_ca, NULL
};
static struct cfattach * const mpu_cfattachinit[] = {
	&mpu_eso_ca, &mpu_cmpci_ca, &mpu_yds_ca, &mpu_acpi_ca, NULL
};
static struct cfattach * const rtk_cfattachinit[] = {
	&rtk_pci_ca, &rtk_cardbus_ca, NULL
};
static struct cfattach * const re_cfattachinit[] = {
	&re_pci_ca, &re_cardbus_ca, NULL
};
static struct cfattach * const wdc_cfattachinit[] = {
	&wdc_isa_ca, &wdc_pcmcia_ca, NULL
};
static struct cfattach * const atabus_cfattachinit[] = {
	&atabus_ca, NULL
};
static struct cfattach * const njata_cfattachinit[] = {
	&njata_cardbus_ca, NULL
};
static struct cfattach * const ahcisata_cfattachinit[] = {
	&ahcisata_pci_ca, &jmahci_ca, NULL
};
static struct cfattach * const siisata_cfattachinit[] = {
	&siisata_pci_ca, &siisata_cardbus_ca, NULL
};
static struct cfattach * const mvsata_cfattachinit[] = {
	&mvsata_pci_ca, NULL
};
static struct cfattach * const tlp_cfattachinit[] = {
	&tlp_pci_ca, &tlp_cardbus_ca, NULL
};
static struct cfattach * const sf_cfattachinit[] = {
	&sf_pci_ca, NULL
};
static struct cfattach * const cs_cfattachinit[] = {
	&cs_pcmcia_ca, NULL
};
static struct cfattach * const hpet_cfattachinit[] = {
	&hpet_acpi_dev_ca, &hpet_acpi_tab_ca, NULL
};
static struct cfattach * const drmdev_cfattachinit[] = {
	&drmdev_ca, NULL
};
static struct cfattach * const inteldrm_cfattachinit[] = {
	&inteldrm_ca, NULL
};
static struct cfattach * const vga_cfattachinit[] = {
	&vga_pci_ca, NULL
};
static struct cfattach * const wsdisplay_cfattachinit[] = {
	&wsdisplay_emul_ca, NULL
};
static struct cfattach * const wskbd_cfattachinit[] = {
	&wskbd_ca, NULL
};
static struct cfattach * const wsmouse_cfattachinit[] = {
	&wsmouse_ca, NULL
};
static struct cfattach * const genfb_cfattachinit[] = {
	&genfb_pci_ca, NULL
};
static struct cfattach * const uhci_cfattachinit[] = {
	&uhci_pci_ca, &uhci_cardbus_ca, NULL
};
static struct cfattach * const ohci_cfattachinit[] = {
	&ohci_pci_ca, &ohci_cardbus_ca, NULL
};
static struct cfattach * const ehci_cfattachinit[] = {
	&ehci_pci_ca, &ehci_cardbus_ca, NULL
};
static struct cfattach * const slhci_cfattachinit[] = {
	&slhci_pcmcia_ca, NULL
};
static struct cfattach * const sdhc_cfattachinit[] = {
	&sdhc_pci_ca, NULL
};
static struct cfattach * const wb_cfattachinit[] = {
	&wb_acpi_ca, NULL
};
static struct cfattach * const mtd_cfattachinit[] = {
	&mtd_pci_ca, NULL
};
static struct cfattach * const radio_cfattachinit[] = {
	&radio_ca, NULL
};
static struct cfattach * const fwohci_cfattachinit[] = {
	&fwohci_pci_ca, &fwohci_cardbus_ca, NULL
};
static struct cfattach * const spic_cfattachinit[] = {
	&spic_acpi_ca, NULL
};
static struct cfattach * const bwi_cfattachinit[] = {
	&bwi_pci_ca, NULL
};
static struct cfattach * const joy_cfattachinit[] = {
	&joy_acpi_ca, NULL
};
static struct cfattach * const cpu_cfattachinit[] = {
	&cpu_ca, NULL
};
static struct cfattach * const acpicpu_cfattachinit[] = {
	&acpicpu_ca, NULL
};
static struct cfattach * const coretemp_cfattachinit[] = {
	&coretemp_ca, NULL
};
static struct cfattach * const est_cfattachinit[] = {
	&est_ca, NULL
};
static struct cfattach * const powernow_cfattachinit[] = {
	&powernow_ca, NULL
};
static struct cfattach * const ioapic_cfattachinit[] = {
	&ioapic_ca, NULL
};
static struct cfattach * const ipmi_cfattachinit[] = {
	&ipmi_ca, NULL
};
static struct cfattach * const scsibus_cfattachinit[] = {
	&scsibus_ca, NULL
};
static struct cfattach * const atapibus_cfattachinit[] = {
	&atapibus_ca, NULL
};
static struct cfattach * const cd_cfattachinit[] = {
	&cd_ca, NULL
};
static struct cfattach * const ch_cfattachinit[] = {
	&ch_ca, NULL
};
static struct cfattach * const sd_cfattachinit[] = {
	&sd_ca, NULL
};
static struct cfattach * const st_cfattachinit[] = {
	&st_scsibus_ca, &st_atapibus_ca, NULL
};
static struct cfattach * const ses_cfattachinit[] = {
	&ses_ca, NULL
};
static struct cfattach * const ss_cfattachinit[] = {
	&ss_ca, NULL
};
static struct cfattach * const uk_cfattachinit[] = {
	&uk_ca, NULL
};
static struct cfattach * const wd_cfattachinit[] = {
	&wd_ca, NULL
};
static struct cfattach * const iop_cfattachinit[] = {
	&iop_pci_ca, NULL
};
static struct cfattach * const iopsp_cfattachinit[] = {
	&iopsp_ca, NULL
};
static struct cfattach * const mainbus_cfattachinit[] = {
	&mainbus_ca, NULL
};
static struct cfattach * const pci_cfattachinit[] = {
	&pci_ca, NULL
};
static struct cfattach * const twe_cfattachinit[] = {
	&twe_ca, NULL
};
static struct cfattach * const twa_cfattachinit[] = {
	&twa_ca, NULL
};
static struct cfattach * const amr_cfattachinit[] = {
	&amr_ca, NULL
};
static struct cfattach * const arcmsr_cfattachinit[] = {
	&arcmsr_ca, NULL
};
static struct cfattach * const mly_cfattachinit[] = {
	&mly_ca, NULL
};
static struct cfattach * const pcscp_cfattachinit[] = {
	&pcscp_ca, NULL
};
static struct cfattach * const mpii_cfattachinit[] = {
	&mpii_ca, NULL
};
static struct cfattach * const fpa_cfattachinit[] = {
	&fpa_ca, NULL
};
static struct cfattach * const pcn_cfattachinit[] = {
	&pcn_ca, NULL
};
static struct cfattach * const trm_cfattachinit[] = {
	&trm_ca, NULL
};
static struct cfattach * const pciide_cfattachinit[] = {
	&pciide_ca, NULL
};
static struct cfattach * const acardide_cfattachinit[] = {
	&acardide_ca, NULL
};
static struct cfattach * const aceride_cfattachinit[] = {
	&aceride_ca, NULL
};
static struct cfattach * const artsata_cfattachinit[] = {
	&artsata_ca, NULL
};
static struct cfattach * const cmdide_cfattachinit[] = {
	&cmdide_ca, NULL
};
static struct cfattach * const cypide_cfattachinit[] = {
	&cypide_ca, NULL
};
static struct cfattach * const hptide_cfattachinit[] = {
	&hptide_ca, NULL
};
static struct cfattach * const iteide_cfattachinit[] = {
	&iteide_ca, NULL
};
static struct cfattach * const jmide_cfattachinit[] = {
	&jmide_ca, NULL
};
static struct cfattach * const optiide_cfattachinit[] = {
	&optiide_ca, NULL
};
static struct cfattach * const piixide_cfattachinit[] = {
	&piixide_ca, NULL
};
static struct cfattach * const pdcsata_cfattachinit[] = {
	&pdcsata_ca, NULL
};
static struct cfattach * const pdcide_cfattachinit[] = {
	&pdcide_ca, NULL
};
static struct cfattach * const svwsata_cfattachinit[] = {
	&svwsata_ca, NULL
};
static struct cfattach * const satalink_cfattachinit[] = {
	&satalink_ca, NULL
};
static struct cfattach * const siside_cfattachinit[] = {
	&siside_ca, NULL
};
static struct cfattach * const slide_cfattachinit[] = {
	&slide_ca, NULL
};
static struct cfattach * const viaide_cfattachinit[] = {
	&viaide_ca, NULL
};
static struct cfattach * const ixpide_cfattachinit[] = {
	&ixpide_ca, NULL
};
static struct cfattach * const toshide_cfattachinit[] = {
	&toshide_ca, NULL
};
static struct cfattach * const ppb_cfattachinit[] = {
	&ppb_ca, NULL
};
static struct cfattach * const cz_cfattachinit[] = {
	&cz_ca, NULL
};
static struct cfattach * const jme_cfattachinit[] = {
	&jme_ca, NULL
};
static struct cfattach * const tl_cfattachinit[] = {
	&tl_ca, NULL
};
static struct cfattach * const lmc_cfattachinit[] = {
	&lmc_ca, NULL
};
static struct cfattach * const bktr_cfattachinit[] = {
	&bktr_ca, NULL
};
static struct cfattach * const clcs_cfattachinit[] = {
	&clcs_ca, NULL
};
static struct cfattach * const clct_cfattachinit[] = {
	&clct_ca, NULL
};
static struct cfattach * const fms_cfattachinit[] = {
	&fms_ca, NULL
};
static struct cfattach * const eap_cfattachinit[] = {
	&eap_ca, NULL
};
static struct cfattach * const auacer_cfattachinit[] = {
	&auacer_ca, NULL
};
static struct cfattach * const auich_cfattachinit[] = {
	&auich_ca, NULL
};
static struct cfattach * const auvia_cfattachinit[] = {
	&auvia_ca, NULL
};
static struct cfattach * const auixp_cfattachinit[] = {
	&auixp_ca, NULL
};
static struct cfattach * const neo_cfattachinit[] = {
	&neo_ca, NULL
};
static struct cfattach * const esa_cfattachinit[] = {
	&esa_ca, NULL
};
static struct cfattach * const eso_cfattachinit[] = {
	&eso_ca, NULL
};
static struct cfattach * const esm_cfattachinit[] = {
	&esm_ca, NULL
};
static struct cfattach * const sv_cfattachinit[] = {
	&sv_ca, NULL
};
static struct cfattach * const cmpci_cfattachinit[] = {
	&cmpci_ca, NULL
};
static struct cfattach * const yds_cfattachinit[] = {
	&yds_ca, NULL
};
static struct cfattach * const emuxki_cfattachinit[] = {
	&emuxki_ca, NULL
};
static struct cfattach * const autri_cfattachinit[] = {
	&autri_ca, NULL
};
static struct cfattach * const puc_cfattachinit[] = {
	&puc_ca, NULL
};
static struct cfattach * const vr_cfattachinit[] = {
	&vr_ca, NULL
};
static struct cfattach * const sip_cfattachinit[] = {
	&sip_ca, NULL
};
static struct cfattach * const gsip_cfattachinit[] = {
	&gsip_ca, NULL
};
static struct cfattach * const stge_cfattachinit[] = {
	&stge_ca, NULL
};
static struct cfattach * const wm_cfattachinit[] = {
	&wm_ca, NULL
};
static struct cfattach * const bge_cfattachinit[] = {
	&bge_ca, NULL
};
static struct cfattach * const bnx_cfattachinit[] = {
	&bnx_ca, NULL
};
static struct cfattach * const ti_cfattachinit[] = {
	&ti_ca, NULL
};
static struct cfattach * const ste_cfattachinit[] = {
	&ste_ca, NULL
};
static struct cfattach * const cbb_cfattachinit[] = {
	&cbb_pci_ca, NULL
};
static struct cfattach * const piixpm_cfattachinit[] = {
	&piixpm_ca, NULL
};
static struct cfattach * const amdpm_cfattachinit[] = {
	&amdpm_ca, NULL
};
static struct cfattach * const hifn_cfattachinit[] = {
	&hifn_ca, NULL
};
static struct cfattach * const ubsec_cfattachinit[] = {
	&ubsec_ca, NULL
};
static struct cfattach * const weasel_cfattachinit[] = {
	&weasel_pci_ca, NULL
};
static struct cfattach * const txp_cfattachinit[] = {
	&txp_ca, NULL
};
static struct cfattach * const skc_cfattachinit[] = {
	&skc_ca, NULL
};
static struct cfattach * const sk_cfattachinit[] = {
	&sk_ca, NULL
};
static struct cfattach * const bce_cfattachinit[] = {
	&bce_ca, NULL
};
static struct cfattach * const dge_cfattachinit[] = {
	&dge_ca, NULL
};
static struct cfattach * const ipw_cfattachinit[] = {
	&ipw_ca, NULL
};
static struct cfattach * const iwi_cfattachinit[] = {
	&iwi_ca, NULL
};
static struct cfattach * const wpi_cfattachinit[] = {
	&wpi_ca, NULL
};
static struct cfattach * const iwn_cfattachinit[] = {
	&iwn_ca, NULL
};
static struct cfattach * const xge_cfattachinit[] = {
	&xge_ca, NULL
};
static struct cfattach * const vge_cfattachinit[] = {
	&vge_ca, NULL
};
static struct cfattach * const nfe_cfattachinit[] = {
	&nfe_ca, NULL
};
static struct cfattach * const mskc_cfattachinit[] = {
	&mskc_ca, NULL
};
static struct cfattach * const msk_cfattachinit[] = {
	&msk_ca, NULL
};
static struct cfattach * const nfsmbc_cfattachinit[] = {
	&nfsmbc_ca, NULL
};
static struct cfattach * const nfsmb_cfattachinit[] = {
	&nfsmb_ca, NULL
};
static struct cfattach * const ichsmb_cfattachinit[] = {
	&ichsmb_ca, NULL
};
static struct cfattach * const age_cfattachinit[] = {
	&age_ca, NULL
};
static struct cfattach * const alc_cfattachinit[] = {
	&alc_ca, NULL
};
static struct cfattach * const ale_cfattachinit[] = {
	&ale_ca, NULL
};
static struct cfattach * const lii_cfattachinit[] = {
	&lii_ca, NULL
};
static struct cfattach * const hdaudio_cfattachinit[] = {
	&hdaudio_pci_ca, NULL
};
static struct cfattach * const hdafg_cfattachinit[] = {
	&hdafg_ca, NULL
};
static struct cfattach * const et_cfattachinit[] = {
	&et_ca, NULL
};
static struct cfattach * const cxdtv_cfattachinit[] = {
	&cxdtv_ca, NULL
};
static struct cfattach * const coram_cfattachinit[] = {
	&coram_ca, NULL
};
static struct cfattach * const virtio_cfattachinit[] = {
	&virtio_ca, NULL
};
static struct cfattach * const viomb_cfattachinit[] = {
	&viomb_ca, NULL
};
static struct cfattach * const vioif_cfattachinit[] = {
	&vioif_ca, NULL
};
static struct cfattach * const agp_cfattachinit[] = {
	&agp_ca, NULL
};
static struct cfattach * const aapic_cfattachinit[] = {
	&aapic_ca, NULL
};
static struct cfattach * const pchb_cfattachinit[] = {
	&pchb_ca, NULL
};
static struct cfattach * const pcib_cfattachinit[] = {
	&pcib_ca, NULL
};
static struct cfattach * const amdtemp_cfattachinit[] = {
	&amdtemp_ca, NULL
};
static struct cfattach * const ichlpcib_cfattachinit[] = {
	&ichlpcib_ca, NULL
};
static struct cfattach * const fwhrng_cfattachinit[] = {
	&fwhrng_ca, NULL
};
static struct cfattach * const isa_cfattachinit[] = {
	&isa_ca, NULL
};
static struct cfattach * const pcppi_cfattachinit[] = {
	&pcppi_ca, &pcppi_acpi_ca, NULL
};
static struct cfattach * const pckbd_cfattachinit[] = {
	&pckbd_ca, NULL
};
static struct cfattach * const pms_cfattachinit[] = {
	&pms_ca, NULL
};
static struct cfattach * const sysbeep_cfattachinit[] = {
	&sysbeep_ca, NULL
};
static struct cfattach * const fdc_cfattachinit[] = {
	&fdc_isa_ca, NULL
};
static struct cfattach * const fd_cfattachinit[] = {
	&fd_ca, NULL
};
static struct cfattach * const cardslot_cfattachinit[] = {
	&cardslot_ca, NULL
};
static struct cfattach * const cardbus_cfattachinit[] = {
	&cardbus_ca, NULL
};
static struct cfattach * const pcmcia_cfattachinit[] = {
	&pcmcia_ca, NULL
};
static struct cfattach * const pcmcom_cfattachinit[] = {
	&pcmcom_ca, NULL
};
static struct cfattach * const cnw_cfattachinit[] = {
	&cnw_ca, NULL
};
static struct cfattach * const mhzc_cfattachinit[] = {
	&mhzc_ca, NULL
};
static struct cfattach * const ray_cfattachinit[] = {
	&ray_ca, NULL
};
static struct cfattach * const xirc_cfattachinit[] = {
	&xirc_ca, NULL
};
static struct cfattach * const xi_cfattachinit[] = {
	&xi_xirc_ca, NULL
};
static struct cfattach * const bt3c_cfattachinit[] = {
	&bt3c_ca, NULL
};
static struct cfattach * const btbc_cfattachinit[] = {
	&btbc_ca, NULL
};
static struct cfattach * const usb_cfattachinit[] = {
	&usb_ca, NULL
};
static struct cfattach * const uhub_cfattachinit[] = {
	&uroothub_ca, &uhub_ca, NULL
};
static struct cfattach * const uaudio_cfattachinit[] = {
	&uaudio_ca, NULL
};
static struct cfattach * const umidi_cfattachinit[] = {
	&umidi_ca, NULL
};
static struct cfattach * const ucom_cfattachinit[] = {
	&ucom_ca, NULL
};
static struct cfattach * const ugen_cfattachinit[] = {
	&ugen_ca, NULL
};
static struct cfattach * const uhidev_cfattachinit[] = {
	&uhidev_ca, NULL
};
static struct cfattach * const uhid_cfattachinit[] = {
	&uhid_ca, NULL
};
static struct cfattach * const ukbd_cfattachinit[] = {
	&ukbd_ca, NULL
};
static struct cfattach * const ums_cfattachinit[] = {
	&ums_ca, NULL
};
static struct cfattach * const uts_cfattachinit[] = {
	&uts_ca, NULL
};
static struct cfattach * const uep_cfattachinit[] = {
	&uep_ca, NULL
};
static struct cfattach * const ucycom_cfattachinit[] = {
	&ucycom_ca, NULL
};
static struct cfattach * const ulpt_cfattachinit[] = {
	&ulpt_ca, NULL
};
static struct cfattach * const umass_cfattachinit[] = {
	&umass_ca, NULL
};
static struct cfattach * const uirda_cfattachinit[] = {
	&uirda_ca, NULL
};
static struct cfattach * const stuirda_cfattachinit[] = {
	&stuirda_ca, NULL
};
static struct cfattach * const ustir_cfattachinit[] = {
	&ustir_ca, NULL
};
static struct cfattach * const irmce_cfattachinit[] = {
	&irmce_ca, NULL
};
static struct cfattach * const ubt_cfattachinit[] = {
	&ubt_ca, NULL
};
static struct cfattach * const aubtfwl_cfattachinit[] = {
	&aubtfwl_ca, NULL
};
static struct cfattach * const pseye_cfattachinit[] = {
	&pseye_ca, NULL
};
static struct cfattach * const uvideo_cfattachinit[] = {
	&uvideo_ca, NULL
};
static struct cfattach * const auvitek_cfattachinit[] = {
	&auvitek_ca, NULL
};
static struct cfattach * const emdtv_cfattachinit[] = {
	&emdtv_ca, NULL
};
static struct cfattach * const urio_cfattachinit[] = {
	&urio_ca, NULL
};
static struct cfattach * const uipad_cfattachinit[] = {
	&uipad_ca, NULL
};
static struct cfattach * const uberry_cfattachinit[] = {
	&uberry_ca, NULL
};
static struct cfattach * const uvisor_cfattachinit[] = {
	&uvisor_ca, NULL
};
static struct cfattach * const ugensa_cfattachinit[] = {
	&ugensa_ca, NULL
};
static struct cfattach * const u3g_cfattachinit[] = {
	&u3g_ca, NULL
};
static struct cfattach * const u3ginit_cfattachinit[] = {
	&u3ginit_ca, NULL
};
static struct cfattach * const uyap_cfattachinit[] = {
	&uyap_ca, NULL
};
static struct cfattach * const udsbr_cfattachinit[] = {
	&udsbr_ca, NULL
};
static struct cfattach * const aue_cfattachinit[] = {
	&aue_ca, NULL
};
static struct cfattach * const cdce_cfattachinit[] = {
	&cdce_ca, NULL
};
static struct cfattach * const cue_cfattachinit[] = {
	&cue_ca, NULL
};
static struct cfattach * const kue_cfattachinit[] = {
	&kue_ca, NULL
};
static struct cfattach * const upl_cfattachinit[] = {
	&upl_ca, NULL
};
static struct cfattach * const url_cfattachinit[] = {
	&url_ca, NULL
};
static struct cfattach * const axe_cfattachinit[] = {
	&axe_ca, NULL
};
static struct cfattach * const udav_cfattachinit[] = {
	&udav_ca, NULL
};
static struct cfattach * const otus_cfattachinit[] = {
	&otus_ca, NULL
};
static struct cfattach * const umodem_cfattachinit[] = {
	&umodem_ca, NULL
};
static struct cfattach * const uftdi_cfattachinit[] = {
	&uftdi_ca, NULL
};
static struct cfattach * const uplcom_cfattachinit[] = {
	&uplcom_ca, NULL
};
static struct cfattach * const umct_cfattachinit[] = {
	&umct_ca, NULL
};
static struct cfattach * const uvscom_cfattachinit[] = {
	&uvscom_ca, NULL
};
static struct cfattach * const ubsa_cfattachinit[] = {
	&ubsa_ca, NULL
};
static struct cfattach * const uipaq_cfattachinit[] = {
	&uipaq_ca, NULL
};
static struct cfattach * const ukyopon_cfattachinit[] = {
	&ukyopon_ca, NULL
};
static struct cfattach * const uslsa_cfattachinit[] = {
	&uslsa_ca, NULL
};
static struct cfattach * const uchcom_cfattachinit[] = {
	&uchcom_ca, NULL
};
static struct cfattach * const uscanner_cfattachinit[] = {
	&uscanner_ca, NULL
};
static struct cfattach * const usscanner_cfattachinit[] = {
	&usscanner_ca, NULL
};
static struct cfattach * const atu_cfattachinit[] = {
	&atu_ca, NULL
};
static struct cfattach * const rum_cfattachinit[] = {
	&rum_ca, NULL
};
static struct cfattach * const utoppy_cfattachinit[] = {
	&utoppy_ca, NULL
};
static struct cfattach * const zyd_cfattachinit[] = {
	&zyd_ca, NULL
};
static struct cfattach * const udl_cfattachinit[] = {
	&udl_ca, NULL
};
static struct cfattach * const uhso_cfattachinit[] = {
	&uhso_ca, NULL
};
static struct cfattach * const urndis_cfattachinit[] = {
	&urndis_ca, NULL
};
static struct cfattach * const urtwn_cfattachinit[] = {
	&urtwn_ca, NULL
};
static struct cfattach * const urtw_cfattachinit[] = {
	&urtw_ca, NULL
};
static struct cfattach * const bthub_cfattachinit[] = {
	&bthub_ca, NULL
};
static struct cfattach * const bthidev_cfattachinit[] = {
	&bthidev_ca, NULL
};
static struct cfattach * const btkbd_cfattachinit[] = {
	&btkbd_ca, NULL
};
static struct cfattach * const btms_cfattachinit[] = {
	&btms_ca, NULL
};
static struct cfattach * const btmagic_cfattachinit[] = {
	&btmagic_ca, NULL
};
static struct cfattach * const btsco_cfattachinit[] = {
	&btsco_ca, NULL
};
static struct cfattach * const sdmmc_cfattachinit[] = {
	&sdmmc_ca, NULL
};
static struct cfattach * const sbt_cfattachinit[] = {
	&sbt_ca, NULL
};
static struct cfattach * const ieee1394if_cfattachinit[] = {
	&ieee1394if_ca, NULL
};
static struct cfattach * const fwip_cfattachinit[] = {
	&fwip_ca, NULL
};
static struct cfattach * const sbp_cfattachinit[] = {
	&sbp_ca, NULL
};
static struct cfattach * const acpi_cfattachinit[] = {
	&acpi_ca, NULL
};
static struct cfattach * const acpiec_cfattachinit[] = {
	&acpiec_ca, NULL
};
static struct cfattach * const acpiecdt_cfattachinit[] = {
	&acpiecdt_ca, NULL
};
static struct cfattach * const acpilid_cfattachinit[] = {
	&acpilid_ca, NULL
};
static struct cfattach * const acpibut_cfattachinit[] = {
	&acpibut_ca, NULL
};
static struct cfattach * const acpiacad_cfattachinit[] = {
	&acpiacad_ca, NULL
};
static struct cfattach * const acpibat_cfattachinit[] = {
	&acpibat_ca, NULL
};
static struct cfattach * const acpivga_cfattachinit[] = {
	&acpivga_ca, NULL
};
static struct cfattach * const acpiout_cfattachinit[] = {
	&acpiout_ca, NULL
};
static struct cfattach * const acpifan_cfattachinit[] = {
	&acpifan_ca, NULL
};
static struct cfattach * const acpitz_cfattachinit[] = {
	&acpitz_ca, NULL
};
static struct cfattach * const acpiwdrt_cfattachinit[] = {
	&acpiwdrt_ca, NULL
};
static struct cfattach * const asus_cfattachinit[] = {
	&asus_ca, NULL
};
static struct cfattach * const sony_cfattachinit[] = {
	&sony_acpi_ca, NULL
};
static struct cfattach * const thinkpad_cfattachinit[] = {
	&thinkpad_ca, NULL
};
static struct cfattach * const acpidalb_cfattachinit[] = {
	&acpidalb_ca, NULL
};
static struct cfattach * const aibs_cfattachinit[] = {
	&aibs_ca, NULL
};
static struct cfattach * const fujbp_cfattachinit[] = {
	&fujbp_ca, NULL
};
static struct cfattach * const fujhk_cfattachinit[] = {
	&fujhk_ca, NULL
};
static struct cfattach * const acpiwmi_cfattachinit[] = {
	&acpiwmi_ca, NULL
};
static struct cfattach * const wmidell_cfattachinit[] = {
	&wmidell_ca, NULL
};
static struct cfattach * const wmieeepc_cfattachinit[] = {
	&wmieeepc_ca, NULL
};
static struct cfattach * const wmihp_cfattachinit[] = {
	&wmihp_ca, NULL
};
static struct cfattach * const wmimsi_cfattachinit[] = {
	&wmimsi_ca, NULL
};

const struct cfattachinit cfattachinit[] = {
	{ "audio", audio_cfattachinit },
	{ "midi", midi_cfattachinit },
	{ "video", video_cfattachinit },
	{ "dtv", dtv_cfattachinit },
	{ "iic", iic_cfattachinit },
	{ "irframe", irframe_cfattachinit },
	{ "cir", cir_cfattachinit },
	{ "lpt", lpt_cfattachinit },
	{ "tpm", tpm_cfattachinit },
	{ "ld", ld_cfattachinit },
	{ "acphy", acphy_cfattachinit },
	{ "amhphy", amhphy_cfattachinit },
	{ "bmtphy", bmtphy_cfattachinit },
	{ "brgphy", brgphy_cfattachinit },
	{ "tlphy", tlphy_cfattachinit },
	{ "nsphy", nsphy_cfattachinit },
	{ "nsphyter", nsphyter_cfattachinit },
	{ "gentbi", gentbi_cfattachinit },
	{ "glxtphy", glxtphy_cfattachinit },
	{ "gphyter", gphyter_cfattachinit },
	{ "qsphy", qsphy_cfattachinit },
	{ "inphy", inphy_cfattachinit },
	{ "iophy", iophy_cfattachinit },
	{ "exphy", exphy_cfattachinit },
	{ "lxtphy", lxtphy_cfattachinit },
	{ "makphy", makphy_cfattachinit },
	{ "icsphy", icsphy_cfattachinit },
	{ "igphy", igphy_cfattachinit },
	{ "ikphy", ikphy_cfattachinit },
	{ "sqphy", sqphy_cfattachinit },
	{ "tqphy", tqphy_cfattachinit },
	{ "dmphy", dmphy_cfattachinit },
	{ "pnaphy", pnaphy_cfattachinit },
	{ "rgephy", rgephy_cfattachinit },
	{ "urlphy", urlphy_cfattachinit },
	{ "ukphy", ukphy_cfattachinit },
	{ "ciphy", ciphy_cfattachinit },
	{ "rlphy", rlphy_cfattachinit },
	{ "atphy", atphy_cfattachinit },
	{ "ihphy", ihphy_cfattachinit },
	{ "etphy", etphy_cfattachinit },
	{ "aic", aic_cfattachinit },
	{ "ahc", ahc_cfattachinit },
	{ "ahd", ahd_cfattachinit },
	{ "dpt", dpt_cfattachinit },
	{ "cac", cac_cfattachinit },
	{ "ciss", ciss_cfattachinit },
	{ "mlx", mlx_cfattachinit },
	{ "icp", icp_cfattachinit },
	{ "icpsp", icpsp_cfattachinit },
	{ "aac", aac_cfattachinit },
	{ "adv", adv_cfattachinit },
	{ "adw", adw_cfattachinit },
	{ "bha", bha_cfattachinit },
	{ "iha", iha_cfattachinit },
	{ "isp", isp_cfattachinit },
	{ "mfi", mfi_cfattachinit },
	{ "mpt", mpt_cfattachinit },
	{ "siop", siop_cfattachinit },
	{ "esiop", esiop_cfattachinit },
	{ "an", an_cfattachinit },
	{ "awi", awi_cfattachinit },
	{ "wi", wi_cfattachinit },
	{ "ath", ath_cfattachinit },
	{ "atw", atw_cfattachinit },
	{ "rtw", rtw_cfattachinit },
	{ "ral", ral_cfattachinit },
	{ "ep", ep_cfattachinit },
	{ "ex", ex_cfattachinit },
	{ "le", le_cfattachinit },
	{ "hme", hme_cfattachinit },
	{ "cy", cy_cfattachinit },
	{ "en", en_cfattachinit },
	{ "esp", esp_cfattachinit },
	{ "spc", spc_cfattachinit },
	{ "ntwoc", ntwoc_cfattachinit },
	{ "fxp", fxp_cfattachinit },
	{ "sm", sm_cfattachinit },
	{ "epic", epic_cfattachinit },
	{ "mbe", mbe_cfattachinit },
	{ "ne", ne_cfattachinit },
	{ "com", com_cfattachinit },
	{ "pckbc", pckbc_cfattachinit },
	{ "attimer", attimer_cfattachinit },
	{ "ug", ug_cfattachinit },
	{ "esh", esh_cfattachinit },
	{ "opl", opl_cfattachinit },
	{ "mpu", mpu_cfattachinit },
	{ "rtk", rtk_cfattachinit },
	{ "re", re_cfattachinit },
	{ "wdc", wdc_cfattachinit },
	{ "atabus", atabus_cfattachinit },
	{ "njata", njata_cfattachinit },
	{ "ahcisata", ahcisata_cfattachinit },
	{ "siisata", siisata_cfattachinit },
	{ "mvsata", mvsata_cfattachinit },
	{ "tlp", tlp_cfattachinit },
	{ "sf", sf_cfattachinit },
	{ "cs", cs_cfattachinit },
	{ "hpet", hpet_cfattachinit },
	{ "drmdev", drmdev_cfattachinit },
	{ "inteldrm", inteldrm_cfattachinit },
	{ "vga", vga_cfattachinit },
	{ "wsdisplay", wsdisplay_cfattachinit },
	{ "wskbd", wskbd_cfattachinit },
	{ "wsmouse", wsmouse_cfattachinit },
	{ "genfb", genfb_cfattachinit },
	{ "uhci", uhci_cfattachinit },
	{ "ohci", ohci_cfattachinit },
	{ "ehci", ehci_cfattachinit },
	{ "slhci", slhci_cfattachinit },
	{ "sdhc", sdhc_cfattachinit },
	{ "wb", wb_cfattachinit },
	{ "mtd", mtd_cfattachinit },
	{ "radio", radio_cfattachinit },
	{ "fwohci", fwohci_cfattachinit },
	{ "spic", spic_cfattachinit },
	{ "bwi", bwi_cfattachinit },
	{ "joy", joy_cfattachinit },
	{ "cpu", cpu_cfattachinit },
	{ "acpicpu", acpicpu_cfattachinit },
	{ "coretemp", coretemp_cfattachinit },
	{ "est", est_cfattachinit },
	{ "powernow", powernow_cfattachinit },
	{ "ioapic", ioapic_cfattachinit },
	{ "ipmi", ipmi_cfattachinit },
	{ "scsibus", scsibus_cfattachinit },
	{ "atapibus", atapibus_cfattachinit },
	{ "cd", cd_cfattachinit },
	{ "ch", ch_cfattachinit },
	{ "sd", sd_cfattachinit },
	{ "st", st_cfattachinit },
	{ "ses", ses_cfattachinit },
	{ "ss", ss_cfattachinit },
	{ "uk", uk_cfattachinit },
	{ "wd", wd_cfattachinit },
	{ "iop", iop_cfattachinit },
	{ "iopsp", iopsp_cfattachinit },
	{ "mainbus", mainbus_cfattachinit },
	{ "pci", pci_cfattachinit },
	{ "twe", twe_cfattachinit },
	{ "twa", twa_cfattachinit },
	{ "amr", amr_cfattachinit },
	{ "arcmsr", arcmsr_cfattachinit },
	{ "mly", mly_cfattachinit },
	{ "pcscp", pcscp_cfattachinit },
	{ "mpii", mpii_cfattachinit },
	{ "fpa", fpa_cfattachinit },
	{ "pcn", pcn_cfattachinit },
	{ "trm", trm_cfattachinit },
	{ "pciide", pciide_cfattachinit },
	{ "acardide", acardide_cfattachinit },
	{ "aceride", aceride_cfattachinit },
	{ "artsata", artsata_cfattachinit },
	{ "cmdide", cmdide_cfattachinit },
	{ "cypide", cypide_cfattachinit },
	{ "hptide", hptide_cfattachinit },
	{ "iteide", iteide_cfattachinit },
	{ "jmide", jmide_cfattachinit },
	{ "optiide", optiide_cfattachinit },
	{ "piixide", piixide_cfattachinit },
	{ "pdcsata", pdcsata_cfattachinit },
	{ "pdcide", pdcide_cfattachinit },
	{ "svwsata", svwsata_cfattachinit },
	{ "satalink", satalink_cfattachinit },
	{ "siside", siside_cfattachinit },
	{ "slide", slide_cfattachinit },
	{ "viaide", viaide_cfattachinit },
	{ "ixpide", ixpide_cfattachinit },
	{ "toshide", toshide_cfattachinit },
	{ "ppb", ppb_cfattachinit },
	{ "cz", cz_cfattachinit },
	{ "jme", jme_cfattachinit },
	{ "tl", tl_cfattachinit },
	{ "lmc", lmc_cfattachinit },
	{ "bktr", bktr_cfattachinit },
	{ "clcs", clcs_cfattachinit },
	{ "clct", clct_cfattachinit },
	{ "fms", fms_cfattachinit },
	{ "eap", eap_cfattachinit },
	{ "auacer", auacer_cfattachinit },
	{ "auich", auich_cfattachinit },
	{ "auvia", auvia_cfattachinit },
	{ "auixp", auixp_cfattachinit },
	{ "neo", neo_cfattachinit },
	{ "esa", esa_cfattachinit },
	{ "eso", eso_cfattachinit },
	{ "esm", esm_cfattachinit },
	{ "sv", sv_cfattachinit },
	{ "cmpci", cmpci_cfattachinit },
	{ "yds", yds_cfattachinit },
	{ "emuxki", emuxki_cfattachinit },
	{ "autri", autri_cfattachinit },
	{ "puc", puc_cfattachinit },
	{ "vr", vr_cfattachinit },
	{ "sip", sip_cfattachinit },
	{ "gsip", gsip_cfattachinit },
	{ "stge", stge_cfattachinit },
	{ "wm", wm_cfattachinit },
	{ "bge", bge_cfattachinit },
	{ "bnx", bnx_cfattachinit },
	{ "ti", ti_cfattachinit },
	{ "ste", ste_cfattachinit },
	{ "cbb", cbb_cfattachinit },
	{ "piixpm", piixpm_cfattachinit },
	{ "amdpm", amdpm_cfattachinit },
	{ "hifn", hifn_cfattachinit },
	{ "ubsec", ubsec_cfattachinit },
	{ "weasel", weasel_cfattachinit },
	{ "txp", txp_cfattachinit },
	{ "skc", skc_cfattachinit },
	{ "sk", sk_cfattachinit },
	{ "bce", bce_cfattachinit },
	{ "dge", dge_cfattachinit },
	{ "ipw", ipw_cfattachinit },
	{ "iwi", iwi_cfattachinit },
	{ "wpi", wpi_cfattachinit },
	{ "iwn", iwn_cfattachinit },
	{ "xge", xge_cfattachinit },
	{ "vge", vge_cfattachinit },
	{ "nfe", nfe_cfattachinit },
	{ "mskc", mskc_cfattachinit },
	{ "msk", msk_cfattachinit },
	{ "nfsmbc", nfsmbc_cfattachinit },
	{ "nfsmb", nfsmb_cfattachinit },
	{ "ichsmb", ichsmb_cfattachinit },
	{ "age", age_cfattachinit },
	{ "alc", alc_cfattachinit },
	{ "ale", ale_cfattachinit },
	{ "lii", lii_cfattachinit },
	{ "hdaudio", hdaudio_cfattachinit },
	{ "hdafg", hdafg_cfattachinit },
	{ "et", et_cfattachinit },
	{ "cxdtv", cxdtv_cfattachinit },
	{ "coram", coram_cfattachinit },
	{ "virtio", virtio_cfattachinit },
	{ "viomb", viomb_cfattachinit },
	{ "vioif", vioif_cfattachinit },
	{ "agp", agp_cfattachinit },
	{ "aapic", aapic_cfattachinit },
	{ "pchb", pchb_cfattachinit },
	{ "pcib", pcib_cfattachinit },
	{ "amdtemp", amdtemp_cfattachinit },
	{ "ichlpcib", ichlpcib_cfattachinit },
	{ "fwhrng", fwhrng_cfattachinit },
	{ "isa", isa_cfattachinit },
	{ "pcppi", pcppi_cfattachinit },
	{ "pckbd", pckbd_cfattachinit },
	{ "pms", pms_cfattachinit },
	{ "sysbeep", sysbeep_cfattachinit },
	{ "fdc", fdc_cfattachinit },
	{ "fd", fd_cfattachinit },
	{ "cardslot", cardslot_cfattachinit },
	{ "cardbus", cardbus_cfattachinit },
	{ "pcmcia", pcmcia_cfattachinit },
	{ "pcmcom", pcmcom_cfattachinit },
	{ "cnw", cnw_cfattachinit },
	{ "mhzc", mhzc_cfattachinit },
	{ "ray", ray_cfattachinit },
	{ "xirc", xirc_cfattachinit },
	{ "xi", xi_cfattachinit },
	{ "bt3c", bt3c_cfattachinit },
	{ "btbc", btbc_cfattachinit },
	{ "usb", usb_cfattachinit },
	{ "uhub", uhub_cfattachinit },
	{ "uaudio", uaudio_cfattachinit },
	{ "umidi", umidi_cfattachinit },
	{ "ucom", ucom_cfattachinit },
	{ "ugen", ugen_cfattachinit },
	{ "uhidev", uhidev_cfattachinit },
	{ "uhid", uhid_cfattachinit },
	{ "ukbd", ukbd_cfattachinit },
	{ "ums", ums_cfattachinit },
	{ "uts", uts_cfattachinit },
	{ "uep", uep_cfattachinit },
	{ "ucycom", ucycom_cfattachinit },
	{ "ulpt", ulpt_cfattachinit },
	{ "umass", umass_cfattachinit },
	{ "uirda", uirda_cfattachinit },
	{ "stuirda", stuirda_cfattachinit },
	{ "ustir", ustir_cfattachinit },
	{ "irmce", irmce_cfattachinit },
	{ "ubt", ubt_cfattachinit },
	{ "aubtfwl", aubtfwl_cfattachinit },
	{ "pseye", pseye_cfattachinit },
	{ "uvideo", uvideo_cfattachinit },
	{ "auvitek", auvitek_cfattachinit },
	{ "emdtv", emdtv_cfattachinit },
	{ "urio", urio_cfattachinit },
	{ "uipad", uipad_cfattachinit },
	{ "uberry", uberry_cfattachinit },
	{ "uvisor", uvisor_cfattachinit },
	{ "ugensa", ugensa_cfattachinit },
	{ "u3g", u3g_cfattachinit },
	{ "u3ginit", u3ginit_cfattachinit },
	{ "uyap", uyap_cfattachinit },
	{ "udsbr", udsbr_cfattachinit },
	{ "aue", aue_cfattachinit },
	{ "cdce", cdce_cfattachinit },
	{ "cue", cue_cfattachinit },
	{ "kue", kue_cfattachinit },
	{ "upl", upl_cfattachinit },
	{ "url", url_cfattachinit },
	{ "axe", axe_cfattachinit },
	{ "udav", udav_cfattachinit },
	{ "otus", otus_cfattachinit },
	{ "umodem", umodem_cfattachinit },
	{ "uftdi", uftdi_cfattachinit },
	{ "uplcom", uplcom_cfattachinit },
	{ "umct", umct_cfattachinit },
	{ "uvscom", uvscom_cfattachinit },
	{ "ubsa", ubsa_cfattachinit },
	{ "uipaq", uipaq_cfattachinit },
	{ "ukyopon", ukyopon_cfattachinit },
	{ "uslsa", uslsa_cfattachinit },
	{ "uchcom", uchcom_cfattachinit },
	{ "uscanner", uscanner_cfattachinit },
	{ "usscanner", usscanner_cfattachinit },
	{ "atu", atu_cfattachinit },
	{ "rum", rum_cfattachinit },
	{ "utoppy", utoppy_cfattachinit },
	{ "zyd", zyd_cfattachinit },
	{ "udl", udl_cfattachinit },
	{ "uhso", uhso_cfattachinit },
	{ "urndis", urndis_cfattachinit },
	{ "urtwn", urtwn_cfattachinit },
	{ "urtw", urtw_cfattachinit },
	{ "bthub", bthub_cfattachinit },
	{ "bthidev", bthidev_cfattachinit },
	{ "btkbd", btkbd_cfattachinit },
	{ "btms", btms_cfattachinit },
	{ "btmagic", btmagic_cfattachinit },
	{ "btsco", btsco_cfattachinit },
	{ "sdmmc", sdmmc_cfattachinit },
	{ "sbt", sbt_cfattachinit },
	{ "ieee1394if", ieee1394if_cfattachinit },
	{ "fwip", fwip_cfattachinit },
	{ "sbp", sbp_cfattachinit },
	{ "acpi", acpi_cfattachinit },
	{ "acpiec", acpiec_cfattachinit },
	{ "acpiecdt", acpiecdt_cfattachinit },
	{ "acpilid", acpilid_cfattachinit },
	{ "acpibut", acpibut_cfattachinit },
	{ "acpiacad", acpiacad_cfattachinit },
	{ "acpibat", acpibat_cfattachinit },
	{ "acpivga", acpivga_cfattachinit },
	{ "acpiout", acpiout_cfattachinit },
	{ "acpifan", acpifan_cfattachinit },
	{ "acpitz", acpitz_cfattachinit },
	{ "acpiwdrt", acpiwdrt_cfattachinit },
	{ "asus", asus_cfattachinit },
	{ "sony", sony_cfattachinit },
	{ "thinkpad", thinkpad_cfattachinit },
	{ "acpidalb", acpidalb_cfattachinit },
	{ "aibs", aibs_cfattachinit },
	{ "fujbp", fujbp_cfattachinit },
	{ "fujhk", fujhk_cfattachinit },
	{ "acpiwmi", acpiwmi_cfattachinit },
	{ "wmidell", wmidell_cfattachinit },
	{ "wmieeepc", wmieeepc_cfattachinit },
	{ "wmihp", wmihp_cfattachinit },
	{ "wmimsi", wmimsi_cfattachinit },
	{ NULL, NULL }
};

const short cfroots[] = {
	213 /* mainbus0 */,
	-1
};

/* pseudo-devices */
void cpuctlattach(int);
void rndattach(int);
void ataraidattach(int);
void cryptoattach(int);
void swcryptoattach(int);
void bioattach(int);
void ccdattach(int);
void cgdattach(int);
void raidattach(int);
void fssattach(int);
void putterattach(int);
void mdattach(int);
void vndattach(int);
void bpfilterattach(int);
void ipfilterattach(int);
void loopattach(int);
void pppattach(int);
void pppoeattach(int);
void slattach(int);
void stripattach(int);
void irframettyattach(int);
void tunattach(int);
void tapattach(int);
void greattach(int);
void gifattach(int);
void stfattach(int);
void vlanattach(int);
void bridgeattach(int);
void agrattach(int);
void accf_dataattach(int);
void accf_httpattach(int);
void ptyattach(int);
void sequencerattach(int);
void clockctlattach(int);
void ksymsattach(int);
void lockstatattach(int);
void bcspattach(int);
void btuartattach(int);
void vcodaattach(int);
void nsmbattach(int);
void wsmuxattach(int);
void wsfontattach(int);
void padattach(int);
void drvctlattach(int);
void veriexecattach(int);

struct pdevinit pdevinit[] = {
	{ cpuctlattach, 1 },
	{ rndattach, 1 },
	{ ataraidattach, 1 },
	{ cryptoattach, 1 },
	{ swcryptoattach, 1 },
	{ bioattach, 1 },
	{ ccdattach, 4 },
	{ cgdattach, 4 },
	{ raidattach, 8 },
	{ fssattach, 1 },
	{ putterattach, 1 },
	{ mdattach, 1 },
	{ vndattach, 1 },
	{ bpfilterattach, 1 },
	{ ipfilterattach, 1 },
	{ loopattach, 1 },
	{ pppattach, 1 },
	{ pppoeattach, 1 },
	{ slattach, 1 },
	{ stripattach, 1 },
	{ irframettyattach, 1 },
	{ tunattach, 1 },
	{ tapattach, 1 },
	{ greattach, 1 },
	{ gifattach, 1 },
	{ stfattach, 1 },
	{ vlanattach, 1 },
	{ bridgeattach, 1 },
	{ agrattach, 1 },
	{ accf_dataattach, 1 },
	{ accf_httpattach, 1 },
	{ ptyattach, 1 },
	{ sequencerattach, 1 },
	{ clockctlattach, 1 },
	{ ksymsattach, 1 },
	{ lockstatattach, 1 },
	{ bcspattach, 1 },
	{ btuartattach, 1 },
	{ vcodaattach, 4 },
	{ nsmbattach, 1 },
	{ wsmuxattach, 1 },
	{ wsfontattach, 1 },
	{ padattach, 1 },
	{ drvctlattach, 1 },
	{ veriexecattach, 1 },
	{ 0, 0 }
};
