#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./NetworkInterface.hpp"
#include "./Inet6Address.hpp"

namespace java::net
{
	// Fields
	
	Inet6Address::Inet6Address(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(const QString &arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(const QString &arg0, jbyteArray arg1, java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Inet6Address::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Inet6Address::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jstring Inet6Address::getHostAddress()
	{
		return __thiz.callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Inet6Address::getScopeId()
	{
		return __thiz.callMethod<jint>(
			"getScopeId",
			"()I"
		);
	}
	QAndroidJniObject Inet6Address::getScopedInterface()
	{
		return __thiz.callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jint Inet6Address::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Inet6Address::isAnyLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isIPv4CompatibleAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLinkLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLoopbackAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCLinkLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCNodeLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCOrgLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCSiteLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMulticastAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isSiteLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

