#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Authenticator_RequestorType.hpp"

namespace java::net
{
	// Fields
	java::net::Authenticator_RequestorType Authenticator_RequestorType::PROXY()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"PROXY",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	java::net::Authenticator_RequestorType Authenticator_RequestorType::SERVER()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"SERVER",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	
	// QAndroidJniObject forward
	Authenticator_RequestorType::Authenticator_RequestorType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::net::Authenticator_RequestorType Authenticator_RequestorType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			arg0.object<jstring>()
		);
	}
	JArray Authenticator_RequestorType::values()
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"values",
			"()[Ljava/net/Authenticator$RequestorType;"
		);
	}
} // namespace java::net

