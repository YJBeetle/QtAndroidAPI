#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./PropertyChangeEvent.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PropertyChangeSupport.hpp"

namespace java::beans
{
	// Fields
	
	// QJniObject forward
	PropertyChangeSupport::PropertyChangeSupport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PropertyChangeSupport::PropertyChangeSupport(JObject arg0)
		: JObject(
			"java.beans.PropertyChangeSupport",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	void PropertyChangeSupport::addPropertyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::addPropertyChangeListener(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, jboolean arg2, jboolean arg3) const
	{
		callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;IZZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"fireIndexedPropertyChange",
			"(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jobject>(),
			arg3.object<jobject>()
		);
	}
	void PropertyChangeSupport::firePropertyChange(java::beans::PropertyChangeEvent arg0) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::firePropertyChange(JString arg0, jboolean arg1, jboolean arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;ZZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void PropertyChangeSupport::firePropertyChange(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JArray PropertyChangeSupport::getPropertyChangeListeners() const
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"()[Ljava/beans/PropertyChangeListener;"
		);
	}
	JArray PropertyChangeSupport::getPropertyChangeListeners(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;",
			arg0.object<jstring>()
		);
	}
	jboolean PropertyChangeSupport::hasListeners(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasListeners",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	void PropertyChangeSupport::removePropertyChangeListener(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::beans

