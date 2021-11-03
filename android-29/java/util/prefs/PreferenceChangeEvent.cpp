#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JString.hpp"
#include "./Preferences.hpp"
#include "./PreferenceChangeEvent.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QJniObject forward
	PreferenceChangeEvent::PreferenceChangeEvent(QJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	PreferenceChangeEvent::PreferenceChangeEvent(java::util::prefs::Preferences arg0, JString arg1, JString arg2)
		: java::util::EventObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString PreferenceChangeEvent::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	JString PreferenceChangeEvent::getNewValue() const
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/String;"
		);
	}
	java::util::prefs::Preferences PreferenceChangeEvent::getNode() const
	{
		return callObjectMethod(
			"getNode",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

