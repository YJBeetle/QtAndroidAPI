#include "../../JString.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	PermissionCollection::PermissionCollection()
		: JObject(
			"java.security.PermissionCollection",
			"()V"
		) {}
	
	// Methods
	void PermissionCollection::add(java::security::Permission arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	JObject PermissionCollection::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject PermissionCollection::elementsAsStream() const
	{
		return callObjectMethod(
			"elementsAsStream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean PermissionCollection::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	jboolean PermissionCollection::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void PermissionCollection::setReadOnly() const
	{
		callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	JString PermissionCollection::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

