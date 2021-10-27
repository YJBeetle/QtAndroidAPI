#include "../../os/Bundle.hpp"
#include "./SpellCheckerSession.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TextServicesManager.hpp"

namespace android::view::textservice
{
	// Fields
	
	TextServicesManager::TextServicesManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TextServicesManager::newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, __JniBaseClass arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"newSpellCheckerSession",
			"(Landroid/os/Bundle;Ljava/util/Locale;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;Z)Landroid/view/textservice/SpellCheckerSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace android::view::textservice

