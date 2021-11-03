#include "./PasspointConfiguration.hpp"
#include "./ConfigParser.hpp"

namespace android::net::wifi::hotspot2
{
	// Fields
	
	// QAndroidJniObject forward
	ConfigParser::ConfigParser(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::hotspot2::PasspointConfiguration ConfigParser::parsePasspointConfig(jstring arg0, jbyteArray arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.hotspot2.ConfigParser",
			"parsePasspointConfig",
			"(Ljava/lang/String;[B)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0,
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2

