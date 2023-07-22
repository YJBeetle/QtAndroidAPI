#pragma once

#include "../../graphics/Matrix.def.hpp"
#include "./CursorAnchorInfo.def.hpp"
#include "./EditorBoundsInfo.def.hpp"
#include "../../../JString.hpp"
#include "./CursorAnchorInfo_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline CursorAnchorInfo_Builder::CursorAnchorInfo_Builder()
		: JObject(
			"android.view.inputmethod.CursorAnchorInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5) const
	{
		return callObjectMethod(
			"addCharacterBounds",
			"(IFFFFI)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo CursorAnchorInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/CursorAnchorInfo;"
		);
	}
	inline void CursorAnchorInfo_Builder::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setComposingText(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"setComposingText",
			"(ILjava/lang/CharSequence;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setEditorBoundsInfo(android::view::inputmethod::EditorBoundsInfo arg0) const
	{
		return callObjectMethod(
			"setEditorBoundsInfo",
			"(Landroid/view/inputmethod/EditorBoundsInfo;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4) const
	{
		return callObjectMethod(
			"setInsertionMarkerLocation",
			"(FFFFI)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setMatrix(android::graphics::Matrix arg0) const
	{
		return callObjectMethod(
			"setMatrix",
			"(Landroid/graphics/Matrix;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setSelectionRange(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setSelectionRange",
			"(II)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
