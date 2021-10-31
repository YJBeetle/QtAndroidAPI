#include "../lang/StringBuilder.hpp"
#include "./PropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyChangeEvent::PropertyChangeEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	PropertyChangeEvent::PropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3)
		: java::util::EventObject(
			"java.beans.PropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jobject PropertyChangeEvent::getNewValue()
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PropertyChangeEvent::getOldValue()
	{
		return callObjectMethod(
			"getOldValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PropertyChangeEvent::getPropagationId()
	{
		return callObjectMethod(
			"getPropagationId",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring PropertyChangeEvent::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PropertyChangeEvent::setPropagationId(jobject arg0)
	{
		callMethod<void>(
			"setPropagationId",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring PropertyChangeEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::beans

