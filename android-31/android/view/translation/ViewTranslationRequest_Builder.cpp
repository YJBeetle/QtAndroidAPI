#include "../autofill/AutofillId.hpp"
#include "./TranslationRequestValue.hpp"
#include "./ViewTranslationRequest.hpp"
#include "./ViewTranslationRequest_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// QAndroidJniObject forward
	ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0)
		: __JniBaseClass(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		) {}
	ViewTranslationRequest_Builder::ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0, jlong arg1)
		: __JniBaseClass(
			"android.view.translation.ViewTranslationRequest$Builder",
			"(Landroid/view/autofill/AutofillId;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::translation::ViewTranslationRequest ViewTranslationRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/ViewTranslationRequest;"
		);
	}
	android::view::translation::ViewTranslationRequest_Builder ViewTranslationRequest_Builder::setValue(jstring arg0, android::view::translation::TranslationRequestValue arg1)
	{
		return callObjectMethod(
			"setValue",
			"(Ljava/lang/String;Landroid/view/translation/TranslationRequestValue;)Landroid/view/translation/ViewTranslationRequest$Builder;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::view::translation
