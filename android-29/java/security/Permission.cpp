#include "./PermissionCollection.hpp"
#include "./Permission.hpp"

namespace java::security
{
	// Fields
	
	Permission::Permission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Permission::Permission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void Permission::checkGuard(jobject arg0)
	{
		__thiz.callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean Permission::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Permission::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Permission::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Permission::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Permission::implies(java::security::Permission arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Permission::newPermissionCollection()
	{
		return __thiz.callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jstring Permission::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

