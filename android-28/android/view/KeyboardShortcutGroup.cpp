#include "../os/Parcel.hpp"
#include "./KeyboardShortcutInfo.hpp"
#include "../../JString.hpp"
#include "./KeyboardShortcutGroup.hpp"

namespace android::view
{
	// Fields
	JObject KeyboardShortcutGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyboardShortcutGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	KeyboardShortcutGroup::KeyboardShortcutGroup(JString arg0)
		: JObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	KeyboardShortcutGroup::KeyboardShortcutGroup(JString arg0, JObject arg1)
		: JObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	void KeyboardShortcutGroup::addItem(android::view::KeyboardShortcutInfo arg0) const
	{
		callMethod<void>(
			"addItem",
			"(Landroid/view/KeyboardShortcutInfo;)V",
			arg0.object()
		);
	}
	jint KeyboardShortcutGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject KeyboardShortcutGroup::getItems() const
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	JString KeyboardShortcutGroup::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	void KeyboardShortcutGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

