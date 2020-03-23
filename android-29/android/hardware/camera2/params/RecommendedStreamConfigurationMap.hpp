#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP
#define ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	class StreamConfigurationMap;
}
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
	class RecommendedStreamConfigurationMap : public __JniBaseClass
	{
	public:
		// Fields
		static jint USECASE_LOW_LATENCY_SNAPSHOT();
		static jint USECASE_PREVIEW();
		static jint USECASE_RAW();
		static jint USECASE_RECORD();
		static jint USECASE_SNAPSHOT();
		static jint USECASE_VIDEO_SNAPSHOT();
		static jint USECASE_ZSL();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getRecommendedUseCase();
		QAndroidJniObject getOutputFormats();
		QAndroidJniObject getValidOutputFormatsForInput(jint arg0);
		QAndroidJniObject getInputFormats();
		QAndroidJniObject getInputSizes(jint arg0);
		jboolean isOutputSupportedFor(__jni_impl::android::view::Surface arg0);
		jboolean isOutputSupportedFor(jint arg0);
		QAndroidJniObject getOutputSizes(jclass arg0);
		QAndroidJniObject getOutputSizes(jint arg0);
		QAndroidJniObject getHighSpeedVideoSizes();
		QAndroidJniObject getHighSpeedVideoFpsRangesFor(__jni_impl::android::util::Size arg0);
		QAndroidJniObject getHighSpeedVideoFpsRanges();
		QAndroidJniObject getHighSpeedVideoSizesFor(__jni_impl::android::util::Range arg0);
		QAndroidJniObject getHighResolutionOutputSizes(jint arg0);
		jlong getOutputMinFrameDuration(jint arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputMinFrameDuration(jclass arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputStallDuration(jint arg0, __jni_impl::android::util::Size arg1);
		jlong getOutputStallDuration(jclass arg0, __jni_impl::android::util::Size arg1);
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "StreamConfigurationMap.hpp"
#include "../../../view/Surface.hpp"
#include "../../../util/Size.hpp"
#include "../../../util/Range.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint RecommendedStreamConfigurationMap::USECASE_LOW_LATENCY_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_LOW_LATENCY_SNAPSHOT");
	}
	jint RecommendedStreamConfigurationMap::USECASE_PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_PREVIEW");
	}
	jint RecommendedStreamConfigurationMap::USECASE_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RAW");
	}
	jint RecommendedStreamConfigurationMap::USECASE_RECORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RECORD");
	}
	jint RecommendedStreamConfigurationMap::USECASE_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_SNAPSHOT");
	}
	jint RecommendedStreamConfigurationMap::USECASE_VIDEO_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_VIDEO_SNAPSHOT");
	}
	jint RecommendedStreamConfigurationMap::USECASE_ZSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_ZSL");
	}
	
	// Constructors
	void RecommendedStreamConfigurationMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"(V)V");
	}
	
	// Methods
	jint RecommendedStreamConfigurationMap::getRecommendedUseCase()
	{
		return __thiz.callMethod<jint>(
			"getRecommendedUseCase",
			"()I");
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getOutputFormats()
	{
		return __thiz.callObjectMethod(
			"getOutputFormats",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getValidOutputFormatsForInput(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getInputFormats()
	{
		return __thiz.callObjectMethod(
			"getInputFormats",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getInputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInputSizes",
			"(I)Ljava/util/Set;",
			arg0);
	}
	jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(__jni_impl::android::view::Surface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOutputSupportedFor",
			"(Landroid/view/Surface;)Z",
			arg0.__jniObject().object());
	}
	jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOutputSupportedFor",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getOutputSizes(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getOutputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputSizes",
			"(I)Ljava/util/Set;",
			arg0);
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizes()
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoSizes",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRangesFor(__jni_impl::android::util::Size arg0)
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)Ljava/util/Set;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRanges()
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizesFor(__jni_impl::android::util::Range arg0)
	{
		return __thiz.callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)Ljava/util/Set;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject RecommendedStreamConfigurationMap::getHighResolutionOutputSizes(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)Ljava/util/Set;",
			arg0);
	}
	jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(jint arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(jclass arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong RecommendedStreamConfigurationMap::getOutputStallDuration(jint arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputStallDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong RecommendedStreamConfigurationMap::getOutputStallDuration(jclass arg0, __jni_impl::android::util::Size arg1)
	{
		return __thiz.callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class RecommendedStreamConfigurationMap : public __jni_impl::android::hardware::camera2::params::RecommendedStreamConfigurationMap
	{
	public:
		RecommendedStreamConfigurationMap(QAndroidJniObject obj) { __thiz = obj; }
		RecommendedStreamConfigurationMap()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_RECOMMENDEDSTREAMCONFIGURATIONMAP

