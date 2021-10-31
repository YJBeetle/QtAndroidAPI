#include "../../graphics/Matrix.hpp"
#include "./CursorAnchorInfo.hpp"
#include "./CursorAnchorInfo_Builder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// QAndroidJniObject forward
	CursorAnchorInfo_Builder::CursorAnchorInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CursorAnchorInfo_Builder::CursorAnchorInfo_Builder()
		: __JniBaseClass(
			"android.view.inputmethod.CursorAnchorInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5)
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
	android::view::inputmethod::CursorAnchorInfo CursorAnchorInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/CursorAnchorInfo;"
		);
	}
	void CursorAnchorInfo_Builder::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setComposingText(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"setComposingText",
			"(ILjava/lang/CharSequence;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1
		);
	}
	android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4)
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
	android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setMatrix(android::graphics::Matrix arg0)
	{
		return callObjectMethod(
			"setMatrix",
			"(Landroid/graphics/Matrix;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::CursorAnchorInfo_Builder CursorAnchorInfo_Builder::setSelectionRange(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setSelectionRange",
			"(II)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::view::inputmethod

