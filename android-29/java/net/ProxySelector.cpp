#include "../io/IOException.hpp"
#include "./InetSocketAddress.hpp"
#include "./SocketAddress.hpp"
#include "./URI.hpp"
#include "./ProxySelector.hpp"

namespace java::net
{
	// Fields
	
	ProxySelector::ProxySelector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProxySelector::ProxySelector()
	{
		__thiz = QAndroidJniObject(
			"java.net.ProxySelector",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ProxySelector::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ProxySelector",
			"getDefault",
			"()Ljava/net/ProxySelector;"
		);
	}
	QAndroidJniObject ProxySelector::of(java::net::InetSocketAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ProxySelector",
			"of",
			"(Ljava/net/InetSocketAddress;)Ljava/net/ProxySelector;",
			arg0.__jniObject().object()
		);
	}
	void ProxySelector::setDefault(java::net::ProxySelector arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ProxySelector",
			"setDefault",
			"(Ljava/net/ProxySelector;)V",
			arg0.__jniObject().object()
		);
	}
	void ProxySelector::connectFailed(java::net::URI arg0, java::net::SocketAddress arg1, java::io::IOException arg2)
	{
		__thiz.callMethod<void>(
			"connectFailed",
			"(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ProxySelector::select(java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"select",
			"(Ljava/net/URI;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::net

