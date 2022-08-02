b = ''
with open("/home/ezio-sarthak/Downloads/CS307_Project/configuration", "r") as f:
	b = f.readlines()
b = ''.join(b)
with open("/proc/mouseges_proc_file.txt", 'w+') as f:
	f.write(b)
exit()
