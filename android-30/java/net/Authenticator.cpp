#include "../../JString.hpp"
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
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(java::net::InetAddress arg0, jint arg1, JString arg2, JString arg3, JString arg4)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object(),
			arg7.object()
		);
	}
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthentication(java::net::Authenticator arg0, JString arg1, java::net::InetAddress arg2, jint arg3, JString arg4, JString arg5, JString arg6, java::net::URL arg7, java::net::Authenticator_RequestorType arg8)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
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
	java::net::PasswordAuthentication Authenticator::requestPasswordAuthenticationInstance(JString arg0, java::net::InetAddress arg1, jint arg2, JString arg3, JString arg4, JString arg5, java::net::URL arg6, java::net::Authenticator_RequestorType arg7) const
	{
		return callObjectMethod(
			"requestPasswordAuthenticationInstance",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object(),
			arg7.object()
		);
	}
} // namespace java::net

