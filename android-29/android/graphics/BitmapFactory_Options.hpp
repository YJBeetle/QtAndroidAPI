#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Bitmap_Config;
}
namespace android::graphics
{
	class ColorSpace;
}

namespace android::graphics
{
	class BitmapFactory_Options : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject inBitmap();
		jint inDensity();
		jboolean inDither();
		jboolean inInputShareable();
		jboolean inJustDecodeBounds();
		jboolean inMutable();
		jboolean inPreferQualityOverSpeed();
		QAndroidJniObject inPreferredColorSpace();
		QAndroidJniObject inPreferredConfig();
		jboolean inPremultiplied();
		jboolean inPurgeable();
		jint inSampleSize();
		jboolean inScaled();
		jint inScreenDensity();
		jint inTargetDensity();
		jbyteArray inTempStorage();
		jboolean mCancel();
		QAndroidJniObject outColorSpace();
		QAndroidJniObject outConfig();
		jint outHeight();
		jstring outMimeType();
		jint outWidth();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BitmapFactory_Options(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BitmapFactory_Options(QAndroidJniObject obj);
		
		// Constructors
		BitmapFactory_Options();
		
		// Methods
		void requestCancelDecode();
	};
} // namespace android::graphics

