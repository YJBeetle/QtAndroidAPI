#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "./Preferences.def.hpp"
#include "./NodeChangeEvent.def.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	inline NodeChangeEvent::NodeChangeEvent(java::util::prefs::Preferences arg0, java::util::prefs::Preferences arg1)
		: java::util::EventObject(
			"java.util.prefs.NodeChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::util::prefs::Preferences NodeChangeEvent::getChild() const
	{
		return callObjectMethod(
			"getChild",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	inline java::util::prefs::Preferences NodeChangeEvent::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

// Base class headers
#include "../EventObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::prefs;
#endif
