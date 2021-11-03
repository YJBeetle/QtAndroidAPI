#include "../io/ObjectOutputStream.hpp"
#include "./GuardedObject.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	GuardedObject::GuardedObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GuardedObject::GuardedObject(jobject arg0, JObject arg1)
		: JObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jobject GuardedObject::getObject()
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

