#include "../autofill/AutofillId.hpp"
#include "./TranslationRequestValue.hpp"
#include "./ViewTranslationRequest.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationRequest_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0)
		: JObject(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		) {}
	ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0, jlong arg1)
		: JObject(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::translation::ViewTranslationRequest ViewTranslationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/ViewTranslationRequest;"
		);
	}
	android::view::translation::ViewTranslationRequest_Builder ViewTranslationRequest_Builder::setValue(JString arg0, android::view::translation::TranslationRequestValue arg1) const
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/String;Landroid/view/translation/TranslationRequestValue;)Landroid/view/translation/ViewTranslationRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::view::translation

