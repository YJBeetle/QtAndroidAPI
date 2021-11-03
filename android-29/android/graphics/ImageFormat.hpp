#pragma once

#include "../../JObject.hpp"


namespace android::graphics
{
	class ImageFormat : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageFormat(QAndroidJniObject obj);
		
		// Constructors
		ImageFormat();
		
		// Methods
		static jint getBitsPerPixel(jint arg0);
	};
} // namespace android::graphics

