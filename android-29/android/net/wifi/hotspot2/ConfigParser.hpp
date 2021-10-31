#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace android::net::wifi::hotspot2
{
	class ConfigParser : public __JniBaseClass
	{
	public:
		// Fields
		
		ConfigParser(QAndroidJniObject obj);
		// Constructors
		ConfigParser() = default;
		
		// Methods
		static QAndroidJniObject parsePasspointConfig(jstring arg0, jbyteArray arg1);
	};
} // namespace android::net::wifi::hotspot2

