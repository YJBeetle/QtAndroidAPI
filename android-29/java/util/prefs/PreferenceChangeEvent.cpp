#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./Preferences.hpp"
#include "./PreferenceChangeEvent.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QAndroidJniObject forward
	PreferenceChangeEvent::PreferenceChangeEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	PreferenceChangeEvent::PreferenceChangeEvent(java::util::prefs::Preferences arg0, jstring arg1, jstring arg2)
		: java::util::EventObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jstring PreferenceChangeEvent::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceChangeEvent::getNewValue()
	{
		return callObjectMethod(
			"getNewValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::prefs::Preferences PreferenceChangeEvent::getNode()
	{
		return callObjectMethod(
			"getNode",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

