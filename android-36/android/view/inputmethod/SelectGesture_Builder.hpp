#pragma once

#include "../../graphics/RectF.def.hpp"
#include "./SelectGesture.def.hpp"
#include "../../../JString.hpp"
#include "./SelectGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline SelectGesture_Builder::SelectGesture_Builder()
		: JObject(
			"android.view.inputmethod.SelectGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::SelectGesture SelectGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/SelectGesture;"
		);
	}
	inline android::view::inputmethod::SelectGesture_Builder SelectGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/SelectGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::SelectGesture_Builder SelectGesture_Builder::setGranularity(jint arg0) const
	{
		return callObjectMethod(
			"setGranularity",
			"(I)Landroid/view/inputmethod/SelectGesture$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::SelectGesture_Builder SelectGesture_Builder::setSelectionArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setSelectionArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/SelectGesture$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
