#pragma once

#ifndef JAVA_BEANS_PROPERTYCHANGEEVENT
#define JAVA_BEANS_PROPERTYCHANGEEVENT

#include "../../__JniBaseClass.hpp"
#include "../util/EventObject.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::beans
{
	class PropertyChangeEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, jstring arg1, jobject arg2, jobject arg3);
		
		// Methods
		jstring toString();
		jstring getPropertyName();
		jobject getOldValue();
		jobject getNewValue();
		jobject getPropagationId();
		void setPropagationId(jobject arg0);
	};
} // namespace __jni_impl::java::beans

#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::beans
{
	// Fields
	
	// Constructors
	void PropertyChangeEvent::__constructor(jobject arg0, jstring arg1, jobject arg2, jobject arg3)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeEvent",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jstring PropertyChangeEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PropertyChangeEvent::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject PropertyChangeEvent::getOldValue()
	{
		return __thiz.callObjectMethod(
			"getOldValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PropertyChangeEvent::getNewValue()
	{
		return __thiz.callObjectMethod(
			"getNewValue",
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
	void PropertyChangeEvent::setPropagationId(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationId",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::java::beans

namespace java::beans
{
	class PropertyChangeEvent : public __jni_impl::java::beans::PropertyChangeEvent
	{
	public:
		PropertyChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
		PropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::beans

#endif // JAVA_BEANS_PROPERTYCHANGEEVENT

