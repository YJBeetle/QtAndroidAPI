#pragma once

#ifndef JAVA_UTIL_EVENTOBJECT
#define JAVA_UTIL_EVENTOBJECT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class EventObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		
		// Methods
		jobject getSource();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void EventObject::__constructor(jobject arg0)
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
} // namespace __jni_impl::java::util

namespace java::util
{
	class EventObject : public __jni_impl::java::util::EventObject
	{
	public:
		EventObject(QAndroidJniObject obj) { __thiz = obj; }
		EventObject(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_EVENTOBJECT

