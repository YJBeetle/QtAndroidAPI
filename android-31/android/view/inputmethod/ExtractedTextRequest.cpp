#include "../../os/Parcel.hpp"
#include "./ExtractedTextRequest.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass ExtractedTextRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.ExtractedTextRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ExtractedTextRequest::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint ExtractedTextRequest::hintMaxChars()
	{
		return getField<jint>(
			"hintMaxChars"
		);
	}
	jint ExtractedTextRequest::hintMaxLines()
	{
		return getField<jint>(
			"hintMaxLines"
		);
	}
	jint ExtractedTextRequest::token()
	{
		return getField<jint>(
			"token"
		);
	}
	
	// QAndroidJniObject forward
	ExtractedTextRequest::ExtractedTextRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExtractedTextRequest::ExtractedTextRequest()
		: __JniBaseClass(
			"android.view.inputmethod.ExtractedTextRequest",
			"()V"
		) {}
	
	// Methods
	jint ExtractedTextRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedTextRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

