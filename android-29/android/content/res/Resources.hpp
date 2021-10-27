#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics
{
	class Movie;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace android::util
{
	class TypedValue;
}
namespace java::io
{
	class InputStream;
}

namespace android::content::res
{
	class Resources : public __JniBaseClass
	{
	public:
		// Fields
		static jint ID_NULL();
		
		Resources(QAndroidJniObject obj);
		// Constructors
		Resources(android::content::res::AssetManager &arg0, android::util::DisplayMetrics &arg1, android::content::res::Configuration &arg2);
		Resources() = default;
		
		// Methods
		static jint getAttributeSetSourceResId(__JniBaseClass arg0);
		static QAndroidJniObject getSystem();
		void finishPreloading();
		void flushLayoutCache();
		QAndroidJniObject getAnimation(jint arg0);
		QAndroidJniObject getAssets();
		jboolean getBoolean(jint arg0);
		jint getColor(jint arg0);
		jint getColor(jint arg0, android::content::res::Resources_Theme arg1);
		QAndroidJniObject getColorStateList(jint arg0);
		QAndroidJniObject getColorStateList(jint arg0, android::content::res::Resources_Theme arg1);
		QAndroidJniObject getConfiguration();
		jfloat getDimension(jint arg0);
		jint getDimensionPixelOffset(jint arg0);
		jint getDimensionPixelSize(jint arg0);
		QAndroidJniObject getDisplayMetrics();
		QAndroidJniObject getDrawable(jint arg0);
		QAndroidJniObject getDrawable(jint arg0, android::content::res::Resources_Theme arg1);
		QAndroidJniObject getDrawableForDensity(jint arg0, jint arg1);
		QAndroidJniObject getDrawableForDensity(jint arg0, jint arg1, android::content::res::Resources_Theme arg2);
		jfloat getFloat(jint arg0);
		QAndroidJniObject getFont(jint arg0);
		jfloat getFraction(jint arg0, jint arg1, jint arg2);
		jint getIdentifier(jstring arg0, jstring arg1, jstring arg2);
		jint getIdentifier(const QString &arg0, const QString &arg1, const QString &arg2);
		jintArray getIntArray(jint arg0);
		jint getInteger(jint arg0);
		QAndroidJniObject getLayout(jint arg0);
		QAndroidJniObject getMovie(jint arg0);
		jstring getQuantityString(jint arg0, jint arg1);
		jstring getQuantityString(jint arg0, jint arg1, jobjectArray arg2);
		jstring getQuantityText(jint arg0, jint arg1);
		jstring getResourceEntryName(jint arg0);
		jstring getResourceName(jint arg0);
		jstring getResourcePackageName(jint arg0);
		jstring getResourceTypeName(jint arg0);
		jstring getString(jint arg0);
		jstring getString(jint arg0, jobjectArray arg1);
		jarray getStringArray(jint arg0);
		jstring getText(jint arg0);
		jstring getText(jint arg0, jstring arg1);
		jstring getText(jint arg0, const QString &arg1);
		jarray getTextArray(jint arg0);
		void getValue(jint arg0, android::util::TypedValue arg1, jboolean arg2);
		void getValue(jstring arg0, android::util::TypedValue arg1, jboolean arg2);
		void getValue(const QString &arg0, android::util::TypedValue arg1, jboolean arg2);
		void getValueForDensity(jint arg0, jint arg1, android::util::TypedValue arg2, jboolean arg3);
		QAndroidJniObject getXml(jint arg0);
		QAndroidJniObject newTheme();
		QAndroidJniObject obtainAttributes(__JniBaseClass arg0, jintArray arg1);
		QAndroidJniObject obtainTypedArray(jint arg0);
		QAndroidJniObject openRawResource(jint arg0);
		QAndroidJniObject openRawResource(jint arg0, android::util::TypedValue arg1);
		QAndroidJniObject openRawResourceFd(jint arg0);
		void parseBundleExtra(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2);
		void parseBundleExtra(const QString &arg0, __JniBaseClass arg1, android::os::Bundle arg2);
		void parseBundleExtras(__JniBaseClass arg0, android::os::Bundle arg1);
		void updateConfiguration(android::content::res::Configuration arg0, android::util::DisplayMetrics arg1);
	};
} // namespace android::content::res

