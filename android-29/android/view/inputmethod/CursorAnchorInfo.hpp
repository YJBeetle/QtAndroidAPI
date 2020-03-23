#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO
#define ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}

namespace __jni_impl::android::view::inputmethod
{
	class CursorAnchorInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_HAS_INVISIBLE_REGION();
		static jint FLAG_HAS_VISIBLE_REGION();
		static jint FLAG_IS_RTL();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getSelectionStart();
		jint getSelectionEnd();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMatrix();
		jint getComposingTextStart();
		QAndroidJniObject getComposingText();
		jint getInsertionMarkerFlags();
		jfloat getInsertionMarkerHorizontal();
		jfloat getInsertionMarkerTop();
		jfloat getInsertionMarkerBaseline();
		jfloat getInsertionMarkerBottom();
		QAndroidJniObject getCharacterBounds(jint arg0);
		jint getCharacterBoundsFlags(jint arg0);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Parcel.hpp"
#include "../../graphics/Matrix.hpp"
#include "../../graphics/RectF.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject CursorAnchorInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.CursorAnchorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint CursorAnchorInfo::FLAG_HAS_INVISIBLE_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_INVISIBLE_REGION");
	}
	jint CursorAnchorInfo::FLAG_HAS_VISIBLE_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_VISIBLE_REGION");
	}
	jint CursorAnchorInfo::FLAG_IS_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_IS_RTL");
	}
	
	// Constructors
	void CursorAnchorInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CursorAnchorInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean CursorAnchorInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CursorAnchorInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CursorAnchorInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint CursorAnchorInfo::getSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getSelectionStart",
			"()I");
	}
	jint CursorAnchorInfo::getSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getSelectionEnd",
			"()I");
	}
	jint CursorAnchorInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CursorAnchorInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CursorAnchorInfo::getMatrix()
	{
		return __thiz.callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;");
	}
	jint CursorAnchorInfo::getComposingTextStart()
	{
		return __thiz.callMethod<jint>(
			"getComposingTextStart",
			"()I");
	}
	QAndroidJniObject CursorAnchorInfo::getComposingText()
	{
		return __thiz.callObjectMethod(
			"getComposingText",
			"()Ljava/lang/CharSequence;");
	}
	jint CursorAnchorInfo::getInsertionMarkerFlags()
	{
		return __thiz.callMethod<jint>(
			"getInsertionMarkerFlags",
			"()I");
	}
	jfloat CursorAnchorInfo::getInsertionMarkerHorizontal()
	{
		return __thiz.callMethod<jfloat>(
			"getInsertionMarkerHorizontal",
			"()F");
	}
	jfloat CursorAnchorInfo::getInsertionMarkerTop()
	{
		return __thiz.callMethod<jfloat>(
			"getInsertionMarkerTop",
			"()F");
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBaseline()
	{
		return __thiz.callMethod<jfloat>(
			"getInsertionMarkerBaseline",
			"()F");
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBottom()
	{
		return __thiz.callMethod<jfloat>(
			"getInsertionMarkerBottom",
			"()F");
	}
	QAndroidJniObject CursorAnchorInfo::getCharacterBounds(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCharacterBounds",
			"(I)Landroid/graphics/RectF;",
			arg0);
	}
	jint CursorAnchorInfo::getCharacterBoundsFlags(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getCharacterBoundsFlags",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class CursorAnchorInfo : public __jni_impl::android::view::inputmethod::CursorAnchorInfo
	{
	public:
		CursorAnchorInfo(QAndroidJniObject obj) { __thiz = obj; }
		CursorAnchorInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_CURSORANCHORINFO

