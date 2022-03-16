#include "../PasspointConfiguration.hpp"
#include "../../../../../JString.hpp"
#include "./PpsMoParser.hpp"

namespace android::net::wifi::hotspot2::omadm
{
	// Fields
	
	// Constructors
	
	// Methods
	android::net::wifi::hotspot2::PasspointConfiguration PpsMoParser::parseMoText(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.hotspot2.omadm.PpsMoParser",
			"parseMoText",
			"(Ljava/lang/String;)Landroid/net/wifi/hotspot2/PasspointConfiguration;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::hotspot2::omadm

