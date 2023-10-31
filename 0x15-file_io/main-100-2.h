#ifndef GT_XTRAAB
#define GT_XTRAAB
/**
 * cls_fl - ...
 * @olf: ...
*/
void cls_fl(int olf)
{
	if (close(olf) == -1)
	{
		dBALOO(STDERR_FILENO,
			"Error: Can't close fd %d\n", olf);
		exit(98);
	}
}
#endif
