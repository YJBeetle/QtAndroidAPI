#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class Proxy_Type;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		static java::net::Proxy NO_PROXY();
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QJniObject obj);
		
		// Constructors
		Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1);
		
		// Methods
		java::net::SocketAddress address();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		java::net::Proxy_Type type();
	};
} // namespace java::net

