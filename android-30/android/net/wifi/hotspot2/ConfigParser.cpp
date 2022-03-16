#include "../../../../JByteArray.hpp"
#include "./PasspointConfiguration.hpp"
#include "../../../../JString.hpp"
#include "./ConfigParser.hpp"

namespace android::net::wifi::hotspot2
{
	// Fields
	
	// Constructors
	
	// Methods
	android::net::wifi::hotspot2::PasspointConfiguration ConfigParser::parsePasspointConfig(JString arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.hotspot2.ConfigParser",
			"parsePasspointConfig",
			"(Ljava/lang/String;[B)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi::hotspot2

