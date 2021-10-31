#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Authenticator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Authenticator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Authenticator(QJniObject obj);
		
		// Constructors
		Authenticator();
		
		// Methods
		static java::net::Authenticator getDefault();
		static java::net::PasswordAuthentication requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		static java::net::PasswordAuthentication requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5);
		static java::net::PasswordAuthentication requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
		static java::net::PasswordAuthentication requestPasswordAuthentication(java::net::Authenticator arg0, jstring arg1, java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8);
		static void setDefault(java::net::Authenticator arg0);
		java::net::PasswordAuthentication requestPasswordAuthenticationInstance(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7);
	};
} // namespace java::net

