#pragma once

#ifndef ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY
#define ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class Display;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void release();
		void resize(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject getDisplay();
		QAndroidJniObject getSurface();
		void setSurface(__jni_impl::android::view::Surface arg0);
	};
} // namespace __jni_impl::android::hardware::display

#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"

namespace __jni_impl::android::hardware::display
{
	// Fields
	
	// Constructors
	void VirtualDisplay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.display.VirtualDisplay",
			"(V)V");
	}
	
	// Methods
	jstring VirtualDisplay::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VirtualDisplay::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void VirtualDisplay::resize(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"resize",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject VirtualDisplay::getDisplay()
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	QAndroidJniObject VirtualDisplay::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void VirtualDisplay::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::display

namespace android::hardware::display
{
	class VirtualDisplay : public __jni_impl::android::hardware::display::VirtualDisplay
	{
	public:
		VirtualDisplay(QAndroidJniObject obj) { __thiz = obj; }
		VirtualDisplay()
		{
			__constructor();
		}
	};
} // namespace android::hardware::display

#endif // ANDROID_HARDWARE_DISPLAY_VIRTUALDISPLAY

