#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class NetworkRequest;
}
namespace android::net
{
	class NetworkSpecifier;
}

namespace android::net
{
	class NetworkRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkRequest_Builder(QAndroidJniObject obj);
		// Constructors
		NetworkRequest_Builder();
		
		// Methods
		QAndroidJniObject addCapability(jint arg0);
		QAndroidJniObject addTransportType(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject removeCapability(jint arg0);
		QAndroidJniObject removeTransportType(jint arg0);
		QAndroidJniObject setNetworkSpecifier(android::net::NetworkSpecifier arg0);
		QAndroidJniObject setNetworkSpecifier(jstring arg0);
	};
} // namespace android::net

