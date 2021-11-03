#include "./EventObject.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	EventObject::EventObject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EventObject::EventObject(jobject arg0)
		: JObject(
			"java.util.EventObject",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	jobject EventObject::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring EventObject::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

