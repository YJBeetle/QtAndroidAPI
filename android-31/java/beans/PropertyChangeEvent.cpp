#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "./PropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyChangeEvent::PropertyChangeEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	PropertyChangeEvent::PropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3)
		: java::util::EventObject(
			"java.beans.PropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jobject>()
		) {}
	
	// Methods
	JObject PropertyChangeEvent::getNewValue()
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/Object;"
		);
	}
	JObject PropertyChangeEvent::getOldValue()
	{
		return callObjectMethod(
			"getOldValue",
			"()Ljava/lang/Object;"
		);
	}
	JObject PropertyChangeEvent::getPropagationId()
	{
		return callObjectMethod(
			"getPropagationId",
			"()Ljava/lang/Object;"
		);
	}
	JString PropertyChangeEvent::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	void PropertyChangeEvent::setPropagationId(JObject arg0)
	{
		callMethod<void>(
			"setPropagationId",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	JString PropertyChangeEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::beans

