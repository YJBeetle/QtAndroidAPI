#include "./NetworkSpecifier.hpp"

namespace android::net
{
	// Fields
	
	NetworkSpecifier::NetworkSpecifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkSpecifier::NetworkSpecifier()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkSpecifier",
			"()V"
		);
	}
	
	// Methods
} // namespace android::net

