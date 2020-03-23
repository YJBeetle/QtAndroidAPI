#pragma once

#ifndef JAVA_BEANS_PROPERTYCHANGESUPPORT
#define JAVA_BEANS_PROPERTYCHANGESUPPORT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::beans
{
	class PropertyChangeEvent;
}

namespace __jni_impl::java::beans
{
	class PropertyChangeSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		
		// Methods
		void addPropertyChangeListener(__jni_impl::__JniBaseClass arg0);
		void addPropertyChangeListener(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void removePropertyChangeListener(__jni_impl::__JniBaseClass arg0);
		void removePropertyChangeListener(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void firePropertyChange(__jni_impl::java::beans::PropertyChangeEvent arg0);
		void firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2);
		void firePropertyChange(jstring arg0, jobject arg1, jobject arg2);
		void firePropertyChange(jstring arg0, jint arg1, jint arg2);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jobject arg2, jobject arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jint arg2, jint arg3);
		jboolean hasListeners(jstring arg0);
		QAndroidJniObject getPropertyChangeListeners();
		QAndroidJniObject getPropertyChangeListeners(jstring arg0);
	};
} // namespace __jni_impl::java::beans

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "PropertyChangeEvent.hpp"

namespace __jni_impl::java::beans
{
	// Fields
	
	// Constructors
	void PropertyChangeSupport::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeSupport",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	
	// Methods
	void PropertyChangeSupport::addPropertyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.__jniObject().object());
	}
	void PropertyChangeSupport::addPropertyChangeListener(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PropertyChangeSupport::removePropertyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.__jniObject().object());
	}
	void PropertyChangeSupport::removePropertyChangeListener(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PropertyChangeSupport::firePropertyChange(__jni_impl::java::beans::PropertyChangeEvent arg0)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.__jniObject().object());
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jobject arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;IZZ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jobject arg2, jobject arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean PropertyChangeSupport::hasListeners(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasListeners",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject PropertyChangeSupport::getPropertyChangeListeners()
	{
		return __thiz.callObjectMethod(
			"getPropertyChangeListeners",
			"()[Ljava/beans/PropertyChangeListener;");
	}
	QAndroidJniObject PropertyChangeSupport::getPropertyChangeListeners(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyChangeListeners",
			"(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;",
			arg0);
	}
} // namespace __jni_impl::java::beans

namespace java::beans
{
	class PropertyChangeSupport : public __jni_impl::java::beans::PropertyChangeSupport
	{
	public:
		PropertyChangeSupport(QAndroidJniObject obj) { __thiz = obj; }
		PropertyChangeSupport(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::beans

#endif // JAVA_BEANS_PROPERTYCHANGESUPPORT

