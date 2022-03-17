#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;

namespace android::graphics
{
	class BitmapFactory_Options : public JObject
	{
	public:
		// Fields
		android::graphics::Bitmap inBitmap();
		jint inDensity();
		jboolean inDither();
		jboolean inInputShareable();
		jboolean inJustDecodeBounds();
		jboolean inMutable();
		jboolean inPreferQualityOverSpeed();
		android::graphics::ColorSpace inPreferredColorSpace();
		android::graphics::Bitmap_Config inPreferredConfig();
		jboolean inPremultiplied();
		jboolean inPurgeable();
		jint inSampleSize();
		jboolean inScaled();
		jint inScreenDensity();
		jint inTargetDensity();
		JByteArray inTempStorage();
		jboolean mCancel();
		android::graphics::ColorSpace outColorSpace();
		android::graphics::Bitmap_Config outConfig();
		jint outHeight();
		JString outMimeType();
		jint outWidth();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BitmapFactory_Options(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BitmapFactory_Options(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		BitmapFactory_Options();
		
		// Methods
		void requestCancelDecode() const;
	};
} // namespace android::graphics

