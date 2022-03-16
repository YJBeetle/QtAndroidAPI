#include "../../JString.hpp"
#include "./Permission.hpp"
#include "./AccessControlException.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	AccessControlException::AccessControlException(JString arg0)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AccessControlException::AccessControlException(JString arg0, java::security::Permission arg1)
		: java::lang::SecurityException(
			"java.security.AccessControlException",
			"(Ljava/lang/String;Ljava/security/Permission;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	java::security::Permission AccessControlException::getPermission() const
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
} // namespace java::security

