#include "../../os/Bundle.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.hpp"

namespace android::view::textservice
{
	// Fields
	
	// QJniObject forward
	SpellCheckerSession_SpellCheckerSessionParams::SpellCheckerSession_SpellCheckerSessionParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Bundle SpellCheckerSession_SpellCheckerSessionParams::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	java::util::Locale SpellCheckerSession_SpellCheckerSessionParams::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jint SpellCheckerSession_SpellCheckerSessionParams::getSupportedAttributes()
	{
		return callMethod<jint>(
			"getSupportedAttributes",
			"()I"
		);
	}
	jboolean SpellCheckerSession_SpellCheckerSessionParams::shouldReferToSpellCheckerLanguageSettings()
	{
		return callMethod<jboolean>(
			"shouldReferToSpellCheckerLanguageSettings",
			"()Z"
		);
	}
} // namespace android::view::textservice

