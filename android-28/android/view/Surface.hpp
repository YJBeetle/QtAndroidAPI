#pragma once

#include "../graphics/Canvas.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/SurfaceTexture.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Surface.def.hpp"

namespace android::view
{
	// Fields
	inline JObject Surface::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Surface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Surface::ROTATION_0()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_0"
		);
	}
	inline jint Surface::ROTATION_180()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_180"
		);
	}
	inline jint Surface::ROTATION_270()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_270"
		);
	}
	inline jint Surface::ROTATION_90()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_90"
		);
	}
	
	// Constructors
	inline Surface::Surface(android::graphics::SurfaceTexture arg0)
		: JObject(
			"android.view.Surface",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Surface::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Surface::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline android::graphics::Canvas Surface::lockCanvas(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.object()
		);
	}
	inline android::graphics::Canvas Surface::lockHardwareCanvas() const
	{
		return callObjectMethod(
			"lockHardwareCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	inline void Surface::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Surface::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline JString Surface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Surface::unlockCanvas(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"unlockCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void Surface::unlockCanvasAndPost(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void Surface::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
