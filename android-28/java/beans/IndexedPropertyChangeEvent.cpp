#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "./IndexedPropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	// QAndroidJniObject forward
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(QAndroidJniObject obj) : java::beans::PropertyChangeEvent(obj) {}
	
	// Constructors
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(JObject arg0, JString arg1, JObject arg2, JObject arg3, jint arg4)
		: java::beans::PropertyChangeEvent(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jobject>(),
			arg4
		) {}
	
	// Methods
	jint IndexedPropertyChangeEvent::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
} // namespace java::beans

