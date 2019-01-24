#include "synthlib.h"

int main(int argc, char **argv) {
	if(argc != 2) {
		println("htmltemplate <file>\n");
		return -1;
	}

	write(argv[1], "<!DOCTYPE html>\n<html lang=\"en\">\n\t<head>\n\t\t<title></title>\n\t\t<meta charset=\"utf-8\">\n\t</head>\n\n\t<body>\n\t\t<header>\n\n\t\t</header>\n\n\t\t<nav>\n\n\t\t</nav>\n\n\t\t<main>\n\n\t\t</main>\n\n\t\t<footer>\n\n\t\t</footer>\n\t</body>\n</html>");


	return 0;
}
