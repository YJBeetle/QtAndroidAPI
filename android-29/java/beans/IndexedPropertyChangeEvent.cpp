#include "../lang/StringBuilder.hpp"
#include "./IndexedPropertyChangeEvent.hpp"

namespace java::beans
{
	// Fields
	
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(jobject &arg0, jstring &arg1, jobject &arg2, jobject &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(jobject &arg0, const QString &arg1, jobject &arg2, jobject &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint IndexedPropertyChangeEvent::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
} // namespace java::beans

