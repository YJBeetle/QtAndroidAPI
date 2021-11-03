#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}

namespace javax::net
{
	class SocketFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::SocketFactory getDefault();
		java::net::Socket createSocket() const;
		java::net::Socket createSocket(JString arg0, jint arg1) const;
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1) const;
		java::net::Socket createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const;
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const;
	};
} // namespace javax::net

