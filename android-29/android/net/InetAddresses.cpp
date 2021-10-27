#include "../../java/net/InetAddress.hpp"
#include "./InetAddresses.hpp"

namespace android::net
{
	// Fields
	
	InetAddresses::InetAddresses(QAndroidJniObject obj) { __thiz = obj; }
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
	jboolean InetAddresses::isNumericAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject InetAddresses::parseNumericAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::net

