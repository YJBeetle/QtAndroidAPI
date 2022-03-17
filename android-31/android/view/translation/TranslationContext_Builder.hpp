#pragma once

#include "./TranslationContext.def.hpp"
#include "./TranslationSpec.def.hpp"
#include "./TranslationContext_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline TranslationContext_Builder::TranslationContext_Builder(android::view::translation::TranslationSpec arg0, android::view::translation::TranslationSpec arg1)
		: JObject(
			"android.view.translation.TranslationContext$Builder",
			"(Landroid/view/translation/TranslationSpec;Landroid/view/translation/TranslationSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::view::translation::TranslationContext TranslationContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationContext;"
		);
	}
	inline android::view::translation::TranslationContext_Builder TranslationContext_Builder::setTranslationFlags(jint arg0) const
	{
		return callObjectMethod(
			"setTranslationFlags",
			"(I)Landroid/view/translation/TranslationContext$Builder;",
			arg0
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
