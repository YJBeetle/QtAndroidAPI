#pragma once

#include "../os/Parcel.def.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "./View_BaseSavedState.def.hpp"

namespace android::view
{
	// Fields
	inline JObject View_BaseSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.view.View$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline View_BaseSavedState::View_BaseSavedState(android::os::Parcel arg0)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline View_BaseSavedState::View_BaseSavedState(JObject arg0)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		) {}
	inline View_BaseSavedState::View_BaseSavedState(android::os::Parcel arg0, java::lang::ClassLoader arg1)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void View_BaseSavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./AbsSavedState.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
