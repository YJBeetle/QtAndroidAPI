#pragma once

#include "../os/Parcel.def.hpp"
#include "./WindowId_FocusObserver.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WindowId.def.hpp"

namespace android::view
{
	// Fields
	inline JObject WindowId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WindowId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WindowId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WindowId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WindowId::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline void WindowId::registerFocusObserver(android::view::WindowId_FocusObserver arg0) const
	{
		callMethod<void>(
			"registerFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	inline JString WindowId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WindowId::unregisterFocusObserver(android::view::WindowId_FocusObserver arg0) const
	{
		callMethod<void>(
			"unregisterFocusObserver",
			"(Landroid/view/WindowId$FocusObserver;)V",
			arg0.object()
		);
	}
	inline void WindowId::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
