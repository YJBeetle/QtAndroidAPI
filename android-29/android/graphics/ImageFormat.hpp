#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class ImageFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEPTH16();
		static jint DEPTH_JPEG();
		static jint DEPTH_POINT_CLOUD();
		static jint FLEX_RGBA_8888();
		static jint FLEX_RGB_888();
		static jint HEIC();
		static jint JPEG();
		static jint NV16();
		static jint NV21();
		static jint PRIVATE();
		static jint RAW10();
		static jint RAW12();
		static jint RAW_PRIVATE();
		static jint RAW_SENSOR();
		static jint RGB_565();
		static jint UNKNOWN();
		static jint Y8();
		static jint YUV_420_888();
		static jint YUV_422_888();
		static jint YUV_444_888();
		static jint YUY2();
		static jint YV12();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getBitsPerPixel(jint arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	jint ImageFormat::DEPTH16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH16"
		);
	}
	jint ImageFormat::DEPTH_JPEG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_JPEG"
		);
	}
	jint ImageFormat::DEPTH_POINT_CLOUD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"DEPTH_POINT_CLOUD"
		);
	}
	jint ImageFormat::FLEX_RGBA_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGBA_8888"
		);
	}
	jint ImageFormat::FLEX_RGB_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"FLEX_RGB_888"
		);
	}
	jint ImageFormat::HEIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"HEIC"
		);
	}
	jint ImageFormat::JPEG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"JPEG"
		);
	}
	jint ImageFormat::NV16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV16"
		);
	}
	jint ImageFormat::NV21()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"NV21"
		);
	}
	jint ImageFormat::PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"PRIVATE"
		);
	}
	jint ImageFormat::RAW10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW10"
		);
	}
	jint ImageFormat::RAW12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW12"
		);
	}
	jint ImageFormat::RAW_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_PRIVATE"
		);
	}
	jint ImageFormat::RAW_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RAW_SENSOR"
		);
	}
	jint ImageFormat::RGB_565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"RGB_565"
		);
	}
	jint ImageFormat::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"UNKNOWN"
		);
	}
	jint ImageFormat::Y8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"Y8"
		);
	}
	jint ImageFormat::YUV_420_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_420_888"
		);
	}
	jint ImageFormat::YUV_422_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_422_888"
		);
	}
	jint ImageFormat::YUV_444_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUV_444_888"
		);
	}
	jint ImageFormat::YUY2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YUY2"
		);
	}
	jint ImageFormat::YV12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageFormat",
			"YV12"
		);
	}
	
	// Constructors
	void ImageFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ImageFormat",
			"()V"
		);
	}
	
	// Methods
	jint ImageFormat::getBitsPerPixel(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.ImageFormat",
			"getBitsPerPixel",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ImageFormat : public __jni_impl::android::graphics::ImageFormat
	{
	public:
		ImageFormat(QAndroidJniObject obj) { __thiz = obj; }
		ImageFormat()
		{
			__constructor();
		}
	};
} // namespace android::graphics

