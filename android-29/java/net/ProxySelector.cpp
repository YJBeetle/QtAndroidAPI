#include "../io/IOException.hpp"
#include "./InetSocketAddress.hpp"
#include "./SocketAddress.hpp"
#include "./URI.hpp"
#include "./ProxySelector.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ProxySelector::ProxySelector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProxySelector::ProxySelector()
		: JObject(
			"java.net.ProxySelector",
			"()V"
		) {}
	
	// Methods
	java::net::ProxySelector ProxySelector::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.ProxySelector",
			"getDefault",
			"()Ljava/net/ProxySelector;"
		);
	}
	java::net::ProxySelector ProxySelector::of(java::net::InetSocketAddress arg0)
	{
		return callStaticObjectMethod(
			"java.net.ProxySelector",
			"of",
			"(Ljava/net/InetSocketAddress;)Ljava/net/ProxySelector;",
			arg0.object()
		);
	}
	void ProxySelector::setDefault(java::net::ProxySelector arg0)
	{
		callStaticMethod<void>(
			"java.net.ProxySelector",
			"setDefault",
			"(Ljava/net/ProxySelector;)V",
			arg0.object()
		);
	}
	void ProxySelector::connectFailed(java::net::URI arg0, java::net::SocketAddress arg1, java::io::IOException arg2)
	{
		callMethod<void>(
			"connectFailed",
			"(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject ProxySelector::select(java::net::URI arg0)
	{
		return callObjectMethod(
			"select",
			"(Ljava/net/URI;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace java::net

