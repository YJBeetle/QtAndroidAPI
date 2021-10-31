#include "../../java/net/InetAddress.hpp"
#include "./InetAddresses.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	InetAddresses::InetAddresses(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean InetAddresses::isNumericAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject InetAddresses::parseNumericAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
} // namespace android::net

