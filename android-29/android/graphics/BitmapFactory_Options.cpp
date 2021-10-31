#include "./Bitmap.hpp"
#include "./Bitmap_Config.hpp"
#include "./ColorSpace.hpp"
#include "./BitmapFactory_Options.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Bitmap BitmapFactory_Options::inBitmap()
	{
		return getObjectField(
			"inBitmap",
			"Landroid/graphics/Bitmap;"
		);
	}
	jint BitmapFactory_Options::inDensity()
	{
		return getField<jint>(
			"inDensity"
		);
	}
	jboolean BitmapFactory_Options::inDither()
	{
		return getField<jboolean>(
			"inDither"
		);
	}
	jboolean BitmapFactory_Options::inInputShareable()
	{
		return getField<jboolean>(
			"inInputShareable"
		);
	}
	jboolean BitmapFactory_Options::inJustDecodeBounds()
	{
		return getField<jboolean>(
			"inJustDecodeBounds"
		);
	}
	jboolean BitmapFactory_Options::inMutable()
	{
		return getField<jboolean>(
			"inMutable"
		);
	}
	jboolean BitmapFactory_Options::inPreferQualityOverSpeed()
	{
		return getField<jboolean>(
			"inPreferQualityOverSpeed"
		);
	}
	android::graphics::ColorSpace BitmapFactory_Options::inPreferredColorSpace()
	{
		return getObjectField(
			"inPreferredColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	android::graphics::Bitmap_Config BitmapFactory_Options::inPreferredConfig()
	{
		return getObjectField(
			"inPreferredConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	jboolean BitmapFactory_Options::inPremultiplied()
	{
		return getField<jboolean>(
			"inPremultiplied"
		);
	}
	jboolean BitmapFactory_Options::inPurgeable()
	{
		return getField<jboolean>(
			"inPurgeable"
		);
	}
	jint BitmapFactory_Options::inSampleSize()
	{
		return getField<jint>(
			"inSampleSize"
		);
	}
	jboolean BitmapFactory_Options::inScaled()
	{
		return getField<jboolean>(
			"inScaled"
		);
	}
	jint BitmapFactory_Options::inScreenDensity()
	{
		return getField<jint>(
			"inScreenDensity"
		);
	}
	jint BitmapFactory_Options::inTargetDensity()
	{
		return getField<jint>(
			"inTargetDensity"
		);
	}
	jbyteArray BitmapFactory_Options::inTempStorage()
	{
		return getObjectField(
			"inTempStorage",
			"[B"
		).object<jbyteArray>();
	}
	jboolean BitmapFactory_Options::mCancel()
	{
		return getField<jboolean>(
			"mCancel"
		);
	}
	android::graphics::ColorSpace BitmapFactory_Options::outColorSpace()
	{
		return getObjectField(
			"outColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	android::graphics::Bitmap_Config BitmapFactory_Options::outConfig()
	{
		return getObjectField(
			"outConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	jint BitmapFactory_Options::outHeight()
	{
		return getField<jint>(
			"outHeight"
		);
	}
	jstring BitmapFactory_Options::outMimeType()
	{
		return getObjectField(
			"outMimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BitmapFactory_Options::outWidth()
	{
		return getField<jint>(
			"outWidth"
		);
	}
	
	// QJniObject forward
	BitmapFactory_Options::BitmapFactory_Options(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BitmapFactory_Options::BitmapFactory_Options()
		: __JniBaseClass(
			"android.graphics.BitmapFactory$Options",
			"()V"
		) {}
	
	// Methods
	void BitmapFactory_Options::requestCancelDecode()
	{
		callMethod<void>(
			"requestCancelDecode",
			"()V"
		);
	}
} // namespace android::graphics

