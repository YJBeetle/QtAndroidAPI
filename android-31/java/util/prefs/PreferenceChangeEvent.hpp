#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JString.hpp"
#include "./Preferences.def.hpp"
#include "./PreferenceChangeEvent.def.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	inline PreferenceChangeEvent::PreferenceChangeEvent(java::util::prefs::Preferences arg0, JString arg1, JString arg2)
		: java::util::EventObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString PreferenceChangeEvent::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline JString PreferenceChangeEvent::getNewValue() const
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::prefs::Preferences PreferenceChangeEvent::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

// Base class headers
#include "../EventObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::prefs;
#endif
