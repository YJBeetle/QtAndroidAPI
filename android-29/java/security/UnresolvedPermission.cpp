#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./UnresolvedPermission.hpp"

namespace java::security
{
	// Fields
	
	UnresolvedPermission::UnresolvedPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnresolvedPermission::UnresolvedPermission(jstring arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnresolvedPermission",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean UnresolvedPermission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring UnresolvedPermission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedActions()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray UnresolvedPermission::getUnresolvedCerts()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedCerts",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jstring UnresolvedPermission::getUnresolvedName()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnresolvedPermission::getUnresolvedType()
	{
		return __thiz.callObjectMethod(
			"getUnresolvedType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UnresolvedPermission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean UnresolvedPermission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UnresolvedPermission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jstring UnresolvedPermission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

