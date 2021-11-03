#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceChangeEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceChangeEvent(QJniObject obj);
		
		// Constructors
		PreferenceChangeEvent(java::util::prefs::Preferences arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getKey();
		jstring getNewValue();
		java::util::prefs::Preferences getNode();
	};
} // namespace java::util::prefs

