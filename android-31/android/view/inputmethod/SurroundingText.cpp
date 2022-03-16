#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./SurroundingText.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject SurroundingText::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.SurroundingText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	SurroundingText::SurroundingText(JString arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.inputmethod.SurroundingText",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint SurroundingText::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SurroundingText::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint SurroundingText::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint SurroundingText::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	JString SurroundingText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	void SurroundingText::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

