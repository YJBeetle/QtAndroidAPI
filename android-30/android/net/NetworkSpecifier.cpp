#include "./NetworkSpecifier.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	NetworkSpecifier::NetworkSpecifier(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkSpecifier::NetworkSpecifier()
		: __JniBaseClass(
			"android.net.NetworkSpecifier",
			"()V"
		) {}
	
	// Methods
} // namespace android::net

