#include "../../os/Parcel.hpp"
#include "./ExtractedTextRequest.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject ExtractedTextRequest::CREATOR()
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
	ExtractedTextRequest::ExtractedTextRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExtractedTextRequest::ExtractedTextRequest()
		: JObject(
			"android.view.inputmethod.ExtractedTextRequest",
			"()V"
		) {}
	
	// Methods
	jint ExtractedTextRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedTextRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

