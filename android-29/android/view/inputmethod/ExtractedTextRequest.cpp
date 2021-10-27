#include "../../os/Parcel.hpp"
#include "./ExtractedTextRequest.hpp"

namespace android::view::inputmethod
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
	
	ExtractedTextRequest::ExtractedTextRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExtractedTextRequest::ExtractedTextRequest()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.ExtractedTextRequest",
			"()V"
		);
	}
	
	// Methods
	jint ExtractedTextRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedTextRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

