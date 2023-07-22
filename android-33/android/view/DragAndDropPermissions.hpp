#pragma once

#include "../os/Parcel.def.hpp"
#include "./DragAndDropPermissions.def.hpp"

namespace android::view
{
	// Fields
	inline JObject DragAndDropPermissions::CREATOR()
	{
		return getStaticObjectField(
			"android.view.DragAndDropPermissions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DragAndDropPermissions::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void DragAndDropPermissions::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void DragAndDropPermissions::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
