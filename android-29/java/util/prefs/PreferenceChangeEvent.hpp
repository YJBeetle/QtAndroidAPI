#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../EventObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util::prefs
{
	class Preferences;
}

namespace java::util::prefs
{
	class PreferenceChangeEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		PreferenceChangeEvent(QAndroidJniObject obj);
		// Constructors
		PreferenceChangeEvent(java::util::prefs::Preferences &arg0, jstring &arg1, jstring &arg2);
		PreferenceChangeEvent(java::util::prefs::Preferences &arg0, const QString &arg1, const QString &arg2);
		PreferenceChangeEvent() = default;
		
		// Methods
		jstring getKey();
		jstring getNewValue();
		QAndroidJniObject getNode();
	};
} // namespace java::util::prefs

