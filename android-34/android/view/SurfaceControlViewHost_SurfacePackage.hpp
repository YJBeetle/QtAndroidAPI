#pragma once

#include "../content/res/Configuration.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./SurfaceControl.def.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.def.hpp"

namespace android::view
{
	// Fields
	inline JObject SurfaceControlViewHost_SurfacePackage::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControlViewHost$SurfacePackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SurfaceControlViewHost_SurfacePackage::SurfaceControlViewHost_SurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage &arg0)
		: JObject(
			"android.view.SurfaceControlViewHost$SurfacePackage",
			"(Landroid/view/SurfaceControlViewHost$SurfacePackage;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint SurfaceControlViewHost_SurfacePackage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::SurfaceControl SurfaceControlViewHost_SurfacePackage::getSurfaceControl() const
	{
		return callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;"
		);
	}
	inline void SurfaceControlViewHost_SurfacePackage::notifyConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"notifyConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void SurfaceControlViewHost_SurfacePackage::notifyDetachedFromWindow() const
	{
		callMethod<void>(
			"notifyDetachedFromWindow",
			"()V"
		);
	}
	inline void SurfaceControlViewHost_SurfacePackage::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void SurfaceControlViewHost_SurfacePackage::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
