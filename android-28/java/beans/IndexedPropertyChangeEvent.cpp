#include "../lang/StringBuilder.hpp"
#include "./IndexedPropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	// QJniObject forward
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(QJniObject obj) : java::beans::PropertyChangeEvent(obj) {}
	
	// Constructors
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4)
		: java::beans::PropertyChangeEvent(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
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

