#pragma once

#ifndef ANDROID_CONTENT_RES_CONFIGURATION
#define ANDROID_CONTENT_RES_CONFIGURATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::content::res
{
	class Configuration : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_MODE_HDR_MASK();
		static jint COLOR_MODE_HDR_NO();
		static jint COLOR_MODE_HDR_SHIFT();
		static jint COLOR_MODE_HDR_UNDEFINED();
		static jint COLOR_MODE_HDR_YES();
		static jint COLOR_MODE_UNDEFINED();
		static jint COLOR_MODE_WIDE_COLOR_GAMUT_MASK();
		static jint COLOR_MODE_WIDE_COLOR_GAMUT_NO();
		static jint COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED();
		static jint COLOR_MODE_WIDE_COLOR_GAMUT_YES();
		static QAndroidJniObject CREATOR();
		static jint DENSITY_DPI_UNDEFINED();
		static jint HARDKEYBOARDHIDDEN_NO();
		static jint HARDKEYBOARDHIDDEN_UNDEFINED();
		static jint HARDKEYBOARDHIDDEN_YES();
		static jint KEYBOARDHIDDEN_NO();
		static jint KEYBOARDHIDDEN_UNDEFINED();
		static jint KEYBOARDHIDDEN_YES();
		static jint KEYBOARD_12KEY();
		static jint KEYBOARD_NOKEYS();
		static jint KEYBOARD_QWERTY();
		static jint KEYBOARD_UNDEFINED();
		static jint MNC_ZERO();
		static jint NAVIGATIONHIDDEN_NO();
		static jint NAVIGATIONHIDDEN_UNDEFINED();
		static jint NAVIGATIONHIDDEN_YES();
		static jint NAVIGATION_DPAD();
		static jint NAVIGATION_NONAV();
		static jint NAVIGATION_TRACKBALL();
		static jint NAVIGATION_UNDEFINED();
		static jint NAVIGATION_WHEEL();
		static jint ORIENTATION_LANDSCAPE();
		static jint ORIENTATION_PORTRAIT();
		static jint ORIENTATION_SQUARE();
		static jint ORIENTATION_UNDEFINED();
		static jint SCREENLAYOUT_LAYOUTDIR_LTR();
		static jint SCREENLAYOUT_LAYOUTDIR_MASK();
		static jint SCREENLAYOUT_LAYOUTDIR_RTL();
		static jint SCREENLAYOUT_LAYOUTDIR_SHIFT();
		static jint SCREENLAYOUT_LAYOUTDIR_UNDEFINED();
		static jint SCREENLAYOUT_LONG_MASK();
		static jint SCREENLAYOUT_LONG_NO();
		static jint SCREENLAYOUT_LONG_UNDEFINED();
		static jint SCREENLAYOUT_LONG_YES();
		static jint SCREENLAYOUT_ROUND_MASK();
		static jint SCREENLAYOUT_ROUND_NO();
		static jint SCREENLAYOUT_ROUND_UNDEFINED();
		static jint SCREENLAYOUT_ROUND_YES();
		static jint SCREENLAYOUT_SIZE_LARGE();
		static jint SCREENLAYOUT_SIZE_MASK();
		static jint SCREENLAYOUT_SIZE_NORMAL();
		static jint SCREENLAYOUT_SIZE_SMALL();
		static jint SCREENLAYOUT_SIZE_UNDEFINED();
		static jint SCREENLAYOUT_SIZE_XLARGE();
		static jint SCREENLAYOUT_UNDEFINED();
		static jint SCREEN_HEIGHT_DP_UNDEFINED();
		static jint SCREEN_WIDTH_DP_UNDEFINED();
		static jint SMALLEST_SCREEN_WIDTH_DP_UNDEFINED();
		static jint TOUCHSCREEN_FINGER();
		static jint TOUCHSCREEN_NOTOUCH();
		static jint TOUCHSCREEN_STYLUS();
		static jint TOUCHSCREEN_UNDEFINED();
		static jint UI_MODE_NIGHT_MASK();
		static jint UI_MODE_NIGHT_NO();
		static jint UI_MODE_NIGHT_UNDEFINED();
		static jint UI_MODE_NIGHT_YES();
		static jint UI_MODE_TYPE_APPLIANCE();
		static jint UI_MODE_TYPE_CAR();
		static jint UI_MODE_TYPE_DESK();
		static jint UI_MODE_TYPE_MASK();
		static jint UI_MODE_TYPE_NORMAL();
		static jint UI_MODE_TYPE_TELEVISION();
		static jint UI_MODE_TYPE_UNDEFINED();
		static jint UI_MODE_TYPE_VR_HEADSET();
		static jint UI_MODE_TYPE_WATCH();
		jint colorMode();
		jint densityDpi();
		jfloat fontScale();
		jint hardKeyboardHidden();
		jint keyboard();
		jint keyboardHidden();
		QAndroidJniObject locale();
		jint mcc();
		jint mnc();
		jint navigation();
		jint navigationHidden();
		jint orientation();
		jint screenHeightDp();
		jint screenLayout();
		jint screenWidthDp();
		jint smallestScreenWidthDp();
		jint touchscreen();
		jint uiMode();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::res::Configuration arg0);
		
		// Methods
		static jboolean needNewResources(jint arg0, jint arg1);
		jint compareTo(__jni_impl::android::content::res::Configuration arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jint diff(__jni_impl::android::content::res::Configuration arg0);
		jboolean equals(__jni_impl::android::content::res::Configuration arg0);
		jboolean equals(jobject arg0);
		jint getLayoutDirection();
		QAndroidJniObject getLocales();
		jint hashCode();
		jboolean isLayoutSizeAtLeast(jint arg0);
		jboolean isScreenHdr();
		jboolean isScreenRound();
		jboolean isScreenWideColorGamut();
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void setLayoutDirection(__jni_impl::java::util::Locale arg0);
		void setLocale(__jni_impl::java::util::Locale arg0);
		void setLocales(__jni_impl::android::os::LocaleList arg0);
		void setTo(__jni_impl::android::content::res::Configuration arg0);
		void setToDefaults();
		jstring toString();
		jint updateFrom(__jni_impl::android::content::res::Configuration arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::res

#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	jint Configuration::COLOR_MODE_HDR_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_MASK"
		);
	}
	jint Configuration::COLOR_MODE_HDR_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_NO"
		);
	}
	jint Configuration::COLOR_MODE_HDR_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_SHIFT"
		);
	}
	jint Configuration::COLOR_MODE_HDR_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_HDR_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_YES"
		);
	}
	jint Configuration::COLOR_MODE_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_MASK"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_NO"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_YES"
		);
	}
	QAndroidJniObject Configuration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.res.Configuration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Configuration::DENSITY_DPI_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"DENSITY_DPI_UNDEFINED"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_NO"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_YES"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_NO"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_YES"
		);
	}
	jint Configuration::KEYBOARD_12KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_12KEY"
		);
	}
	jint Configuration::KEYBOARD_NOKEYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_NOKEYS"
		);
	}
	jint Configuration::KEYBOARD_QWERTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_QWERTY"
		);
	}
	jint Configuration::KEYBOARD_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_UNDEFINED"
		);
	}
	jint Configuration::MNC_ZERO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"MNC_ZERO"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_NO"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_YES"
		);
	}
	jint Configuration::NAVIGATION_DPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_DPAD"
		);
	}
	jint Configuration::NAVIGATION_NONAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_NONAV"
		);
	}
	jint Configuration::NAVIGATION_TRACKBALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_TRACKBALL"
		);
	}
	jint Configuration::NAVIGATION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_UNDEFINED"
		);
	}
	jint Configuration::NAVIGATION_WHEEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_WHEEL"
		);
	}
	jint Configuration::ORIENTATION_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_LANDSCAPE"
		);
	}
	jint Configuration::ORIENTATION_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_PORTRAIT"
		);
	}
	jint Configuration::ORIENTATION_SQUARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_SQUARE"
		);
	}
	jint Configuration::ORIENTATION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_LTR"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_RTL"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_SHIFT"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_NO"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_YES"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_NO"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_YES"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_LARGE"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_NORMAL"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_SMALL"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_XLARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_XLARGE"
		);
	}
	jint Configuration::SCREENLAYOUT_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_UNDEFINED"
		);
	}
	jint Configuration::SCREEN_HEIGHT_DP_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_HEIGHT_DP_UNDEFINED"
		);
	}
	jint Configuration::SCREEN_WIDTH_DP_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	jint Configuration::SMALLEST_SCREEN_WIDTH_DP_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"SMALLEST_SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	jint Configuration::TOUCHSCREEN_FINGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_FINGER"
		);
	}
	jint Configuration::TOUCHSCREEN_NOTOUCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_NOTOUCH"
		);
	}
	jint Configuration::TOUCHSCREEN_STYLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_STYLUS"
		);
	}
	jint Configuration::TOUCHSCREEN_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_NIGHT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_MASK"
		);
	}
	jint Configuration::UI_MODE_NIGHT_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_NO"
		);
	}
	jint Configuration::UI_MODE_NIGHT_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_NIGHT_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_YES"
		);
	}
	jint Configuration::UI_MODE_TYPE_APPLIANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_APPLIANCE"
		);
	}
	jint Configuration::UI_MODE_TYPE_CAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_CAR"
		);
	}
	jint Configuration::UI_MODE_TYPE_DESK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_DESK"
		);
	}
	jint Configuration::UI_MODE_TYPE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_MASK"
		);
	}
	jint Configuration::UI_MODE_TYPE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_NORMAL"
		);
	}
	jint Configuration::UI_MODE_TYPE_TELEVISION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_TELEVISION"
		);
	}
	jint Configuration::UI_MODE_TYPE_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_TYPE_VR_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_VR_HEADSET"
		);
	}
	jint Configuration::UI_MODE_TYPE_WATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_WATCH"
		);
	}
	jint Configuration::colorMode()
	{
		return __thiz.getField<jint>(
			"colorMode"
		);
	}
	jint Configuration::densityDpi()
	{
		return __thiz.getField<jint>(
			"densityDpi"
		);
	}
	jfloat Configuration::fontScale()
	{
		return __thiz.getField<jfloat>(
			"fontScale"
		);
	}
	jint Configuration::hardKeyboardHidden()
	{
		return __thiz.getField<jint>(
			"hardKeyboardHidden"
		);
	}
	jint Configuration::keyboard()
	{
		return __thiz.getField<jint>(
			"keyboard"
		);
	}
	jint Configuration::keyboardHidden()
	{
		return __thiz.getField<jint>(
			"keyboardHidden"
		);
	}
	QAndroidJniObject Configuration::locale()
	{
		return __thiz.getObjectField(
			"locale",
			"Ljava/util/Locale;"
		);
	}
	jint Configuration::mcc()
	{
		return __thiz.getField<jint>(
			"mcc"
		);
	}
	jint Configuration::mnc()
	{
		return __thiz.getField<jint>(
			"mnc"
		);
	}
	jint Configuration::navigation()
	{
		return __thiz.getField<jint>(
			"navigation"
		);
	}
	jint Configuration::navigationHidden()
	{
		return __thiz.getField<jint>(
			"navigationHidden"
		);
	}
	jint Configuration::orientation()
	{
		return __thiz.getField<jint>(
			"orientation"
		);
	}
	jint Configuration::screenHeightDp()
	{
		return __thiz.getField<jint>(
			"screenHeightDp"
		);
	}
	jint Configuration::screenLayout()
	{
		return __thiz.getField<jint>(
			"screenLayout"
		);
	}
	jint Configuration::screenWidthDp()
	{
		return __thiz.getField<jint>(
			"screenWidthDp"
		);
	}
	jint Configuration::smallestScreenWidthDp()
	{
		return __thiz.getField<jint>(
			"smallestScreenWidthDp"
		);
	}
	jint Configuration::touchscreen()
	{
		return __thiz.getField<jint>(
			"touchscreen"
		);
	}
	jint Configuration::uiMode()
	{
		return __thiz.getField<jint>(
			"uiMode"
		);
	}
	
	// Constructors
	void Configuration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Configuration",
			"()V"
		);
	}
	void Configuration::__constructor(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Configuration",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Configuration::needNewResources(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.res.Configuration",
			"needNewResources",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Configuration::compareTo(__jni_impl::android::content::res::Configuration arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/content/res/Configuration;)I",
			arg0.__jniObject().object()
		);
	}
	jint Configuration::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Configuration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Configuration::diff(__jni_impl::android::content::res::Configuration arg0)
	{
		return __thiz.callMethod<jint>(
			"diff",
			"(Landroid/content/res/Configuration;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Configuration::equals(__jni_impl::android::content::res::Configuration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/content/res/Configuration;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Configuration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Configuration::getLayoutDirection()
	{
		return __thiz.callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	QAndroidJniObject Configuration::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint Configuration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Configuration::isLayoutSizeAtLeast(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLayoutSizeAtLeast",
			"(I)Z",
			arg0
		);
	}
	jboolean Configuration::isScreenHdr()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenHdr",
			"()Z"
		);
	}
	jboolean Configuration::isScreenRound()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenRound",
			"()Z"
		);
	}
	jboolean Configuration::isScreenWideColorGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenWideColorGamut",
			"()Z"
		);
	}
	void Configuration::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Configuration::setLayoutDirection(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutDirection",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void Configuration::setLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void Configuration::setLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	void Configuration::setTo(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"setTo",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void Configuration::setToDefaults()
	{
		__thiz.callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	jstring Configuration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Configuration::updateFrom(__jni_impl::android::content::res::Configuration arg0)
	{
		return __thiz.callMethod<jint>(
			"updateFrom",
			"(Landroid/content/res/Configuration;)I",
			arg0.__jniObject().object()
		);
	}
	void Configuration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class Configuration : public __jni_impl::android::content::res::Configuration
	{
	public:
		Configuration(QAndroidJniObject obj) { __thiz = obj; }
		Configuration()
		{
			__constructor();
		}
		Configuration(__jni_impl::android::content::res::Configuration arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_CONFIGURATION

