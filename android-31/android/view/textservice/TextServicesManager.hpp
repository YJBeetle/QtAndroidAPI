#pragma once

#include "../../os/Bundle.def.hpp"
#include "./SpellCheckerInfo.def.hpp"
#include "./SpellCheckerSession.def.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TextServicesManager.def.hpp"

namespace android::view::textservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::textservice::SpellCheckerInfo TextServicesManager::getCurrentSpellCheckerInfo() const
	{
		return callObjectMethod(
			"getCurrentSpellCheckerInfo",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	inline JObject TextServicesManager::getEnabledSpellCheckerInfos() const
	{
		return callObjectMethod(
			"getEnabledSpellCheckerInfos",
			"()Ljava/util/List;"
		);
	}
	inline jboolean TextServicesManager::isSpellCheckerEnabled() const
	{
		return callMethod<jboolean>(
			"isSpellCheckerEnabled",
			"()Z"
		);
	}
	inline android::view::textservice::SpellCheckerSession TextServicesManager::newSpellCheckerSession(android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"newSpellCheckerSession",
			"(Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams;Ljava/util/concurrent/Executor;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;)Landroid/view/textservice/SpellCheckerSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::textservice::SpellCheckerSession TextServicesManager::newSpellCheckerSession(android::os::Bundle arg0, java::util::Locale arg1, JObject arg2, jboolean arg3) const
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

// Base class headers

