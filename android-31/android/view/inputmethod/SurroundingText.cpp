#include "../../os/Parcel.hpp"
#include "./SurroundingText.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass SurroundingText::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.SurroundingText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SurroundingText::SurroundingText(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SurroundingText::SurroundingText(jstring arg0, jint arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.view.inputmethod.SurroundingText",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint SurroundingText::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SurroundingText::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint SurroundingText::getSelectionEnd()
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint SurroundingText::getSelectionStart()
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jstring SurroundingText::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void SurroundingText::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

