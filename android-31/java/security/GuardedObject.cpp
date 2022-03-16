#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./GuardedObject.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	GuardedObject::GuardedObject(JObject arg0, JObject arg1)
		: JObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	JObject GuardedObject::getObject() const
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

