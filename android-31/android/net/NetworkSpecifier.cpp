#include "./NetworkSpecifier.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	NetworkSpecifier::NetworkSpecifier(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkSpecifier::NetworkSpecifier()
		: JObject(
			"android.net.NetworkSpecifier",
			"()V"
		) {}
	
	// Methods
} // namespace android::net

