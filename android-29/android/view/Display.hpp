#pragma once

#ifndef ANDROID_VIEW_DISPLAY
#define ANDROID_VIEW_DISPLAY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::view
{
	class Display_Mode;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class DisplayCutout;
}
namespace __jni_impl::android::view
{
	class Display_HdrCapabilities;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::util
{
	class DisplayMetrics;
}

namespace __jni_impl::android::view
{
	class Display : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT_DISPLAY();
		static jint FLAG_PRESENTATION();
		static jint FLAG_PRIVATE();
		static jint FLAG_ROUND();
		static jint FLAG_SECURE();
		static jint FLAG_SUPPORTS_PROTECTED_BUFFERS();
		static jint INVALID_DISPLAY();
		static jint STATE_DOZE();
		static jint STATE_DOZE_SUSPEND();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_ON_SUSPEND();
		static jint STATE_UNKNOWN();
		static jint STATE_VR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jstring toString();
		jint getState();
		void getSize(__jni_impl::android::graphics::Point arg0);
		jint getFlags();
		jboolean isValid();
		QAndroidJniObject getMode();
		jint getRotation();
		jint getWidth();
		jint getHeight();
		jint getOrientation();
		jint getDisplayId();
		void getRectSize(__jni_impl::android::graphics::Rect arg0);
		void getCurrentSizeRange(__jni_impl::android::graphics::Point arg0, __jni_impl::android::graphics::Point arg1);
		QAndroidJniObject getCutout();
		jint getPixelFormat();
		jfloat getRefreshRate();
		jfloatArray getSupportedRefreshRates();
		jarray getSupportedModes();
		QAndroidJniObject getHdrCapabilities();
		jboolean isHdr();
		jboolean isWideColorGamut();
		QAndroidJniObject getPreferredWideGamutColorSpace();
		jlong getAppVsyncOffsetNanos();
		jlong getPresentationDeadlineNanos();
		void getMetrics(__jni_impl::android::util::DisplayMetrics arg0);
		void getRealSize(__jni_impl::android::graphics::Point arg0);
		void getRealMetrics(__jni_impl::android::util::DisplayMetrics arg0);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Point.hpp"
#include "Display_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "DisplayCutout.hpp"
#include "Display_HdrCapabilities.hpp"
#include "../graphics/ColorSpace.hpp"
#include "../util/DisplayMetrics.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint Display::DEFAULT_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"DEFAULT_DISPLAY"
		);
	}
	jint Display::FLAG_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRESENTATION"
		);
	}
	jint Display::FLAG_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_PRIVATE"
		);
	}
	jint Display::FLAG_ROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_ROUND"
		);
	}
	jint Display::FLAG_SECURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_SECURE"
		);
	}
	jint Display::FLAG_SUPPORTS_PROTECTED_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"FLAG_SUPPORTS_PROTECTED_BUFFERS"
		);
	}
	jint Display::INVALID_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"INVALID_DISPLAY"
		);
	}
	jint Display::STATE_DOZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE"
		);
	}
	jint Display::STATE_DOZE_SUSPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_DOZE_SUSPEND"
		);
	}
	jint Display::STATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_OFF"
		);
	}
	jint Display::STATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_ON"
		);
	}
	jint Display::STATE_ON_SUSPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_ON_SUSPEND"
		);
	}
	jint Display::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_UNKNOWN"
		);
	}
	jint Display::STATE_VR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Display",
			"STATE_VR"
		);
	}
	
	// Constructors
	void Display::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.Display",
			"(V)V");
	}
	
	// Methods
	jstring Display::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Display::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Display::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void Display::getSize(__jni_impl::android::graphics::Point arg0)
	{
		__thiz.callMethod<void>(
			"getSize",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	jint Display::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jboolean Display::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	QAndroidJniObject Display::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Landroid/view/Display$Mode;"
		);
	}
	jint Display::getRotation()
	{
		return __thiz.callMethod<jint>(
			"getRotation",
			"()I"
		);
	}
	jint Display::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Display::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Display::getOrientation()
	{
		return __thiz.callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint Display::getDisplayId()
	{
		return __thiz.callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	void Display::getRectSize(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getRectSize",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void Display::getCurrentSizeRange(__jni_impl::android::graphics::Point arg0, __jni_impl::android::graphics::Point arg1)
	{
		__thiz.callMethod<void>(
			"getCurrentSizeRange",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Display::getCutout()
	{
		return __thiz.callObjectMethod(
			"getCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	jint Display::getPixelFormat()
	{
		return __thiz.callMethod<jint>(
			"getPixelFormat",
			"()I"
		);
	}
	jfloat Display::getRefreshRate()
	{
		return __thiz.callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	jfloatArray Display::getSupportedRefreshRates()
	{
		return __thiz.callObjectMethod(
			"getSupportedRefreshRates",
			"()[F"
		).object<jfloatArray>();
	}
	jarray Display::getSupportedModes()
	{
		return __thiz.callObjectMethod(
			"getSupportedModes",
			"()[Landroid/view/Display$Mode;"
		).object<jarray>();
	}
	QAndroidJniObject Display::getHdrCapabilities()
	{
		return __thiz.callObjectMethod(
			"getHdrCapabilities",
			"()Landroid/view/Display$HdrCapabilities;"
		);
	}
	jboolean Display::isHdr()
	{
		return __thiz.callMethod<jboolean>(
			"isHdr",
			"()Z"
		);
	}
	jboolean Display::isWideColorGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	QAndroidJniObject Display::getPreferredWideGamutColorSpace()
	{
		return __thiz.callObjectMethod(
			"getPreferredWideGamutColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jlong Display::getAppVsyncOffsetNanos()
	{
		return __thiz.callMethod<jlong>(
			"getAppVsyncOffsetNanos",
			"()J"
		);
	}
	jlong Display::getPresentationDeadlineNanos()
	{
		return __thiz.callMethod<jlong>(
			"getPresentationDeadlineNanos",
			"()J"
		);
	}
	void Display::getMetrics(__jni_impl::android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"getMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	void Display::getRealSize(__jni_impl::android::graphics::Point arg0)
	{
		__thiz.callMethod<void>(
			"getRealSize",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	void Display::getRealMetrics(__jni_impl::android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"getRealMetrics",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Display : public __jni_impl::android::view::Display
	{
	public:
		Display(QAndroidJniObject obj) { __thiz = obj; }
		Display()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_DISPLAY

