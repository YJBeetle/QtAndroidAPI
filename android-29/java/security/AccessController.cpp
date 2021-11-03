#include "../lang/Exception.hpp"
#include "./AccessControlContext.hpp"
#include "./Permission.hpp"
#include "./PrivilegedActionException.hpp"
#include "./ProtectionDomain.hpp"
#include "./AccessController.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AccessController::AccessController(QJniObject obj) : JObject(obj) {}
	
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
	jobject AccessController::doPrivileged(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
	jobject AccessController::doPrivileged(JObject arg0, java::security::AccessControlContext arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivileged",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2
		).object<jobject>();
	}
	jobject AccessController::doPrivilegedWithCombiner(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject AccessController::doPrivilegedWithCombiner(JObject arg0, java::security::AccessControlContext arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"java.security.AccessController",
			"doPrivilegedWithCombiner",
			"(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;[Ljava/security/Permission;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2
		).object<jobject>();
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

