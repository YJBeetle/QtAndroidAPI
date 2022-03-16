#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::content::res
{
	class Configuration : public JObject
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
		static JObject CREATOR();
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
		java::util::Locale locale();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Configuration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Configuration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Configuration();
		Configuration(android::content::res::Configuration &arg0);
		
		// Methods
		static jboolean needNewResources(jint arg0, jint arg1);
		jint compareTo(android::content::res::Configuration arg0) const;
		jint compareTo(JObject arg0) const;
		jint describeContents() const;
		jint diff(android::content::res::Configuration arg0) const;
		jboolean equals(android::content::res::Configuration arg0) const;
		jboolean equals(JObject arg0) const;
		jint getLayoutDirection() const;
		android::os::LocaleList getLocales() const;
		jint hashCode() const;
		jboolean isLayoutSizeAtLeast(jint arg0) const;
		jboolean isNightModeActive() const;
		jboolean isScreenHdr() const;
		jboolean isScreenRound() const;
		jboolean isScreenWideColorGamut() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void setLayoutDirection(java::util::Locale arg0) const;
		void setLocale(java::util::Locale arg0) const;
		void setLocales(android::os::LocaleList arg0) const;
		void setTo(android::content::res::Configuration arg0) const;
		void setToDefaults() const;
		JString toString() const;
		jint updateFrom(android::content::res::Configuration arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::res

