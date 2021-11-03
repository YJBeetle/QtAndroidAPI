#include "./LocalSocketAddress_Namespace.hpp"
#include "./LocalSocketAddress.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	LocalSocketAddress::LocalSocketAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocalSocketAddress::LocalSocketAddress(jstring arg0)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LocalSocketAddress::LocalSocketAddress(jstring arg0, android::net::LocalSocketAddress_Namespace arg1)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jstring LocalSocketAddress::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::LocalSocketAddress_Namespace LocalSocketAddress::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace android::net

