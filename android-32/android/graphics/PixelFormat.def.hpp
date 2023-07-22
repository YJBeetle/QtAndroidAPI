#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class PixelFormat : public JObject
	{
	public:
		// Fields
		static jint A_8();
		static jint JPEG();
		static jint LA_88();
		static jint L_8();
		static jint OPAQUE();
		static jint RGBA_1010102();
		static jint RGBA_4444();
		static jint RGBA_5551();
		static jint RGBA_8888();
		static jint RGBA_F16();
		static jint RGBX_8888();
		static jint RGB_332();
		static jint RGB_565();
		static jint RGB_888();
		static jint TRANSLUCENT();
		static jint TRANSPARENT();
		static jint UNKNOWN();
		static jint YCbCr_420_SP();
		static jint YCbCr_422_I();
		static jint YCbCr_422_SP();
		jint bitsPerPixel();
		jint bytesPerPixel();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PixelFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PixelFormat(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PixelFormat();
		
		// Methods
		static jboolean formatHasAlpha(jint arg0);
		static void getPixelFormatInfo(jint arg0, android::graphics::PixelFormat arg1);
	};
} // namespace android::graphics

