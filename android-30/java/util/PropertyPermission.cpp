#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"
#include "./PropertyPermission.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyPermission::PropertyPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	PropertyPermission::PropertyPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.util.PropertyPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean PropertyPermission::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString PropertyPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	jint PropertyPermission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PropertyPermission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection PropertyPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::util

