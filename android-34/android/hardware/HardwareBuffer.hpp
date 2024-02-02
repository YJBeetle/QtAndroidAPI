#pragma once

#include "../os/Parcel.def.hpp"
#include "./HardwareBuffer.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint HardwareBuffer::BLOB()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"BLOB"
		);
	}
	inline JObject HardwareBuffer::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.HardwareBuffer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint HardwareBuffer::DS_24UI8()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_24UI8"
		);
	}
	inline jint HardwareBuffer::DS_FP32UI8()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_FP32UI8"
		);
	}
	inline jint HardwareBuffer::D_16()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_16"
		);
	}
	inline jint HardwareBuffer::D_24()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_24"
		);
	}
	inline jint HardwareBuffer::D_FP32()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_FP32"
		);
	}
	inline jint HardwareBuffer::RGBA_1010102()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_1010102"
		);
	}
	inline jint HardwareBuffer::RGBA_8888()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_8888"
		);
	}
	inline jint HardwareBuffer::RGBA_FP16()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_FP16"
		);
	}
	inline jint HardwareBuffer::RGBX_8888()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBX_8888"
		);
	}
	inline jint HardwareBuffer::RGB_565()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_565"
		);
	}
	inline jint HardwareBuffer::RGB_888()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_888"
		);
	}
	inline jint HardwareBuffer::S_UI8()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"S_UI8"
		);
	}
	inline jlong HardwareBuffer::USAGE_COMPOSER_OVERLAY()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_COMPOSER_OVERLAY"
		);
	}
	inline jlong HardwareBuffer::USAGE_CPU_READ_OFTEN()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_OFTEN"
		);
	}
	inline jlong HardwareBuffer::USAGE_CPU_READ_RARELY()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_RARELY"
		);
	}
	inline jlong HardwareBuffer::USAGE_CPU_WRITE_OFTEN()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_OFTEN"
		);
	}
	inline jlong HardwareBuffer::USAGE_CPU_WRITE_RARELY()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_RARELY"
		);
	}
	inline jlong HardwareBuffer::USAGE_FRONT_BUFFER()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_FRONT_BUFFER"
		);
	}
	inline jlong HardwareBuffer::USAGE_GPU_COLOR_OUTPUT()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_COLOR_OUTPUT"
		);
	}
	inline jlong HardwareBuffer::USAGE_GPU_CUBE_MAP()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_CUBE_MAP"
		);
	}
	inline jlong HardwareBuffer::USAGE_GPU_DATA_BUFFER()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_DATA_BUFFER"
		);
	}
	inline jlong HardwareBuffer::USAGE_GPU_MIPMAP_COMPLETE()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_MIPMAP_COMPLETE"
		);
	}
	inline jlong HardwareBuffer::USAGE_GPU_SAMPLED_IMAGE()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_SAMPLED_IMAGE"
		);
	}
	inline jlong HardwareBuffer::USAGE_PROTECTED_CONTENT()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_PROTECTED_CONTENT"
		);
	}
	inline jlong HardwareBuffer::USAGE_SENSOR_DIRECT_DATA()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_SENSOR_DIRECT_DATA"
		);
	}
	inline jlong HardwareBuffer::USAGE_VIDEO_ENCODE()
	{
		return getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_VIDEO_ENCODE"
		);
	}
	inline jint HardwareBuffer::YCBCR_420_888()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"YCBCR_420_888"
		);
	}
	inline jint HardwareBuffer::YCBCR_P010()
	{
		return getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"YCBCR_P010"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::hardware::HardwareBuffer HardwareBuffer::create(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callStaticObjectMethod(
			"android.hardware.HardwareBuffer",
			"create",
			"(IIIIJ)Landroid/hardware/HardwareBuffer;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline jboolean HardwareBuffer::isSupported(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.HardwareBuffer",
			"isSupported",
			"(IIIIJ)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void HardwareBuffer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint HardwareBuffer::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint HardwareBuffer::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline jint HardwareBuffer::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jlong HardwareBuffer::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	inline jint HardwareBuffer::getLayers() const
	{
		return callMethod<jint>(
			"getLayers",
			"()I"
		);
	}
	inline jlong HardwareBuffer::getUsage() const
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
	inline jint HardwareBuffer::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean HardwareBuffer::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline void HardwareBuffer::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
