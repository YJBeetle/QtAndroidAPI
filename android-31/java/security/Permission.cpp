#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PermissionCollection.hpp"
#include "./Permission.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	Permission::Permission(JString arg0)
		: JObject(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void Permission::checkGuard(JObject arg0) const
	{
		callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean Permission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Permission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	JString Permission::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Permission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Permission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	java::security::PermissionCollection Permission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	JString Permission::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

