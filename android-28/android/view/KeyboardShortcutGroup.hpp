#pragma once

#include "../os/Parcel.def.hpp"
#include "./KeyboardShortcutInfo.def.hpp"
#include "../../JString.hpp"
#include "./KeyboardShortcutGroup.def.hpp"

namespace android::view
{
	// Fields
	inline JObject KeyboardShortcutGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyboardShortcutGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline KeyboardShortcutGroup::KeyboardShortcutGroup(JString arg0)
		: JObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	inline KeyboardShortcutGroup::KeyboardShortcutGroup(JString arg0, JObject arg1)
		: JObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline void KeyboardShortcutGroup::addItem(android::view::KeyboardShortcutInfo arg0) const
	{
		callMethod<void>(
			"addItem",
			"(Landroid/view/KeyboardShortcutInfo;)V",
			arg0.object()
		);
	}
	inline jint KeyboardShortcutGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject KeyboardShortcutGroup::getItems() const
	{
		return callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	inline JString KeyboardShortcutGroup::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void KeyboardShortcutGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
