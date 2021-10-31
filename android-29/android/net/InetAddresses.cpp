#include "../../java/net/InetAddress.hpp"
#include "./InetAddresses.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	InetAddresses::InetAddresses(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean InetAddresses::isNumericAddress(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	java::net::InetAddress InetAddresses::parseNumericAddress(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
} // namespace android::net

