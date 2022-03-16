#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "./Permissions.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	Permissions::Permissions()
		: java::security::PermissionCollection(
			"java.security.Permissions",
			"()V"
		) {}
	
	// Methods
	void Permissions::add(java::security::Permission arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	JObject Permissions::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jboolean Permissions::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
} // namespace java::security

