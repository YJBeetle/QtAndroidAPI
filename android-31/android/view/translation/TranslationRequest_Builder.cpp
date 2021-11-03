#include "./TranslationRequest.hpp"
#include "./TranslationRequest_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// QJniObject forward
	TranslationRequest_Builder::TranslationRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TranslationRequest_Builder::TranslationRequest_Builder()
		: JObject(
			"android.view.translation.TranslationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::translation::TranslationRequest TranslationRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationRequest;"
		);
	}
	android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setFlags(jint arg0)
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/view/translation/TranslationRequest$Builder;",
			arg0
		);
	}
	android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setTranslationRequestValues(JObject arg0)
	{
		return callObjectMethod(
			"setTranslationRequestValues",
			"(Ljava/util/List;)Landroid/view/translation/TranslationRequest$Builder;",
			arg0.object()
		);
	}
	android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setViewTranslationRequests(JObject arg0)
	{
		return callObjectMethod(
			"setViewTranslationRequests",
			"(Ljava/util/List;)Landroid/view/translation/TranslationRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::translation

