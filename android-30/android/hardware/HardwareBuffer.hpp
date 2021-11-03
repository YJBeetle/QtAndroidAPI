#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware
{
	class HardwareBuffer : public JObject
	{
	public:
		// Fields
		static jint BLOB();
		static JObject CREATOR();
		static jint DS_24UI8();
		static jint DS_FP32UI8();
		static jint D_16();
		static jint D_24();
		static jint D_FP32();
		static jint RGBA_1010102();
		static jint RGBA_8888();
		static jint RGBA_FP16();
		static jint RGBX_8888();
		static jint RGB_565();
		static jint RGB_888();
		static jint S_UI8();
		static jlong USAGE_CPU_READ_OFTEN();
		static jlong USAGE_CPU_READ_RARELY();
		static jlong USAGE_CPU_WRITE_OFTEN();
		static jlong USAGE_CPU_WRITE_RARELY();
		static jlong USAGE_GPU_COLOR_OUTPUT();
		static jlong USAGE_GPU_CUBE_MAP();
		static jlong USAGE_GPU_DATA_BUFFER();
		static jlong USAGE_GPU_MIPMAP_COMPLETE();
		static jlong USAGE_GPU_SAMPLED_IMAGE();
		static jlong USAGE_PROTECTED_CONTENT();
		static jlong USAGE_SENSOR_DIRECT_DATA();
		static jlong USAGE_VIDEO_ENCODE();
		static jint YCBCR_420_888();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HardwareBuffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::hardware::HardwareBuffer create(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		static jboolean isSupported(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		void close() const;
		jint describeContents() const;
		jint getFormat() const;
		jint getHeight() const;
		jint getLayers() const;
		jlong getUsage() const;
		jint getWidth() const;
		jboolean isClosed() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware

