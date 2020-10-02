#pragma once
#ifndef __PLUGIN_SETTINGS__
#define __PLUGIN_SETTINGS__
#ifndef PLUGIN_EXPORTS
#define PLUGIN_API__declspec(dllexport)
#elif PLUGIN_IMPORTS
#define PLUGIN_API__declspec(dllimport)
#else
#define PLUGIN_API
#endif
#endif /* defined (_PLUGIN_SETTINGS__) */