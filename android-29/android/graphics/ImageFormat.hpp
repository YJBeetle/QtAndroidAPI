#pragma once

#include "./ImageFormat.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint ImageFormat::DEPTH16()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH16"
		);
	}
	inline jint ImageFormat::DEPTH_JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_JPEG"
		);
	}
	inline jint ImageFormat::DEPTH_POINT_CLOUD()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_POINT_CLOUD"
		);
	}
	inline jint ImageFormat::FLEX_RGBA_8888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGBA_8888"
		);
	}
	inline jint ImageFormat::FLEX_RGB_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGB_888"
		);
	}
	inline jint ImageFormat::HEIC()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"HEIC"
		);
	}
	inline jint ImageFormat::JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"JPEG"
		);
	}
	inline jint ImageFormat::NV16()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV16"
		);
	}
	inline jint ImageFormat::NV21()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV21"
		);
	}
	inline jint ImageFormat::PRIVATE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"PRIVATE"
		);
	}
	inline jint ImageFormat::RAW10()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW10"
		);
	}
	inline jint ImageFormat::RAW12()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW12"
		);
	}
	inline jint ImageFormat::RAW_PRIVATE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_PRIVATE"
		);
	}
	inline jint ImageFormat::RAW_SENSOR()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_SENSOR"
		);
	}
	inline jint ImageFormat::RGB_565()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RGB_565"
		);
	}
	inline jint ImageFormat::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"UNKNOWN"
		);
	}
	inline jint ImageFormat::Y8()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"Y8"
		);
	}
	inline jint ImageFormat::YUV_420_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_420_888"
		);
	}
	inline jint ImageFormat::YUV_422_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_422_888"
		);
	}
	inline jint ImageFormat::YUV_444_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_444_888"
		);
	}
	inline jint ImageFormat::YUY2()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUY2"
		);
	}
	inline jint ImageFormat::YV12()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YV12"
		);
	}
	
	// Constructors
	inline ImageFormat::ImageFormat()
		: JObject(
			"android.graphics.ImageFormat",
			"()V"
		) {}
	
	// Methods
	inline jint ImageFormat::getBitsPerPixel(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.ImageFormat",
			"getBitsPerPixel",
			"(I)I",
			arg0
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
