#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../security/Permission.hpp"
#include "../security/PermissionCollection.hpp"
#include "./PropertyPermission.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyPermission::PropertyPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	PropertyPermission::PropertyPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.util.PropertyPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean PropertyPermission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PropertyPermission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject PropertyPermission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::util

