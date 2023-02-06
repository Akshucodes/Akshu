{ pkgs }: {
	deps = [
		pkgs.yarn
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}