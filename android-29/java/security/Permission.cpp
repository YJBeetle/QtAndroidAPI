#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PermissionCollection.hpp"
#include "./Permission.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	Permission::Permission(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Permission::Permission(JString arg0)
		: JObject(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void Permission::checkGuard(JObject arg0)
	{
		callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean Permission::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Permission::getActions()
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	JString Permission::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
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
	JString Permission::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

