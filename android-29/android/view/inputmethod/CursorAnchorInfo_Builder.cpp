#include "../../graphics/Matrix.hpp"
#include "./CursorAnchorInfo.hpp"
#include "./CursorAnchorInfo_Builder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	CursorAnchorInfo_Builder::CursorAnchorInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorAnchorInfo_Builder::CursorAnchorInfo_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CursorAnchorInfo$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CursorAnchorInfo_Builder::addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
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
	QAndroidJniObject CursorAnchorInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/CursorAnchorInfo;"
		);
	}
	void CursorAnchorInfo_Builder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	QAndroidJniObject CursorAnchorInfo_Builder::setComposingText(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setComposingText",
			"(ILjava/lang/CharSequence;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CursorAnchorInfo_Builder::setComposingText(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setComposingText",
			"(ILjava/lang/CharSequence;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject CursorAnchorInfo_Builder::setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"setInsertionMarkerLocation",
			"(FFFFI)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject CursorAnchorInfo_Builder::setMatrix(android::graphics::Matrix arg0)
	{
		return __thiz.callObjectMethod(
			"setMatrix",
			"(Landroid/graphics/Matrix;)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAnchorInfo_Builder::setSelectionRange(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSelectionRange",
			"(II)Landroid/view/inputmethod/CursorAnchorInfo$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::view::inputmethod

