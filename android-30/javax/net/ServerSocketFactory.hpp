#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class ServerSocket;
}

namespace javax::net
{
	class ServerSocketFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServerSocketFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocketFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ServerSocketFactory getDefault();
		java::net::ServerSocket createServerSocket() const;
		java::net::ServerSocket createServerSocket(jint arg0) const;
		java::net::ServerSocket createServerSocket(jint arg0, jint arg1) const;
		java::net::ServerSocket createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2) const;
	};
} // namespace javax::net

