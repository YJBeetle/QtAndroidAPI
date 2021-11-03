#include "./NetworkSpecifier.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkSpecifier::NetworkSpecifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkSpecifier::NetworkSpecifier()
		: JObject(
			"android.net.NetworkSpecifier",
			"()V"
		) {}
	
	// Methods
} // namespace android::net

