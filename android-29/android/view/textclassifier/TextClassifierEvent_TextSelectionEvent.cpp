#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextSelectionEvent_Builder.hpp"
#include "./TextClassifierEvent_TextSelectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextClassifierEvent_TextSelectionEvent::TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeSuggestedWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeSuggestedWordStartIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeWordEndIndex",
			"()I"
		);
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeWordStartIndex",
			"()I"
		);
	}
	void TextClassifierEvent_TextSelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

