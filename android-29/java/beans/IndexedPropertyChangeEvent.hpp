#pragma once

#ifndef JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT
#define JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT

#include "../../__JniBaseClass.hpp"
#include "../util/EventObject.hpp"
#include "PropertyChangeEvent.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::beans
{
	class IndexedPropertyChangeEvent : public __jni_impl::java::beans::PropertyChangeEvent
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4);
		
		// Methods
		jint getIndex();
	};
} // namespace __jni_impl::java::beans

#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::beans
{
	// Fields
	
	// Constructors
	void IndexedPropertyChangeEvent::__constructor(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.beans.IndexedPropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jint IndexedPropertyChangeEvent::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
} // namespace __jni_impl::java::beans

namespace java::beans
{
	class IndexedPropertyChangeEvent : public __jni_impl::java::beans::IndexedPropertyChangeEvent
	{
	public:
		IndexedPropertyChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
		IndexedPropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::beans

#endif // JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT

