#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class IOException;
}
namespace java::net
{
	class InetSocketAddress;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::net
{
	class URI;
}

namespace java::net
{
	class ProxySelector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProxySelector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProxySelector(QAndroidJniObject obj);
		
		// Constructors
		ProxySelector();
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject of(java::net::InetSocketAddress arg0);
		static void setDefault(java::net::ProxySelector arg0);
		void connectFailed(java::net::URI arg0, java::net::SocketAddress arg1, java::io::IOException arg2);
		QAndroidJniObject select(java::net::URI arg0);
	};
} // namespace java::net

