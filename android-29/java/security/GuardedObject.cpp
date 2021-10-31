#include "../io/ObjectOutputStream.hpp"
#include "./GuardedObject.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	GuardedObject::GuardedObject(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GuardedObject::GuardedObject(jobject arg0, __JniBaseClass arg1)
		: __JniBaseClass(
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

