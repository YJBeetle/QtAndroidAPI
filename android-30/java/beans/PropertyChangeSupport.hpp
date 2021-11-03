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
		void addPropertyChangeListener(JObject arg0);
		void addPropertyChangeListener(JString arg0, JObject arg1);
		void fireIndexedPropertyChange(JString arg0, jint arg1, jboolean arg2, jboolean arg3);
		void fireIndexedPropertyChange(JString arg0, jint arg1, jint arg2, jint arg3);
		void fireIndexedPropertyChange(JString arg0, jint arg1, JObject arg2, JObject arg3);
		void firePropertyChange(java::beans::PropertyChangeEvent arg0);
		void firePropertyChange(JString arg0, jboolean arg1, jboolean arg2);
		void firePropertyChange(JString arg0, jint arg1, jint arg2);
		void firePropertyChange(JString arg0, JObject arg1, JObject arg2);
		JArray getPropertyChangeListeners();
		JArray getPropertyChangeListeners(JString arg0);
		jboolean hasListeners(JString arg0);
		void removePropertyChangeListener(JObject arg0);
		void removePropertyChangeListener(JString arg0, JObject arg1);
	};
} // namespace java::beans

