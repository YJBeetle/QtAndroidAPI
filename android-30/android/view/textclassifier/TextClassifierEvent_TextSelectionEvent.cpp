#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextSelectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextClassifierEvent_TextSelectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextClassifierEvent_TextSelectionEvent::TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordEndIndex()
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordStartIndex()
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordStartIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordEndIndex()
	{
		return callMethod<jint>(
			"getRelativeWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordStartIndex()
	{
		return callMethod<jint>(
			"getRelativeWordStartIndex",
			"()I"
		);
	}
	void TextClassifierEvent_TextSelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

