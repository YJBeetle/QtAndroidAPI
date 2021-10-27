#include "../../os/Parcel.hpp"
#include "./ExtractedText.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject ExtractedText::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.ExtractedText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ExtractedText::FLAG_SELECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SELECTING"
		);
	}
	jint ExtractedText::FLAG_SINGLE_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SINGLE_LINE"
		);
	}
	jint ExtractedText::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring ExtractedText::hint()
	{
		return __thiz.getObjectField(
			"hint",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ExtractedText::partialEndOffset()
	{
		return __thiz.getField<jint>(
			"partialEndOffset"
		);
	}
	jint ExtractedText::partialStartOffset()
	{
		return __thiz.getField<jint>(
			"partialStartOffset"
		);
	}
	jint ExtractedText::selectionEnd()
	{
		return __thiz.getField<jint>(
			"selectionEnd"
		);
	}
	jint ExtractedText::selectionStart()
	{
		return __thiz.getField<jint>(
			"selectionStart"
		);
	}
	jint ExtractedText::startOffset()
	{
		return __thiz.getField<jint>(
			"startOffset"
		);
	}
	jstring ExtractedText::text()
	{
		return __thiz.getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	ExtractedText::ExtractedText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExtractedText::ExtractedText()
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.ExtractedText",
			"()V"
		);
	}
	
	// Methods
	jint ExtractedText::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ExtractedText::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

