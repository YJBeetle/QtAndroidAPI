#include "../os/Parcel.hpp"
#include "./KeyboardShortcutInfo.hpp"
#include "./KeyboardShortcutGroup.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass KeyboardShortcutGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyboardShortcutGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	KeyboardShortcutGroup::KeyboardShortcutGroup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyboardShortcutGroup::KeyboardShortcutGroup(jstring arg0)
		: __JniBaseClass(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	KeyboardShortcutGroup::KeyboardShortcutGroup(jstring arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;Ljava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	void KeyboardShortcutGroup::addItem(android::view::KeyboardShortcutInfo arg0)
	{
		callMethod<void>(
			"addItem",
			"(Landroid/view/KeyboardShortcutInfo;)V",
			arg0.object()
		);
	}
	jint KeyboardShortcutGroup::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass KeyboardShortcutGroup::getItems()
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	jstring KeyboardShortcutGroup::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void KeyboardShortcutGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

