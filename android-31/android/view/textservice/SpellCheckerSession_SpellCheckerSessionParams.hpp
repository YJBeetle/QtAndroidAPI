#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.def.hpp"

namespace android::view::textservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::Bundle SpellCheckerSession_SpellCheckerSessionParams::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline java::util::Locale SpellCheckerSession_SpellCheckerSessionParams::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline jint SpellCheckerSession_SpellCheckerSessionParams::getSupportedAttributes() const
	{
		return callMethod<jint>(
			"getSupportedAttributes",
			"()I"
		);
	}
	inline jboolean SpellCheckerSession_SpellCheckerSessionParams::shouldReferToSpellCheckerLanguageSettings() const
	{
		return callMethod<jboolean>(
			"shouldReferToSpellCheckerLanguageSettings",
			"()Z"
		);
	}
} // namespace android::view::textservice

// Base class headers

