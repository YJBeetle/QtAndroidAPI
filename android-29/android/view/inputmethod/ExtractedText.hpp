#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT
#define ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_SELECTING();
		static jint FLAG_SINGLE_LINE();
		jint flags();
		jstring hint();
		jint partialEndOffset();
		jint partialStartOffset();
		jint selectionEnd();
		jint selectionStart();
		jint startOffset();
		jstring text();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject ExtractedText::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.ExtractedText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ExtractedText::FLAG_SELECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SELECTING"
		);
	}
	jint ExtractedText::FLAG_SINGLE_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SINGLE_LINE"
		);
	}
	jint ExtractedText::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring ExtractedText::hint()
	{
		return __thiz.getObjectField(
			"hint",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ExtractedText::partialEndOffset()
	{
		return __thiz.getField<jint>(
			"partialEndOffset"
		);
	}
	jint ExtractedText::partialStartOffset()
	{
		return __thiz.getField<jint>(
			"partialStartOffset"
		);
	}
	jint ExtractedText::selectionEnd()
	{
		return __thiz.getField<jint>(
			"selectionEnd"
		);
	}
	jint ExtractedText::selectionStart()
	{
		return __thiz.getField<jint>(
			"selectionStart"
		);
	}
	jint ExtractedText::startOffset()
	{
		return __thiz.getField<jint>(
			"startOffset"
		);
	}
	jstring ExtractedText::text()
	{
		return __thiz.getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// Constructors
	void ExtractedText::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.ExtractedText",
			"()V"
		);
	}
	
	// Methods
	jint ExtractedText::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedText::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class ExtractedText : public __jni_impl::android::view::inputmethod::ExtractedText
	{
	public:
		ExtractedText(QAndroidJniObject obj) { __thiz = obj; }
		ExtractedText()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT

