#pragma once

#include "./PixelFormat.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint PixelFormat::A_8()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"A_8"
		);
	}
	inline jint PixelFormat::JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"JPEG"
		);
	}
	inline jint PixelFormat::LA_88()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"LA_88"
		);
	}
	inline jint PixelFormat::L_8()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"L_8"
		);
	}
	inline jint PixelFormat::OPAQUE()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"OPAQUE"
		);
	}
	inline jint PixelFormat::RGBA_1010102()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_1010102"
		);
	}
	inline jint PixelFormat::RGBA_4444()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_4444"
		);
	}
	inline jint PixelFormat::RGBA_5551()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_5551"
		);
	}
	inline jint PixelFormat::RGBA_8888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_8888"
		);
	}
	inline jint PixelFormat::RGBA_F16()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_F16"
		);
	}
	inline jint PixelFormat::RGBX_8888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBX_8888"
		);
	}
	inline jint PixelFormat::RGB_332()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_332"
		);
	}
	inline jint PixelFormat::RGB_565()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_565"
		);
	}
	inline jint PixelFormat::RGB_888()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_888"
		);
	}
	inline jint PixelFormat::TRANSLUCENT()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSLUCENT"
		);
	}
	inline jint PixelFormat::TRANSPARENT()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSPARENT"
		);
	}
	inline jint PixelFormat::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"UNKNOWN"
		);
	}
	inline jint PixelFormat::YCbCr_420_SP()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_420_SP"
		);
	}
	inline jint PixelFormat::YCbCr_422_I()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_I"
		);
	}
	inline jint PixelFormat::YCbCr_422_SP()
	{
		return getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_SP"
		);
	}
	inline jint PixelFormat::bitsPerPixel()
	{
		return getField<jint>(
			"bitsPerPixel"
		);
	}
	inline jint PixelFormat::bytesPerPixel()
	{
		return getField<jint>(
			"bytesPerPixel"
		);
	}
	
	// Constructors
	inline PixelFormat::PixelFormat()
		: JObject(
			"android.graphics.PixelFormat",
			"()V"
		) {}
	
	// Methods
	inline jboolean PixelFormat::formatHasAlpha(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.PixelFormat",
			"formatHasAlpha",
			"(I)Z",
			arg0
		);
	}
	inline void PixelFormat::getPixelFormatInfo(jint arg0, android::graphics::PixelFormat arg1)
	{
		callStaticMethod<void>(
			"android.graphics.PixelFormat",
			"getPixelFormatInfo",
			"(ILandroid/graphics/PixelFormat;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
