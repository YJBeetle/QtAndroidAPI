#include "./NetworkRequest.hpp"
#include "./NetworkSpecifier.hpp"
#include "./NetworkRequest_Builder.hpp"

namespace android::net
{
	// Fields
	
	NetworkRequest_Builder::NetworkRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkRequest_Builder::NetworkRequest_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject NetworkRequest_Builder::addCapability(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject NetworkRequest_Builder::addTransportType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject NetworkRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/NetworkRequest;"
		);
	}
	QAndroidJniObject NetworkRequest_Builder::removeCapability(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeCapability",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject NetworkRequest_Builder::removeTransportType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeTransportType",
			"(I)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject NetworkRequest_Builder::setNetworkSpecifier(android::net::NetworkSpecifier arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkSpecifier",
			"(Landroid/net/NetworkSpecifier;)Landroid/net/NetworkRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NetworkRequest_Builder::setNetworkSpecifier(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkSpecifier",
			"(Ljava/lang/String;)Landroid/net/NetworkRequest$Builder;",
			arg0
		);
	}
} // namespace android::net

