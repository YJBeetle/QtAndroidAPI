#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EventObject.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	EventObject::EventObject(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	EventObject::EventObject(JObject arg0)
		: JObject(
			"java.util.EventObject",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	JObject EventObject::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/Object;"
		);
	}
	JString EventObject::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

