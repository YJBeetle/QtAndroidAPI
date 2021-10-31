#include "../os/Parcel.hpp"
#include "./KeyboardShortcutInfo.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass KeyboardShortcutInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyboardShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	KeyboardShortcutInfo::KeyboardShortcutInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyboardShortcutInfo::KeyboardShortcutInfo(jstring arg0, jchar arg1, jint arg2)
		: __JniBaseClass(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;CI)V",
			arg0,
			arg1,
			arg2
		) {}
	KeyboardShortcutInfo::KeyboardShortcutInfo(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint KeyboardShortcutInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jchar KeyboardShortcutInfo::getBaseCharacter()
	{
		return callMethod<jchar>(
			"getBaseCharacter",
			"()C"
		);
	}
	jint KeyboardShortcutInfo::getKeycode()
	{
		return callMethod<jint>(
			"getKeycode",
			"()I"
		);
	}
	jstring KeyboardShortcutInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint KeyboardShortcutInfo::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	void KeyboardShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

