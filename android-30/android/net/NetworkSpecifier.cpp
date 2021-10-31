#include "./NetworkSpecifier.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkSpecifier::NetworkSpecifier(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkSpecifier::NetworkSpecifier()
		: __JniBaseClass(
			"android.net.NetworkSpecifier",
			"()V"
		) {}
	
	// Methods
} // namespace android::net

