#pragma once

#include "../../graphics/RectF.def.hpp"
#include "./EditorBoundsInfo.def.hpp"
#include "./EditorBoundsInfo_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline EditorBoundsInfo_Builder::EditorBoundsInfo_Builder()
		: JObject(
			"android.view.inputmethod.EditorBoundsInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::EditorBoundsInfo EditorBoundsInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/EditorBoundsInfo;"
		);
	}
	inline android::view::inputmethod::EditorBoundsInfo_Builder EditorBoundsInfo_Builder::setEditorBounds(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setEditorBounds",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/EditorBoundsInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::EditorBoundsInfo_Builder EditorBoundsInfo_Builder::setHandwritingBounds(android::graphics::RectF arg0) const
	{
		return callObjectMethod(
			"setHandwritingBounds",
			"(Landroid/graphics/RectF;)Landroid/view/inputmethod/EditorBoundsInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
