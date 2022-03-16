#include "../../os/Bundle.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.hpp"

namespace android::view::textservice
{
	// Fields
	
	// Constructors
	
	// Methods
	android::os::Bundle SpellCheckerSession_SpellCheckerSessionParams::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	java::util::Locale SpellCheckerSession_SpellCheckerSessionParams::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jint SpellCheckerSession_SpellCheckerSessionParams::getSupportedAttributes() const
	{
		return callMethod<jint>(
			"getSupportedAttributes",
			"()I"
		);
	}
	jboolean SpellCheckerSession_SpellCheckerSessionParams::shouldReferToSpellCheckerLanguageSettings() const
	{
		return callMethod<jboolean>(
			"shouldReferToSpellCheckerLanguageSettings",
			"()Z"
		);
	}
} // namespace android::view::textservice

