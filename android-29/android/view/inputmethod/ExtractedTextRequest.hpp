#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST
#define ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class ExtractedTextRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint flags();
		jint hintMaxChars();
		jint hintMaxLines();
		jint token();
		
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
	QAndroidJniObject ExtractedTextRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.ExtractedTextRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ExtractedTextRequest::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint ExtractedTextRequest::hintMaxChars()
	{
		return __thiz.getField<jint>(
			"hintMaxChars"
		);
	}
	jint ExtractedTextRequest::hintMaxLines()
	{
		return __thiz.getField<jint>(
			"hintMaxLines"
		);
	}
	jint ExtractedTextRequest::token()
	{
		return __thiz.getField<jint>(
			"token"
		);
	}
	
	// Constructors
	void ExtractedTextRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.ExtractedTextRequest",
			"()V");
	}
	
	// Methods
	jint ExtractedTextRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedTextRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ExtractedTextRequest : public __jni_impl::android::view::inputmethod::ExtractedTextRequest
	{
	public:
		ExtractedTextRequest(QAndroidJniObject obj) { __thiz = obj; }
		ExtractedTextRequest()
		{
			__constructor();
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST

