#include "./PropertyChangeEvent.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./PropertyChangeSupport.hpp"

namespace java::beans
{
	// Fields
	
	// QJniObject forward
	PropertyChangeSupport::PropertyChangeSupport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PropertyChangeSupport::PropertyChangeSupport(jobject arg0)
		: JObject(
			"java.beans.PropertyChangeSupport",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	void PropertyChangeSupport::addPropertyChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::addPropertyChangeListener(jstring arg0, JObject arg1)
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.object()
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
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
		callMethod<void>(
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
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2)
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(jstring arg0, jobject arg1, jobject arg2)
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jarray PropertyChangeSupport::getPropertyChangeListeners()
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"()[Ljava/beans/PropertyChangeListener;"
		).object<jarray>();
	}
	jarray PropertyChangeSupport::getPropertyChangeListeners(jstring arg0)
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;",
			arg0
		).object<jarray>();
	}
	jboolean PropertyChangeSupport::hasListeners(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasListeners",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(jstring arg0, JObject arg1)
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace java::beans

