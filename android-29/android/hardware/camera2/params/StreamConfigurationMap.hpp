#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_STREAMCONFIGURATIONMAP
#define ANDROID_HARDWARE_CAMERA2_PARAMS_STREAMCONFIGURATIONMAP

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::android::util
{
	class Range;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class StreamConfigurationMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getOutputFormats();
		QAndroidJniObject getValidOutputFormatsForInput(jint arg0);
		QAndroidJniObject getInputFormats();
		QAndroidJniObject getInputSizes(jint arg0);
		jboolean isOutputSupportedFor(jint arg0);
		jboolean isOutputSupportedFor(__jni_impl::android::view::Surface arg0);
		static jboolean isOutputSupportedFor(jclass arg0);
		QAndroidJniObject getOutputSizes(jclass arg0);
		QAndroidJniObject getOutputSizes(jint arg0);
		QAndroidJniObject getHighSpeedVideoSizes();
		QAndroidJniObject getHighSpeedVideoFpsRangesFor(__jni_impl::android::util::Size arg0);
		QAndroidJniObject getHighSpeedVideoFpsRanges();
		QAndroidJniObject getHighSpeedVideoSizesFor(__jni_impl::android::util::Range arg0);
		QAndroidJniObject getHighResolutionOutputSizes(jint arg0);
		jlong getOutputMinFrameDuration(jint arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputMinFrameDuration(jclass arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputStallDuration(jclass arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputStallDuration(jint arg0, __jni_impl::android::util::Size arg1);
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../view/Surface.hpp"
#include "../../../util/Size.hpp"
#include "../../../util/Range.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void StreamConfigurationMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.StreamConfigurationMap",
			"(V)V");
	}
	
	// Methods
	jboolean StreamConfigurationMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject StreamConfigurationMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint StreamConfigurationMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject StreamConfigurationMap::getOutputFormats()
	{
		return __thiz.callObjectMethod(
			"getOutputFormats",
			"()[I");
	}
	QAndroidJniObject StreamConfigurationMap::getValidOutputFormatsForInput(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)[I",
			arg0);
	}
	QAndroidJniObject StreamConfigurationMap::getInputFormats()
	{
		return __thiz.callObjectMethod(
			"getInputFormats",
			"()[I");
	}
	QAndroidJniObject StreamConfigurationMap::getInputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInputSizes",
			"(I)[Landroid/util/Size;",
			arg0);
	}
	jboolean StreamConfigurationMap::isOutputSupportedFor(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOutputSupportedFor",
			"(I)Z",
			arg0);
	}
	jboolean StreamConfigurationMap::isOutputSupportedFor(__jni_impl::android::view::Surface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOutputSupportedFor",
			"(Landroid/view/Surface;)Z",
			arg0.__jniObject().object());
	}
	jboolean StreamConfigurationMap::isOutputSupportedFor(jclass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.hardware.camera2.params.StreamConfigurationMap",
			"isOutputSupportedFor",
			"(Ljava/lang/Class;)Z",
			arg0);
	}
	QAndroidJniObject StreamConfigurationMap::getOutputSizes(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)[Landroid/util/Size;",
			arg0);
	}
	QAndroidJniObject StreamConfigurationMap::getOutputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0);
	}
	QAndroidJniObject StreamConfigurationMap::getHighSpeedVideoSizes()
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoSizes",
			"()[Landroid/util/Size;");
	}
	QAndroidJniObject StreamConfigurationMap::getHighSpeedVideoFpsRangesFor(__jni_impl::android::util::Size arg0)
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)[Landroid/util/Range;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject StreamConfigurationMap::getHighSpeedVideoFpsRanges()
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()[Landroid/util/Range;");
	}
	QAndroidJniObject StreamConfigurationMap::getHighSpeedVideoSizesFor(__jni_impl::android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)[Landroid/util/Size;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject StreamConfigurationMap::getHighResolutionOutputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0);
	}
	jlong StreamConfigurationMap::getOutputMinFrameDuration(jint arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong StreamConfigurationMap::getOutputMinFrameDuration(jclass arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong StreamConfigurationMap::getOutputStallDuration(jclass arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong StreamConfigurationMap::getOutputStallDuration(jint arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputStallDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class StreamConfigurationMap : public __jni_impl::android::hardware::camera2::params::StreamConfigurationMap
	{
	public:
		StreamConfigurationMap(QAndroidJniObject obj) { __thiz = obj; }
		StreamConfigurationMap()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_STREAMCONFIGURATIONMAP

