#include "./PropertyChangeEvent.hpp"
#include "./PropertyChangeListenerProxy.hpp"

namespace java::beans
{
	// Fields
	
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.beans.PropertyChangeListenerProxy",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	PropertyChangeListenerProxy::PropertyChangeListenerProxy(const QString &arg0, __JniBaseClass &arg1)
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
	void PropertyChangeListenerProxy::propertyChange(java::beans::PropertyChangeEvent arg0)
	{
		__thiz.callMethod<void>(
			"propertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::beans

