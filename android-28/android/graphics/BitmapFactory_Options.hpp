#pragma once

#include "../../JByteArray.hpp"
#include "./Bitmap.def.hpp"
#include "./Bitmap_Config.def.hpp"
#include "./ColorSpace.def.hpp"
#include "../../JString.hpp"
#include "./BitmapFactory_Options.def.hpp"

namespace android::graphics
{
	// Fields
	inline android::graphics::Bitmap BitmapFactory_Options::inBitmap()
	{
		return getObjectField(
			"inBitmap",
			"Landroid/graphics/Bitmap;"
		);
	}
	inline jint BitmapFactory_Options::inDensity()
	{
		return getField<jint>(
			"inDensity"
		);
	}
	inline jboolean BitmapFactory_Options::inDither()
	{
		return getField<jboolean>(
			"inDither"
		);
	}
	inline jboolean BitmapFactory_Options::inInputShareable()
	{
		return getField<jboolean>(
			"inInputShareable"
		);
	}
	inline jboolean BitmapFactory_Options::inJustDecodeBounds()
	{
		return getField<jboolean>(
			"inJustDecodeBounds"
		);
	}
	inline jboolean BitmapFactory_Options::inMutable()
	{
		return getField<jboolean>(
			"inMutable"
		);
	}
	inline jboolean BitmapFactory_Options::inPreferQualityOverSpeed()
	{
		return getField<jboolean>(
			"inPreferQualityOverSpeed"
		);
	}
	inline android::graphics::ColorSpace BitmapFactory_Options::inPreferredColorSpace()
	{
		return getObjectField(
			"inPreferredColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	inline android::graphics::Bitmap_Config BitmapFactory_Options::inPreferredConfig()
	{
		return getObjectField(
			"inPreferredConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline jboolean BitmapFactory_Options::inPremultiplied()
	{
		return getField<jboolean>(
			"inPremultiplied"
		);
	}
	inline jboolean BitmapFactory_Options::inPurgeable()
	{
		return getField<jboolean>(
			"inPurgeable"
		);
	}
	inline jint BitmapFactory_Options::inSampleSize()
	{
		return getField<jint>(
			"inSampleSize"
		);
	}
	inline jboolean BitmapFactory_Options::inScaled()
	{
		return getField<jboolean>(
			"inScaled"
		);
	}
	inline jint BitmapFactory_Options::inScreenDensity()
	{
		return getField<jint>(
			"inScreenDensity"
		);
	}
	inline jint BitmapFactory_Options::inTargetDensity()
	{
		return getField<jint>(
			"inTargetDensity"
		);
	}
	inline JByteArray BitmapFactory_Options::inTempStorage()
	{
		return getObjectField(
			"inTempStorage",
			"[B"
		);
	}
	inline jboolean BitmapFactory_Options::mCancel()
	{
		return getField<jboolean>(
			"mCancel"
		);
	}
	inline android::graphics::ColorSpace BitmapFactory_Options::outColorSpace()
	{
		return getObjectField(
			"outColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	inline android::graphics::Bitmap_Config BitmapFactory_Options::outConfig()
	{
		return getObjectField(
			"outConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	inline jint BitmapFactory_Options::outHeight()
	{
		return getField<jint>(
			"outHeight"
		);
	}
	inline JString BitmapFactory_Options::outMimeType()
	{
		return getObjectField(
			"outMimeType",
			"Ljava/lang/String;"
		);
	}
	inline jint BitmapFactory_Options::outWidth()
	{
		return getField<jint>(
			"outWidth"
		);
	}
	
	// Constructors
	inline BitmapFactory_Options::BitmapFactory_Options()
		: JObject(
			"android.graphics.BitmapFactory$Options",
			"()V"
		) {}
	
	// Methods
	inline void BitmapFactory_Options::requestCancelDecode() const
	{
		callMethod<void>(
			"requestCancelDecode",
			"()V"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
