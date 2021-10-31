#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./UnresolvedPermission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	UnresolvedPermission::UnresolvedPermission(QAndroidJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	UnresolvedPermission::UnresolvedPermission(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
		: java::security::Permission(
			"java.security.UnresolvedPermission",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean UnresolvedPermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UnresolvedPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedActions()
	{
		return callObjectMethod(
			"getUnresolvedActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray UnresolvedPermission::getUnresolvedCerts()
	{
		return callObjectMethod(
			"getUnresolvedCerts",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jstring UnresolvedPermission::getUnresolvedName()
	{
		return callObjectMethod(
			"getUnresolvedName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedType()
	{
		return callObjectMethod(
			"getUnresolvedType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UnresolvedPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UnresolvedPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection UnresolvedPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jstring UnresolvedPermission::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

