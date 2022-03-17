#pragma once

#include "../autofill/AutofillId.def.hpp"
#include "./TranslationResponseValue.def.hpp"
#include "./ViewTranslationResponse.def.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationResponse_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline ViewTranslationResponse_Builder::ViewTranslationResponse_Builder(android::view::autofill::AutofillId arg0)
		: JObject(
			"android.view.translation.ViewTranslationResponse$Builder",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::translation::ViewTranslationResponse ViewTranslationResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/ViewTranslationResponse;"
		);
	}
	inline android::view::translation::ViewTranslationResponse_Builder ViewTranslationResponse_Builder::setValue(JString arg0, android::view::translation::TranslationResponseValue arg1) const
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/String;Landroid/view/translation/TranslationResponseValue;)Landroid/view/translation/ViewTranslationResponse$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::view::translation

// Base class headers

