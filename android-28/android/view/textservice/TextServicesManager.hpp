#pragma once

#include "../../os/Bundle.def.hpp"
#include "./SpellCheckerSession.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TextServicesManager.def.hpp"

namespace android::view::textservice
{
	// Fields
	
	// Constructors
	
	// Methods
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textservice;
#endif
