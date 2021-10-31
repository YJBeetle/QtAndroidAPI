#include "./SecurityPermission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SecurityPermission::SecurityPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SecurityPermission::SecurityPermission(jstring arg0)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SecurityPermission::SecurityPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

