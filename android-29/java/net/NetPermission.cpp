#include "./NetPermission.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	NetPermission::NetPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	NetPermission::NetPermission(jstring arg0)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NetPermission::NetPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::net

