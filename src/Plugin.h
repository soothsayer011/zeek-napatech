#ifndef BRO_PLUGIN_BRO_NAPATECH
#define BRO_PLUGIN_BRO_NAPATECH
#pragma once

#include <zeek/plugin/Plugin.h>

namespace plugin {
namespace Bro_Napatech {

class Plugin : public zeek::plugin::Plugin
{
protected:
	// Overridden from zeek::plugin::Plugin.
	zeek::plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}
#endif
