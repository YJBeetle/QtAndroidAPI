#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Proxy_Type.hpp"

namespace java::net
{
	// Fields
	java::net::Proxy_Type Proxy_Type::DIRECT()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"DIRECT",
			"Ljava/net/Proxy$Type;"
		);
	}
	java::net::Proxy_Type Proxy_Type::HTTP()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"HTTP",
			"Ljava/net/Proxy$Type;"
		);
	}
	java::net::Proxy_Type Proxy_Type::SOCKS()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"SOCKS",
			"Ljava/net/Proxy$Type;"
		);
	}
	
	// QJniObject forward
	Proxy_Type::Proxy_Type(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::net::Proxy_Type Proxy_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.Proxy$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Proxy$Type;",
			arg0.object<jstring>()
		);
	}
	JArray Proxy_Type::values()
	{
		return callStaticObjectMethod(
			"java.net.Proxy$Type",
			"values",
			"()[Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

