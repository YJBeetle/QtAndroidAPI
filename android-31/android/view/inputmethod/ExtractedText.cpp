#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ExtractedText.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject ExtractedText::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.ExtractedText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ExtractedText::FLAG_SELECTING()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SELECTING"
		);
	}
	jint ExtractedText::FLAG_SINGLE_LINE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SINGLE_LINE"
		);
	}
	jint ExtractedText::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	JString ExtractedText::hint()
	{
		return getObjectField(
			"hint",
			"Ljava/lang/CharSequence;"
		);
	}
	jint ExtractedText::partialEndOffset()
	{
		return getField<jint>(
			"partialEndOffset"
		);
	}
	jint ExtractedText::partialStartOffset()
	{
		return getField<jint>(
			"partialStartOffset"
		);
	}
	jint ExtractedText::selectionEnd()
	{
		return getField<jint>(
			"selectionEnd"
		);
	}
	jint ExtractedText::selectionStart()
	{
		return getField<jint>(
			"selectionStart"
		);
	}
	jint ExtractedText::startOffset()
	{
		return getField<jint>(
			"startOffset"
		);
	}
	JString ExtractedText::text()
	{
		return getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// QAndroidJniObject forward
	ExtractedText::ExtractedText(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExtractedText::ExtractedText()
		: JObject(
			"android.view.inputmethod.ExtractedText",
			"()V"
		) {}
	
	// Methods
	jint ExtractedText::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedText::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

