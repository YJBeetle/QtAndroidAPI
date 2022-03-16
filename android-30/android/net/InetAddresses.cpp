#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./InetAddresses.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean InetAddresses::isNumericAddress(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	java::net::InetAddress InetAddresses::parseNumericAddress(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net

