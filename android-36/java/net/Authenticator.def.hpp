#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::net
{
	class Authenticator_RequestorType;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class PasswordAuthentication;
}
namespace java::net
{
	class URL;
}

namespace java::net
{
	class Authenticator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Authenticator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Authenticator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Authenticator();
		
		// Methods
		static java::net::Authenticator getDefault();
		static java::net::PasswordAuthentication requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, JString arg2, JString arg3, JString arg4);
		static java::net::PasswordAuthentication requestPasswordAuthentication(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5);
		static java::net::PasswordAuthentication requestPasswordAuthentication(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
		static java::net::PasswordAuthentication requestPasswordAuthentication(java::net::Authenticator arg0, JString arg1, java::net::InetAddress arg2, jint arg3, JString arg4, JString arg5, JString arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8);
		static void setDefault(java::net::Authenticator arg0);
		java::net::PasswordAuthentication requestPasswordAuthenticationInstance(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7) const;
	};
} // namespace java::net

