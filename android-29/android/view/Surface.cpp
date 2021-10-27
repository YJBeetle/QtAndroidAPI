#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "../os/Parcel.hpp"
#include "./SurfaceControl.hpp"
#include "./Surface.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject Surface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Surface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Surface::ROTATION_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_0"
		);
	}
	jint Surface::ROTATION_180()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_180"
		);
	}
	jint Surface::ROTATION_270()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_270"
		);
	}
	jint Surface::ROTATION_90()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_90"
		);
	}
	
	Surface::Surface(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Surface::Surface(android::graphics::SurfaceTexture &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object()
		);
	}
	Surface::Surface(android::view::SurfaceControl &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface",
			"(Landroid/view/SurfaceControl;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Surface::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Surface::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	QAndroidJniObject Surface::lockCanvas(android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Surface::lockHardwareCanvas()
	{
		return __thiz.callObjectMethod(
			"lockHardwareCanvas",
			"()Landroid/graphics/Canvas;"
		);
	}
	void Surface::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Surface::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jstring Surface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Surface::unlockCanvas(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Surface::unlockCanvasAndPost(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Surface::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

