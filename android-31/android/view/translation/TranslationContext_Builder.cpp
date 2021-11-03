#include "./TranslationContext.hpp"
#include "./TranslationSpec.hpp"
#include "./TranslationContext_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// QJniObject forward
	TranslationContext_Builder::TranslationContext_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TranslationContext_Builder::TranslationContext_Builder(android::view::translation::TranslationSpec arg0, android::view::translation::TranslationSpec arg1)
		: JObject(
			"android.view.translation.TranslationContext$Builder",
			"(Landroid/view/translation/TranslationSpec;Landroid/view/translation/TranslationSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::view::translation::TranslationContext TranslationContext_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationContext;"
		);
	}
	android::view::translation::TranslationContext_Builder TranslationContext_Builder::setTranslationFlags(jint arg0)
	{
		return callObjectMethod(
			"setTranslationFlags",
			"(I)Landroid/view/translation/TranslationContext$Builder;",
			arg0
		);
	}
} // namespace android::view::translation

