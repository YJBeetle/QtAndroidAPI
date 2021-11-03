#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../lang/Exception.hpp"
#include "../../JObject.hpp"
#include "./AccessControlContext.hpp"
#include "./Permission.hpp"
#include "./PrivilegedActionException.hpp"
#include "./ProtectionDomain.hpp"
#include "./AccessController.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AccessController::AccessController(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void AccessController::checkPermission(java::security::Permission arg0)
	{
		callStaticMethod<void>(
			"java.security.AccessController",
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	JObject AccessController::doPrivileged(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject AccessController::doPrivilegedWithCombiner(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject AccessController::doPrivilegedWithCombiner(JObject arg0, java::security::AccessControlContext arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	java::security::AccessControlContext AccessController::getContext()
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"getContext",
			"()Ljava/security/AccessControlContext;"
		);
	}
} // namespace java::security

