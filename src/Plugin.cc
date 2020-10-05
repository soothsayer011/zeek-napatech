
#include "Plugin.h"
#include "Napatech.h"
#include "iosource/Component.h"

namespace plugin { namespace Bro_Napatech { Plugin plugin; } }

using namespace plugin::Bro_Napatech;

zeek::plugin::Configuration Plugin::Configure()
	{
	AddComponent(new ::iosource::PktSrcComponent("NapatechReader", "napatech", ::iosource::PktSrcComponent::LIVE, ::iosource::pktsrc::NapatechSource::InstantiateNapatech));
	zeek::plugin::Configuration config;
	config.name = "Bro::Napatech";
	config.description = "Packet acquisition via Napatech NTAPI";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
