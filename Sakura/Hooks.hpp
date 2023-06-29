#pragma once

#include <Windows.h>

inline WNDPROC originalWndProc;

class Hooks {
public:
	void install() noexcept;
	void uninstall() noexcept;
};
