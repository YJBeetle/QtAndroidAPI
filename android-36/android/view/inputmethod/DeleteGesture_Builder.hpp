#pragma once

#include "../../graphics/RectF.def.hpp"
#include "./DeleteGesture.def.hpp"
#include "../../../JString.hpp"
#include "./DeleteGesture_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline DeleteGesture_Builder::DeleteGesture_Builder()
		: JObject(
			"android.view.inputmethod.DeleteGesture$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::DeleteGesture DeleteGesture_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/DeleteGesture;"
		);
	}
	inline android::view::inputmethod::DeleteGesture_Builder DeleteGesture_Builder::setDeletionArea(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setDeletionArea",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/DeleteGesture$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::DeleteGesture_Builder DeleteGesture_Builder::setFallbackText(JString arg0) const
	{
		return callObjectMethod(
			"setFallbackText",
			"(Ljava/lang/String;)Landroid/view/inputmethod/DeleteGesture$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::DeleteGesture_Builder DeleteGesture_Builder::setGranularity(jint arg0) const
	{
		return callObjectMethod(
			"setGranularity",
			"(I)Landroid/view/inputmethod/DeleteGesture$Builder;",
			arg0
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
