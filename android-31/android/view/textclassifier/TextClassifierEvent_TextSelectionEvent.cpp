#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextSelectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifierEvent_TextSelectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordEndIndex() const
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordStartIndex() const
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordStartIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordEndIndex() const
	{
		return callMethod<jint>(
			"getRelativeWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordStartIndex() const
	{
		return callMethod<jint>(
			"getRelativeWordStartIndex",
			"()I"
		);
	}
	void TextClassifierEvent_TextSelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

