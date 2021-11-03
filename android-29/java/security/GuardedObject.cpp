#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "./GuardedObject.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	GuardedObject::GuardedObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GuardedObject::GuardedObject(JObject arg0, JObject arg1)
		: JObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	JObject GuardedObject::getObject()
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

