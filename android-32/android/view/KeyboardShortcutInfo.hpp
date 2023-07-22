#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./KeyboardShortcutInfo.def.hpp"

namespace android::view
{
	// Fields
	inline JObject KeyboardShortcutInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyboardShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline KeyboardShortcutInfo::KeyboardShortcutInfo(JString arg0, jchar arg1, jint arg2)
		: JObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;CI)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	inline KeyboardShortcutInfo::KeyboardShortcutInfo(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint KeyboardShortcutInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jchar KeyboardShortcutInfo::getBaseCharacter() const
	{
		return callMethod<jchar>(
			"getBaseCharacter",
			"()C"
		);
	}
	inline jint KeyboardShortcutInfo::getKeycode() const
	{
		return callMethod<jint>(
			"getKeycode",
			"()I"
		);
	}
	inline JString KeyboardShortcutInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint KeyboardShortcutInfo::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline void KeyboardShortcutInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
