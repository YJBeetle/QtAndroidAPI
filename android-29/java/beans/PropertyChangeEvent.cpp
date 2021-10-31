#include "../lang/StringBuilder.hpp"
#include "./PropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	PropertyChangeEvent::PropertyChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyChangeEvent::PropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jobject PropertyChangeEvent::getNewValue()
	{
		return __thiz.callObjectMethod(
			"getNewValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PropertyChangeEvent::getOldValue()
	{
		return __thiz.callObjectMethod(
			"getOldValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PropertyChangeEvent::getPropagationId()
	{
		return __thiz.callObjectMethod(
			"getPropagationId",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring PropertyChangeEvent::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PropertyChangeEvent::setPropagationId(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationId",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring PropertyChangeEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::beans

