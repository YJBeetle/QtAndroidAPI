#include "../autofill/AutofillId.hpp"
#include "./TranslationResponseValue.hpp"
#include "./ViewTranslationResponse.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationResponse_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// QJniObject forward
	ViewTranslationResponse_Builder::ViewTranslationResponse_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ViewTranslationResponse_Builder::ViewTranslationResponse_Builder(android::view::autofill::AutofillId arg0)
		: JObject(
			"android.view.translation.ViewTranslationResponse$Builder",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::translation::ViewTranslationResponse ViewTranslationResponse_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/ViewTranslationResponse;"
		);
	}
	android::view::translation::ViewTranslationResponse_Builder ViewTranslationResponse_Builder::setValue(JString arg0, android::view::translation::TranslationResponseValue arg1)
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/String;Landroid/view/translation/TranslationResponseValue;)Landroid/view/translation/ViewTranslationResponse$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::view::translation

