#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::beans
{
	class PropertyChangeEvent;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;

namespace java::beans
{
	class PropertyChangeSupport : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyChangeSupport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeSupport(QJniObject obj);
		
		// Constructors
		PropertyChangeSupport(JObject arg0);
		
		// Methods
		void addPropertyChangeListener(JObject arg0) const;
		void addPropertyChangeListener(JString arg0, JObject arg1) const;
		void fireIndexedPropertyChange(JString arg0, jint arg1, jboolean arg2, jboolean arg3) const;
		void fireIndexedPropertyChange(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void fireIndexedPropertyChange(JString arg0, jint arg1, JObject arg2, JObject arg3) const;
		void firePropertyChange(java::beans::PropertyChangeEvent arg0) const;
		void firePropertyChange(JString arg0, jboolean arg1, jboolean arg2) const;
		void firePropertyChange(JString arg0, jint arg1, jint arg2) const;
		void firePropertyChange(JString arg0, JObject arg1, JObject arg2) const;
		JArray getPropertyChangeListeners() const;
		JArray getPropertyChangeListeners(JString arg0) const;
		jboolean hasListeners(JString arg0) const;
		void removePropertyChangeListener(JObject arg0) const;
		void removePropertyChangeListener(JString arg0, JObject arg1) const;
	};
} // namespace java::beans

