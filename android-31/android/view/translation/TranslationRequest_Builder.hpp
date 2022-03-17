#pragma once

#include "./TranslationRequest.def.hpp"
#include "./TranslationRequest_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline TranslationRequest_Builder::TranslationRequest_Builder()
		: JObject(
			"android.view.translation.TranslationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::translation::TranslationRequest TranslationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationRequest;"
		);
	}
	inline android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/view/translation/TranslationRequest$Builder;",
			arg0
		);
	}
	inline android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setTranslationRequestValues(JObject arg0) const
	{
		return callObjectMethod(
			"setTranslationRequestValues",
			"(Ljava/util/List;)Landroid/view/translation/TranslationRequest$Builder;",
			arg0.object()
		);
	}
	inline android::view::translation::TranslationRequest_Builder TranslationRequest_Builder::setViewTranslationRequests(JObject arg0) const
	{
		return callObjectMethod(
			"setViewTranslationRequests",
			"(Ljava/util/List;)Landroid/view/translation/TranslationRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
