#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace java::beans
{
	class PropertyChangeSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		PropertyChangeSupport(QAndroidJniObject obj);
		// Constructors
		PropertyChangeSupport(jobject &arg0);
		PropertyChangeSupport() = default;
		
		// Methods
		void addPropertyChangeListener(__JniBaseClass arg0);
		void addPropertyChangeListener(jstring arg0, __JniBaseClass arg1);
		void addPropertyChangeListener(const QString &arg0, __JniBaseClass arg1);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jboolean arg2, jboolean arg3);
		void fireIndexedPropertyChange(const QString &arg0, jint arg1, jboolean arg2, jboolean arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jint arg2, jint arg3);
		void fireIndexedPropertyChange(const QString &arg0, jint arg1, jint arg2, jint arg3);
		void fireIndexedPropertyChange(jstring arg0, jint arg1, jobject arg2, jobject arg3);
		void fireIndexedPropertyChange(const QString &arg0, jint arg1, jobject arg2, jobject arg3);
		void firePropertyChange(java::beans::PropertyChangeEvent arg0);
		void firePropertyChange(jstring arg0, jboolean arg1, jboolean arg2);
		void firePropertyChange(const QString &arg0, jboolean arg1, jboolean arg2);
		void firePropertyChange(jstring arg0, jint arg1, jint arg2);
		void firePropertyChange(const QString &arg0, jint arg1, jint arg2);
		void firePropertyChange(jstring arg0, jobject arg1, jobject arg2);
		void firePropertyChange(const QString &arg0, jobject arg1, jobject arg2);
		jarray getPropertyChangeListeners();
		jarray getPropertyChangeListeners(jstring arg0);
		jarray getPropertyChangeListeners(const QString &arg0);
		jboolean hasListeners(jstring arg0);
		jboolean hasListeners(const QString &arg0);
		void removePropertyChangeListener(__JniBaseClass arg0);
		void removePropertyChangeListener(jstring arg0, __JniBaseClass arg1);
		void removePropertyChangeListener(const QString &arg0, __JniBaseClass arg1);
	};
} // namespace java::beans

