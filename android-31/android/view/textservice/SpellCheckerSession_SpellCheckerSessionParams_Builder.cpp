#include "../../os/Bundle.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SpellCheckerSession_SpellCheckerSessionParams_Builder.hpp"

namespace android::view::textservice
{
	// Fields
	
	// QJniObject forward
	SpellCheckerSession_SpellCheckerSessionParams_Builder::SpellCheckerSession_SpellCheckerSessionParams_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpellCheckerSession_SpellCheckerSessionParams_Builder::SpellCheckerSession_SpellCheckerSessionParams_Builder()
		: JObject(
			"android.view.textservice.SpellCheckerSession$SpellCheckerSessionParams$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams SpellCheckerSession_SpellCheckerSessionParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams;"
		);
	}
	android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0.object()
		);
	}
	android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Ljava/util/Locale;)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0.object()
		);
	}
	android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setShouldReferToSpellCheckerLanguageSettings(jboolean arg0)
	{
		return callObjectMethod(
			"setShouldReferToSpellCheckerLanguageSettings",
			"(Z)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0
		);
	}
	android::view::textservice::SpellCheckerSession_SpellCheckerSessionParams_Builder SpellCheckerSession_SpellCheckerSessionParams_Builder::setSupportedAttributes(jint arg0)
	{
		return callObjectMethod(
			"setSupportedAttributes",
			"(I)Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionParams$Builder;",
			arg0
		);
	}
} // namespace android::view::textservice

