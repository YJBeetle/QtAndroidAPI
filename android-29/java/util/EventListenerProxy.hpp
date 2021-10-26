#pragma once

#ifndef JAVA_UTIL_EVENTLISTENERPROXY
#define JAVA_UTIL_EVENTLISTENERPROXY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class EventListenerProxy : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getListener();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void EventListenerProxy::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.EventListenerProxy",
			"(Ljava/util/EventListener;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject EventListenerProxy::getListener()
	{
		return __thiz.callObjectMethod(
			"getListener",
			"()Ljava/util/EventListener;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class EventListenerProxy : public __jni_impl::java::util::EventListenerProxy
	{
	public:
		EventListenerProxy(QAndroidJniObject obj) { __thiz = obj; }
		EventListenerProxy(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_EVENTLISTENERPROXY

