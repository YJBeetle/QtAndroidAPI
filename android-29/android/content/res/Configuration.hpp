#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class Locale;
}

namespace android::content::res
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
		
		Configuration(QAndroidJniObject obj);
		// Constructors
		Configuration();
		Configuration(android::content::res::Configuration &arg0);
		
		// Methods
		static jboolean needNewResources(jint arg0, jint arg1);
		jint compareTo(android::content::res::Configuration arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jint diff(android::content::res::Configuration arg0);
		jboolean equals(android::content::res::Configuration arg0);
		jboolean equals(jobject arg0);
		jint getLayoutDirection();
		QAndroidJniObject getLocales();
		jint hashCode();
		jboolean isLayoutSizeAtLeast(jint arg0);
		jboolean isScreenHdr();
		jboolean isScreenRound();
		jboolean isScreenWideColorGamut();
		void readFromParcel(android::os::Parcel arg0);
		void setLayoutDirection(java::util::Locale arg0);
		void setLocale(java::util::Locale arg0);
		void setLocales(android::os::LocaleList arg0);
		void setTo(android::content::res::Configuration arg0);
		void setToDefaults();
		jstring toString();
		jint updateFrom(android::content::res::Configuration arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

