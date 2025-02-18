#pragma once

#include "../../graphics/RectF.def.hpp"
#include "./DeleteRangeGesture.def.hpp"
#include "../../../JString.hpp"
#include "./DeleteRangeGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline DeleteRangeGesture_Builder::DeleteRangeGesture_Builder()
		: JObject(
			"android.view.inputmethod.DeleteRangeGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::DeleteRangeGesture DeleteRangeGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/DeleteRangeGesture;"
		);
	}
	inline android::view::inputmethod::DeleteRangeGesture_Builder DeleteRangeGesture_Builder::setDeletionEndArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setDeletionEndArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/DeleteRangeGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::DeleteRangeGesture_Builder DeleteRangeGesture_Builder::setDeletionStartArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setDeletionStartArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/DeleteRangeGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::DeleteRangeGesture_Builder DeleteRangeGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/DeleteRangeGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::DeleteRangeGesture_Builder DeleteRangeGesture_Builder::setGranularity(jint arg0) const
	{
		return callObjectMethod(
			"setGranularity",
			"(I)Landroid/view/inputmethod/DeleteRangeGesture$Builder;",
			arg0
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
