#pragma once

#ifndef ANDROID_VIEW_SURFACE
#define ANDROID_VIEW_SURFACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class SurfaceControl;
}
namespace __jni_impl::android::graphics
{
	class SurfaceTexture;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class Surface : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ROTATION_0();
		static jint ROTATION_180();
		static jint ROTATION_270();
		static jint ROTATION_90();
		
		// Constructors
		void __constructor(__jni_impl::android::view::SurfaceControl arg0);
		void __constructor(__jni_impl::android::graphics::SurfaceTexture arg0);
		
		// Methods
		QAndroidJniObject toString();
		void release();
		jboolean isValid();
		QAndroidJniObject lockCanvas(__jni_impl::android::graphics::Rect arg0);
		void unlockCanvasAndPost(__jni_impl::android::graphics::Canvas arg0);
		QAndroidJniObject lockHardwareCanvas();
		void unlockCanvas(__jni_impl::android::graphics::Canvas arg0);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "SurfaceControl.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject Surface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Surface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint Surface::ROTATION_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_0");
	}
	jint Surface::ROTATION_180()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_180");
	}
	jint Surface::ROTATION_270()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_270");
	}
	jint Surface::ROTATION_90()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Surface",
			"ROTATION_90");
	}
	
	// Constructors
	void Surface::__constructor(__jni_impl::android::view::SurfaceControl arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface",
			"(Landroid/view/SurfaceControl;)V",
			arg0.__jniObject().object());
	}
	void Surface::__constructor(__jni_impl::android::graphics::SurfaceTexture arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Surface",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Surface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Surface::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	jboolean Surface::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z");
	}
	QAndroidJniObject Surface::lockCanvas(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callObjectMethod(
			"lockCanvas",
			"(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",
			arg0.__jniObject().object());
	}
	void Surface::unlockCanvasAndPost(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvasAndPost",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Surface::lockHardwareCanvas()
	{
		return __thiz.callObjectMethod(
			"lockHardwareCanvas",
			"()Landroid/graphics/Canvas;");
	}
	void Surface::unlockCanvas(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"unlockCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void Surface::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	jint Surface::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Surface::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Surface : public __jni_impl::android::view::Surface
	{
	public:
		Surface(QAndroidJniObject obj) { __thiz = obj; }
		Surface(__jni_impl::android::view::SurfaceControl arg0)
		{
			__constructor(
				arg0);
		}
		Surface(__jni_impl::android::graphics::SurfaceTexture arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACE

