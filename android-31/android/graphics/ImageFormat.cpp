#include "./ImageFormat.hpp"

namespace android::graphics
{
	// Fields
	jint ImageFormat::DEPTH16()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH16"
		);
	}
	jint ImageFormat::DEPTH_JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_JPEG"
		);
	}
	jint ImageFormat::DEPTH_POINT_CLOUD()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_POINT_CLOUD"
		);
	}
	jint ImageFormat::FLEX_RGBA_8888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGBA_8888"
		);
	}
	jint ImageFormat::FLEX_RGB_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGB_888"
		);
	}
	jint ImageFormat::HEIC()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"HEIC"
		);
	}
	jint ImageFormat::JPEG()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"JPEG"
		);
	}
	jint ImageFormat::NV16()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV16"
		);
	}
	jint ImageFormat::NV21()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV21"
		);
	}
	jint ImageFormat::PRIVATE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"PRIVATE"
		);
	}
	jint ImageFormat::RAW10()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW10"
		);
	}
	jint ImageFormat::RAW12()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW12"
		);
	}
	jint ImageFormat::RAW_PRIVATE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_PRIVATE"
		);
	}
	jint ImageFormat::RAW_SENSOR()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_SENSOR"
		);
	}
	jint ImageFormat::RGB_565()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RGB_565"
		);
	}
	jint ImageFormat::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"UNKNOWN"
		);
	}
	jint ImageFormat::Y8()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"Y8"
		);
	}
	jint ImageFormat::YCBCR_P010()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YCBCR_P010"
		);
	}
	jint ImageFormat::YUV_420_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_420_888"
		);
	}
	jint ImageFormat::YUV_422_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_422_888"
		);
	}
	jint ImageFormat::YUV_444_888()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_444_888"
		);
	}
	jint ImageFormat::YUY2()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUY2"
		);
	}
	jint ImageFormat::YV12()
	{
		return getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YV12"
		);
	}
	
	// QAndroidJniObject forward
	ImageFormat::ImageFormat(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ImageFormat::ImageFormat()
		: JObject(
			"android.graphics.ImageFormat",
			"()V"
		) {}
	
	// Methods
	jint ImageFormat::getBitsPerPixel(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.ImageFormat",
			"getBitsPerPixel",
			"(I)I",
			arg0
		);
	}
} // namespace android::graphics

