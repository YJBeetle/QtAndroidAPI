#include "../io/ObjectOutputStream.hpp"
#include "./GuardedObject.hpp"

namespace java::security
{
	// Fields
	
	GuardedObject::GuardedObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GuardedObject::GuardedObject(jobject &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject GuardedObject::getObject()
	{
		return __thiz.callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::security

