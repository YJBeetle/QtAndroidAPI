#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER
#define ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo;
}

namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5);
		QAndroidJniObject build();
		void reset();
		QAndroidJniObject setComposingText(jint arg0, jstring arg1);
		QAndroidJniObject setComposingText(jint arg0, const QString &arg1);
		QAndroidJniObject setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4);
		QAndroidJniObject setMatrix(__jni_impl::android::graphics::Matrix arg0);
		QAndroidJniObject setSelectionRange(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../graphics/Matrix.hpp"
#include "CursorAnchorInfo.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	
	// Constructors
	void CursorAnchorInfo_Builder::__constructor()
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
	QAndroidJniObject CursorAnchorInfo_Builder::setMatrix(__jni_impl::android::graphics::Matrix arg0)
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
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class CursorAnchorInfo_Builder : public __jni_impl::android::view::inputmethod::CursorAnchorInfo_Builder
	{
	public:
		CursorAnchorInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		CursorAnchorInfo_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO_BUILDER

