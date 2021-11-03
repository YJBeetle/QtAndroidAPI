#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./UnresolvedPermission.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	UnresolvedPermission::UnresolvedPermission(QJniObject obj) : java::security::Permission(obj) {}
	
	// Constructors
	UnresolvedPermission::UnresolvedPermission(JString arg0, JString arg1, JString arg2, JArray arg3)
		: java::security::Permission(
			"java.security.UnresolvedPermission",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		) {}
	
	// Methods
	jboolean UnresolvedPermission::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString UnresolvedPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	JString UnresolvedPermission::getUnresolvedActions()
	{
		return callObjectMethod(
			"getUnresolvedActions",
			"()Ljava/lang/String;"
		);
	}
	JArray UnresolvedPermission::getUnresolvedCerts()
	{
		return callObjectMethod(
			"getUnresolvedCerts",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JString UnresolvedPermission::getUnresolvedName()
	{
		return callObjectMethod(
			"getUnresolvedName",
			"()Ljava/lang/String;"
		);
	}
	JString UnresolvedPermission::getUnresolvedType()
	{
		return callObjectMethod(
			"getUnresolvedType",
			"()Ljava/lang/String;"
		);
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
	JString UnresolvedPermission::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

