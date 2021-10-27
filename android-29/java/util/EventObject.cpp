#include "./EventObject.hpp"

namespace java::util
{
	// Fields
	
	EventObject::EventObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EventObject::EventObject(jobject &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EventObject",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject EventObject::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring EventObject::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

