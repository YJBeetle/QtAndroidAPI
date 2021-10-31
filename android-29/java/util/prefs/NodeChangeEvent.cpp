#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./Preferences.hpp"
#include "./NodeChangeEvent.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QAndroidJniObject forward
	NodeChangeEvent::NodeChangeEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	NodeChangeEvent::NodeChangeEvent(java::util::prefs::Preferences arg0, java::util::prefs::Preferences arg1)
		: java::util::EventObject(
			"java.util.prefs.NodeChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::util::prefs::Preferences NodeChangeEvent::getChild()
	{
		return callObjectMethod(
			"getChild",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	java::util::prefs::Preferences NodeChangeEvent::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

