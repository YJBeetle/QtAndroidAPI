#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/EventListenerProxy.hpp"

namespace __jni_impl::java::beans
{
	class PropertyChangeEvent;
}

namespace __jni_impl::java::beans
{
	class PropertyChangeListenerProxy : public __jni_impl::java::util::EventListenerProxy
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring getPropertyName();
		void propertyChange(__jni_impl::java::beans::PropertyChangeEvent arg0);
	};
} // namespace __jni_impl::java::beans

#include "./PropertyChangeEvent.hpp"

namespace __jni_impl::java::beans
{
	// Fields
	
	// Constructors
	void PropertyChangeListenerProxy::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PropertyChangeListenerProxy::__constructor(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring PropertyChangeListenerProxy::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PropertyChangeListenerProxy::propertyChange(__jni_impl::java::beans::PropertyChangeEvent arg0)
	{
		__thiz.callMethod<void>(
			"propertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::beans

namespace java::beans
{
	class PropertyChangeListenerProxy : public __jni_impl::java::beans::PropertyChangeListenerProxy
	{
	public:
		PropertyChangeListenerProxy(QAndroidJniObject obj) { __thiz = obj; }
		PropertyChangeListenerProxy(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::beans

