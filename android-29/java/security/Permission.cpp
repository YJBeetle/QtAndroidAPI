#include "./PermissionCollection.hpp"
#include "./Permission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	Permission::Permission(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Permission::Permission(jstring arg0)
		: __JniBaseClass(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	void Permission::checkGuard(jobject arg0)
	{
		callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean Permission::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Permission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Permission::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Permission::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Permission::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection Permission::newPermissionCollection()
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jstring Permission::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

