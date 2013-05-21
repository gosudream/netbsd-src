/* option `ACPI_BREAKPOINT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_BREAKPOINT
 .global _KERNEL_OPT_ACPI_BREAKPOINT
 .equiv _KERNEL_OPT_ACPI_BREAKPOINT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_BREAKPOINT\n .global _KERNEL_OPT_ACPI_BREAKPOINT\n .equiv _KERNEL_OPT_ACPI_BREAKPOINT,0x6e074def\n .endif");
#endif
#define	ACPI_SCANPCI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_SCANPCI
 .global _KERNEL_OPT_ACPI_SCANPCI
 .equiv _KERNEL_OPT_ACPI_SCANPCI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_SCANPCI\n .global _KERNEL_OPT_ACPI_SCANPCI\n .equiv _KERNEL_OPT_ACPI_SCANPCI,0x1\n .endif");
#endif
/* option `ACPI_DSDT_OVERRIDE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_DSDT_OVERRIDE
 .global _KERNEL_OPT_ACPI_DSDT_OVERRIDE
 .equiv _KERNEL_OPT_ACPI_DSDT_OVERRIDE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_DSDT_OVERRIDE\n .global _KERNEL_OPT_ACPI_DSDT_OVERRIDE\n .equiv _KERNEL_OPT_ACPI_DSDT_OVERRIDE,0x6e074def\n .endif");
#endif
/* option `ACPI_ACTIVATE_DEV' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_ACTIVATE_DEV
 .global _KERNEL_OPT_ACPI_ACTIVATE_DEV
 .equiv _KERNEL_OPT_ACPI_ACTIVATE_DEV,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_ACTIVATE_DEV\n .global _KERNEL_OPT_ACPI_ACTIVATE_DEV\n .equiv _KERNEL_OPT_ACPI_ACTIVATE_DEV,0x6e074def\n .endif");
#endif
/* option `ACPI_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_DEBUG
 .global _KERNEL_OPT_ACPI_DEBUG
 .equiv _KERNEL_OPT_ACPI_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_DEBUG\n .global _KERNEL_OPT_ACPI_DEBUG\n .equiv _KERNEL_OPT_ACPI_DEBUG,0x6e074def\n .endif");
#endif
/* option `ACPIVERBOSE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPIVERBOSE
 .global _KERNEL_OPT_ACPIVERBOSE
 .equiv _KERNEL_OPT_ACPIVERBOSE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPIVERBOSE\n .global _KERNEL_OPT_ACPIVERBOSE\n .equiv _KERNEL_OPT_ACPIVERBOSE,0x6e074def\n .endif");
#endif
/* option `ACPI_DSDT_FILE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_DSDT_FILE
 .global _KERNEL_OPT_ACPI_DSDT_FILE
 .equiv _KERNEL_OPT_ACPI_DSDT_FILE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_DSDT_FILE\n .global _KERNEL_OPT_ACPI_DSDT_FILE\n .equiv _KERNEL_OPT_ACPI_DSDT_FILE,0x6e074def\n .endif");
#endif
#define	ACPI_BLACKLIST_YEAR	2000
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ACPI_BLACKLIST_YEAR
 .global _KERNEL_OPT_ACPI_BLACKLIST_YEAR
 .equiv _KERNEL_OPT_ACPI_BLACKLIST_YEAR,0x7d0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ACPI_BLACKLIST_YEAR\n .global _KERNEL_OPT_ACPI_BLACKLIST_YEAR\n .equiv _KERNEL_OPT_ACPI_BLACKLIST_YEAR,0x7d0\n .endif");
#endif
