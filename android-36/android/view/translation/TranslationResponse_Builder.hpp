#pragma once

#include "../../util/SparseArray.def.hpp"
#include "./TranslationResponse.def.hpp"
#include "./TranslationResponseValue.def.hpp"
#include "./ViewTranslationResponse.def.hpp"
#include "./TranslationResponse_Builder.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	inline TranslationResponse_Builder::TranslationResponse_Builder(jint arg0)
		: JObject(
			"android.view.translation.TranslationResponse$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::translation::TranslationResponse TranslationResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationResponse;"
		);
	}
	inline android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setFinalResponse(jboolean arg0) const
	{
		return callObjectMethod(
			"setFinalResponse",
			"(Z)Landroid/view/translation/TranslationResponse$Builder;",
			arg0
		);
	}
	inline android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setTranslationResponseValue(jint arg0, android::view::translation::TranslationResponseValue arg1) const
	{
		return callObjectMethod(
			"setTranslationResponseValue",
			"(ILandroid/view/translation/TranslationResponseValue;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setTranslationResponseValues(android::util::SparseArray arg0) const
	{
		return callObjectMethod(
			"setTranslationResponseValues",
			"(Landroid/util/SparseArray;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0.object()
		);
	}
	inline android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setViewTranslationResponse(jint arg0, android::view::translation::ViewTranslationResponse arg1) const
	{
		return callObjectMethod(
			"setViewTranslationResponse",
			"(ILandroid/view/translation/ViewTranslationResponse;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setViewTranslationResponses(android::util::SparseArray arg0) const
	{
		return callObjectMethod(
			"setViewTranslationResponses",
			"(Landroid/util/SparseArray;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
