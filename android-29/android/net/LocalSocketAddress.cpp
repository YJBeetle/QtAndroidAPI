#include "./LocalSocketAddress_Namespace.hpp"
#include "./LocalSocketAddress.hpp"

namespace android::net
{
	// Fields
	
	LocalSocketAddress::LocalSocketAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocalSocketAddress::LocalSocketAddress(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LocalSocketAddress::LocalSocketAddress(jstring arg0, android::net::LocalSocketAddress_Namespace arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring LocalSocketAddress::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalSocketAddress::getNamespace()
	{
		return __thiz.callObjectMethod(
			"getNamespace",
			"()Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace android::net

