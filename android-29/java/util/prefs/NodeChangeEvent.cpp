#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./Preferences.hpp"
#include "./NodeChangeEvent.hpp"

namespace java::util::prefs
{
	// Fields
	
	NodeChangeEvent::NodeChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NodeChangeEvent::NodeChangeEvent(java::util::prefs::Preferences &arg0, java::util::prefs::Preferences &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.NodeChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject NodeChangeEvent::getChild()
	{
		return __thiz.callObjectMethod(
			"getChild",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	QAndroidJniObject NodeChangeEvent::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/prefs/Preferences;"
		);
	}
} // namespace java::util::prefs

