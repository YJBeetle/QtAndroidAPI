#pragma once

#include "../EventObject.def.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
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
		PreferenceChangeEvent(QJniObject obj) : java::util::EventObject(obj) {}
		
		// Constructors
		PreferenceChangeEvent(java::util::prefs::Preferences arg0, JString arg1, JString arg2);
		
		// Methods
		JString getKey() const;
		JString getNewValue() const;
		java::util::prefs::Preferences getNode() const;
	};
} // namespace java::util::prefs

