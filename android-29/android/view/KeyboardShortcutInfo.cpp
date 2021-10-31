#include "../os/Parcel.hpp"
#include "./KeyboardShortcutInfo.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject KeyboardShortcutInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyboardShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	KeyboardShortcutInfo::KeyboardShortcutInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyboardShortcutInfo::KeyboardShortcutInfo(jstring arg0, jchar arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;CI)V",
			arg0,
			arg1,
			arg2
		);
	}
	KeyboardShortcutInfo::KeyboardShortcutInfo(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint KeyboardShortcutInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jchar KeyboardShortcutInfo::getBaseCharacter()
	{
		return __thiz.callMethod<jchar>(
			"getBaseCharacter",
			"()C"
		);
	}
	jint KeyboardShortcutInfo::getKeycode()
	{
		return __thiz.callMethod<jint>(
			"getKeycode",
			"()I"
		);
	}
	jstring KeyboardShortcutInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint KeyboardShortcutInfo::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	void KeyboardShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

