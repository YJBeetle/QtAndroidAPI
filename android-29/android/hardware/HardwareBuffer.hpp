#pragma once

#ifndef ANDROID_HARDWARE_HARDWAREBUFFER
#define ANDROID_HARDWARE_HARDWAREBUFFER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware
{
	class HardwareBuffer : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLOB();
		static QAndroidJniObject CREATOR();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		static QAndroidJniObject create(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		static jboolean isSupported(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		jint getFormat();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isClosed();
		jlong getUsage();
		jint getLayers();
		jint getWidth();
		jint getHeight();
	};
} // namespace __jni_impl::android::hardware

#include "../os/Parcel.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint HardwareBuffer::BLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"BLOB"
		);
	}
	QAndroidJniObject HardwareBuffer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.HardwareBuffer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint HardwareBuffer::DS_24UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_24UI8"
		);
	}
	jint HardwareBuffer::DS_FP32UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_FP32UI8"
		);
	}
	jint HardwareBuffer::D_16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_16"
		);
	}
	jint HardwareBuffer::D_24()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_24"
		);
	}
	jint HardwareBuffer::D_FP32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_FP32"
		);
	}
	jint HardwareBuffer::RGBA_1010102()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_1010102"
		);
	}
	jint HardwareBuffer::RGBA_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_8888"
		);
	}
	jint HardwareBuffer::RGBA_FP16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_FP16"
		);
	}
	jint HardwareBuffer::RGBX_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBX_8888"
		);
	}
	jint HardwareBuffer::RGB_565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_565"
		);
	}
	jint HardwareBuffer::RGB_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_888"
		);
	}
	jint HardwareBuffer::S_UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"S_UI8"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_READ_OFTEN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_OFTEN"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_READ_RARELY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_RARELY"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_WRITE_OFTEN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_OFTEN"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_WRITE_RARELY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_RARELY"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_COLOR_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_COLOR_OUTPUT"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_CUBE_MAP()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_CUBE_MAP"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_DATA_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_DATA_BUFFER"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_MIPMAP_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_MIPMAP_COMPLETE"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_SAMPLED_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_SAMPLED_IMAGE"
		);
	}
	jlong HardwareBuffer::USAGE_PROTECTED_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_PROTECTED_CONTENT"
		);
	}
	jlong HardwareBuffer::USAGE_SENSOR_DIRECT_DATA()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_SENSOR_DIRECT_DATA"
		);
	}
	jlong HardwareBuffer::USAGE_VIDEO_ENCODE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_VIDEO_ENCODE"
		);
	}
	
	// Constructors
	void HardwareBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.HardwareBuffer",
			"(V)V");
	}
	
	// Methods
	void HardwareBuffer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject HardwareBuffer::create(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	jboolean HardwareBuffer::isSupported(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
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
	jint HardwareBuffer::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint HardwareBuffer::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void HardwareBuffer::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean HardwareBuffer::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jlong HardwareBuffer::getUsage()
	{
		return __thiz.callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
	jint HardwareBuffer::getLayers()
	{
		return __thiz.callMethod<jint>(
			"getLayers",
			"()I"
		);
	}
	jint HardwareBuffer::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint HardwareBuffer::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class HardwareBuffer : public __jni_impl::android::hardware::HardwareBuffer
	{
	public:
		HardwareBuffer(QAndroidJniObject obj) { __thiz = obj; }
		HardwareBuffer()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_HARDWAREBUFFER

