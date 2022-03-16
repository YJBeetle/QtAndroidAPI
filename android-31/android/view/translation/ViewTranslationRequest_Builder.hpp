#pragma once

#include "../autofill/AutofillId.def.hpp"
#include "./TranslationRequestValue.def.hpp"
#include "./ViewTranslationRequest.def.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationRequest_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0)
		: JObject(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		) {}
	inline ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0, jlong arg1)
		: JObject(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::view::translation::ViewTranslationRequest ViewTranslationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/ViewTranslationRequest;"
		);
	}
	inline android::view::translation::ViewTranslationRequest_Builder ViewTranslationRequest_Builder::setValue(JString arg0, android::view::translation::TranslationRequestValue arg1) const
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/String;Landroid/view/translation/TranslationRequestValue;)Landroid/view/translation/ViewTranslationRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::view::translation

// Base class headers

