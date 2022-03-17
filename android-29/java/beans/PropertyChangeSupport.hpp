#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./PropertyChangeEvent.def.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PropertyChangeSupport.def.hpp"

namespace java::beans
{
	// Fields
	
	// Constructors
	inline PropertyChangeSupport::PropertyChangeSupport(JObject arg0)
		: JObject(
			"java.beans.PropertyChangeSupport",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline void PropertyChangeSupport::addPropertyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	inline void PropertyChangeSupport::addPropertyChangeListener(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"addPropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, jboolean arg2, jboolean arg3) const
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
	inline void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void PropertyChangeSupport::fireIndexedPropertyChange(JString arg0, jint arg1, JObject arg2, JObject arg3) const
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
	inline void PropertyChangeSupport::firePropertyChange(java::beans::PropertyChangeEvent arg0) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/beans/PropertyChangeEvent;)V",
			arg0.object()
		);
	}
	inline void PropertyChangeSupport::firePropertyChange(JString arg0, jboolean arg1, jboolean arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;ZZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void PropertyChangeSupport::firePropertyChange(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void PropertyChangeSupport::firePropertyChange(JString arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"firePropertyChange",
			"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	inline JArray PropertyChangeSupport::getPropertyChangeListeners() const
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"()[Ljava/beans/PropertyChangeListener;"
		);
	}
	inline JArray PropertyChangeSupport::getPropertyChangeListeners(JString arg0) const
	{
		return callObjectMethod(
			"getPropertyChangeListeners",
			"(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;",
			arg0.object<jstring>()
		);
	}
	inline jboolean PropertyChangeSupport::hasListeners(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasListeners",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void PropertyChangeSupport::removePropertyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/beans/PropertyChangeListener;)V",
			arg0.object()
		);
	}
	inline void PropertyChangeSupport::removePropertyChangeListener(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"removePropertyChangeListener",
			"(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::beans

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::beans;
#endif
