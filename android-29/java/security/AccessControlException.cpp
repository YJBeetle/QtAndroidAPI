#include "./Permission.hpp"
#include "./AccessControlException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AccessControlException::AccessControlException(QAndroidJniObject obj) : java::lang::SecurityException(obj) {}
	
	// Constructors
	AccessControlException::AccessControlException(jstring arg0)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AccessControlException::AccessControlException(jstring arg0, java::security::Permission arg1)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	java::security::Permission AccessControlException::getPermission()
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
} // namespace java::security

