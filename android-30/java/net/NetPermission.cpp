#include "../../JString.hpp"
#include "./NetPermission.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	NetPermission::NetPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	NetPermission::NetPermission(JString arg0)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NetPermission::NetPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

