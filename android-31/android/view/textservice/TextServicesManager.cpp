#include "../../os/Bundle.hpp"
#include "./SpellCheckerInfo.hpp"
#include "./SpellCheckerSession.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TextServicesManager.hpp"

namespace android::view::textservice
{
	// Fields
	
	// QJniObject forward
	TextServicesManager::TextServicesManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::textservice::SpellCheckerInfo TextServicesManager::getCurrentSpellCheckerInfo()
	{
		return callObjectMethod(
			"getCurrentSpellCheckerInfo",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	__JniBaseClass TextServicesManager::getEnabledSpellCheckerInfos()
	{
		return callObjectMethod(
			"getEnabledSpellCheckerInfos",
			"()Ljava/util/List;"
		);
	}
	jboolean TextServicesManager::isSpellCheckerEnabled()
	{
		return callMethod<jboolean>(
			"isSpellCheckerEnabled",
			"()Z"
		);
	}
	android::view::textservice::SpellCheckerSession TextServicesManager::newSpellCheckerSession(android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"newSpellCheckerSession",
			"(Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams;Ljava/util/concurrent/Executor;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;)Landroid/view/textservice/SpellCheckerSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::textservice::SpellCheckerSession TextServicesManager::newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, __JniBaseClass arg2, jboolean arg3)
	{
		return callObjectMethod(
			"newSpellCheckerSession",
			"(Landroid/os/Bundle;Ljava/util/Locale;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;Z)Landroid/view/textservice/SpellCheckerSession;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::view::textservice

