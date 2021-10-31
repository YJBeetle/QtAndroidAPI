#include "./PropertyChangeEvent.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./PropertyChangeSupport.hpp"

namespace java::beans
{
	// Fields
	
	PropertyChangeSupport::PropertyChangeSupport(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyChangeSupport::PropertyChangeSupport(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeSupport",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	void PropertyChangeSupport::addPropertyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyChangeSupport::addPropertyChangeListener(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;IZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jobject arg2, jobject arg3)
	{
		__thiz.callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyChangeSupport::firePropertyChange(java::beans::PropertyChangeEvent arg0)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jobject arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jarray PropertyChangeSupport::getPropertyChangeListeners()
	{
		return __thiz.callObjectMethod(
			"getPropertyChangeListeners",
			"()[Ljava/beans/PropertyChangeListener;"
		).object<jarray>();
	}
	jarray PropertyChangeSupport::getPropertyChangeListeners(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPropertyChangeListeners",
			"(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;",
			arg0
		).object<jarray>();
	}
	jboolean PropertyChangeSupport::hasListeners(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasListeners",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace java::beans

