#define PASSWORD "qwerty\n"

// Secret files will crypt or decrypt upon detecting change in usb state.
static char *secret_apps[] = {
    "/home/aleksandrandreev/loadable_kernel_module/code/file.txt",
	NULL,
};
