#include "../../JString.hpp"
#include "./SecurityPermission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SecurityPermission::SecurityPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SecurityPermission::SecurityPermission(JString arg0)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SecurityPermission::SecurityPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

