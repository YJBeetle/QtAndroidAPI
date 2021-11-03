#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./StandardProtocolFamily.hpp"

namespace java::net
{
	// Fields
	java::net::StandardProtocolFamily StandardProtocolFamily::INET()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	java::net::StandardProtocolFamily StandardProtocolFamily::INET6()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET6",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	java::net::StandardProtocolFamily StandardProtocolFamily::UNIX()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"UNIX",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	
	// QAndroidJniObject forward
	StandardProtocolFamily::StandardProtocolFamily(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::net::StandardProtocolFamily StandardProtocolFamily::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;",
			arg0.object<jstring>()
		);
	}
	JArray StandardProtocolFamily::values()
	{
		return callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"values",
			"()[Ljava/net/StandardProtocolFamily;"
		);
	}
} // namespace java::net

