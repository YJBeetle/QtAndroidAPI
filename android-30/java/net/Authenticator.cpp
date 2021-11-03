#include "./Authenticator_RequestorType.hpp"
#include "./InetAddress.hpp"
#include "./PasswordAuthentication.hpp"
#include "./URL.hpp"
#include "./Authenticator.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	Authenticator::Authenticator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Authenticator::Authenticator()
		: JObject(
			"java.net.Authenticator",
			"()V"
		) {}
	
	// Methods
	java::net::Authenticator Authenticator::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"getDefault",
			"()Ljava/net/Authenticator;"
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object(),
			arg7.object()
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(java::net::Authenticator arg0, jstring arg1, java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object(),
			arg8.object()
		);
	}
	void Authenticator::setDefault(java::net::Authenticator arg0)
	{
		callStaticMethod<void>(
			"java.net.Authenticator",
			"setDefault",
			"(Ljava/net/Authenticator;)V",
			arg0.object()
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthenticationInstance(jstring arg0, java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return callObjectMethod(
			"requestPasswordAuthenticationInstance",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object(),
			arg7.object()
		);
	}
} // namespace java::net

