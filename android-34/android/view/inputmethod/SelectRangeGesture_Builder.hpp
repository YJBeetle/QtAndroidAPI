#pragma once

#include "../../graphics/RectF.def.hpp"
#include "./SelectRangeGesture.def.hpp"
#include "../../../JString.hpp"
#include "./SelectRangeGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline SelectRangeGesture_Builder::SelectRangeGesture_Builder()
		: JObject(
			"android.view.inputmethod.SelectRangeGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::SelectRangeGesture SelectRangeGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/SelectRangeGesture;"
		);
	}
	inline android::view::inputmethod::SelectRangeGesture_Builder SelectRangeGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/SelectRangeGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::SelectRangeGesture_Builder SelectRangeGesture_Builder::setGranularity(jint arg0) const
	{
		return callObjectMethod(
			"setGranularity",
			"(I)Landroid/view/inputmethod/SelectRangeGesture$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::SelectRangeGesture_Builder SelectRangeGesture_Builder::setSelectionEndArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setSelectionEndArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/SelectRangeGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::SelectRangeGesture_Builder SelectRangeGesture_Builder::setSelectionStartArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setSelectionStartArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/SelectRangeGesture$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
