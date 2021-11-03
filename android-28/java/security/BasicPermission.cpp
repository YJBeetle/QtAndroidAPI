#include "../io/ObjectInputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./BasicPermission.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	BasicPermission::BasicPermission(QJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	BasicPermission::BasicPermission(JString arg0)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	BasicPermission::BasicPermission(JString arg0, JString arg1)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean BasicPermission::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString BasicPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
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

