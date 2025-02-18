#pragma once

#include "../../os/Bundle.def.hpp"
#include "./TranslationResponseValue.def.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponseValue_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline TranslationResponseValue_Builder::TranslationResponseValue_Builder(jint arg0)
		: JObject(
			"android.view.translation.TranslationResponseValue$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::translation::TranslationResponseValue TranslationResponseValue_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationResponseValue;"
		);
	}
	inline android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object()
		);
	}
	inline android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::translation::TranslationResponseValue_Builder TranslationResponseValue_Builder::setTransliteration(JString arg0) const
	{
		return callObjectMethod(
			"setTransliteration",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationResponseValue$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
