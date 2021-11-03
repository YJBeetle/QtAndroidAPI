#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "../os/Parcel.hpp"
#include "./SurfaceControl.hpp"
#include "../../JString.hpp"
#include "./Surface.hpp"

namespace android::view
{
	// Fields
	JObject Surface::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Surface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Surface::FRAME_RATE_COMPATIBILITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"FRAME_RATE_COMPATIBILITY_DEFAULT"
		);
	}
	jint Surface::FRAME_RATE_COMPATIBILITY_FIXED_SOURCE()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"FRAME_RATE_COMPATIBILITY_FIXED_SOURCE"
		);
	}
	jint Surface::ROTATION_0()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_0"
		);
	}
	jint Surface::ROTATION_180()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_180"
		);
	}
	jint Surface::ROTATION_270()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_270"
		);
	}
	jint Surface::ROTATION_90()
	{
		return getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_90"
		);
	}
	
	// QJniObject forward
	Surface::Surface(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Surface::Surface(android::graphics::SurfaceTexture arg0)
		: JObject(
			"android.view.Surface",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		) {}
	Surface::Surface(android::view::SurfaceControl arg0)
		: JObject(
			"android.view.Surface",
			"(Landroid/view/SurfaceControl;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Surface::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Surface::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	android::graphics::Canvas Surface::lockCanvas(android::graphics::Rect arg0)
	{
		return callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.object()
		);
	}
	android::graphics::Canvas Surface::lockHardwareCanvas()
	{
		return callObjectMethod(
			"lockHardwareCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	void Surface::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Surface::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void Surface::setFrameRate(jfloat arg0, jint arg1)
	{
		callMethod<void>(
			"setFrameRate",
			"(FI)V",
			arg0,
			arg1
		);
	}
	JString Surface::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Surface::unlockCanvas(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"unlockCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Surface::unlockCanvasAndPost(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Surface::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

