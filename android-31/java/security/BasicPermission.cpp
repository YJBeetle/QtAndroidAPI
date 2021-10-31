#include "../io/ObjectInputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./BasicPermission.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	BasicPermission::BasicPermission(QJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	BasicPermission::BasicPermission(jstring arg0)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	BasicPermission::BasicPermission(jstring arg0, jstring arg1)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean BasicPermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring BasicPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BasicPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BasicPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection BasicPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

