#include "../../os/Bundle.hpp"
#include "./TranslationResponseValue.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponseValue_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	TranslationResponseValue_Builder::TranslationResponseValue_Builder(jint arg0)
		: JObject(
			"android.view.translation.TranslationResponseValue$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::view::translation::TranslationResponseValue TranslationResponseValue_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationResponseValue;"
		);
	}
	android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object()
		);
	}
	android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setTransliteration(JString arg0) const
	{
		return callObjectMethod(
			"setTransliteration",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::translation

