#include "./Proxy_Type.hpp"
#include "./SocketAddress.hpp"
#include "./Proxy.hpp"

namespace java::net
{
	// Fields
	QAndroidJniObject Proxy::NO_PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy",
			"NO_PROXY",
			"Ljava/net/Proxy;"
		);
	}
	
	Proxy::Proxy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Proxy::Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Proxy",
			"(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Proxy::address()
	{
		return __thiz.callObjectMethod(
			"address",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Proxy::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Proxy::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Proxy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Proxy::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

