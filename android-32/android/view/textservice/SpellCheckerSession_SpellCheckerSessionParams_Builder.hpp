#pragma once

#include "../../os/Bundle.def.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams_Builder.def.hpp"

namespace android::view::textservice
{
	// Fields
	
	// Constructors
	inline SpellCheckerSession_SpellCheckerSessionParams_Builder::SpellCheckerSession_SpellCheckerSessionParams_Builder()
		: JObject(
			"android.view.textservice.SpellCheckerSession$SpellCheckerSessionParams$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams SpellCheckerSession_SpellCheckerSessionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams;"
		);
	}
	inline android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setShouldReferToSpellCheckerLanguageSettings(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldReferToSpellCheckerLanguageSettings",
			"(Z)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0
		);
	}
	inline android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setSupportedAttributes(jint arg0) const
	{
		return callObjectMethod(
			"setSupportedAttributes",
			"(I)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0
		);
	}
} // namespace android::view::textservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textservice;
#endif
