PREFERRED_VERSION_linux-hd = "4.10.12"

IMAGE_CLASSES += " hd-emmc_image_multi"
IMAGE_FSTYPES += " hdemmc tar.bz2"
IMAGE_ROOTFS_SIZE ?= "196608"

TARGET_ARCH = "arm"
DEFAULTTUNE = "cortexa15hf-neon-vfpv4"

require conf/machine/include/tune-cortexa15.inc
require conf/machine/include/hd.inc

MACHINE_EXTRA_RRECOMMENDS += " \
	resizerootfs \
	"
