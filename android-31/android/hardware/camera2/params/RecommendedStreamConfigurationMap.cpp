#include "../../../util/Range.hpp"
#include "../../../util/Size.hpp"
#include "../../../view/Surface.hpp"
#include "../../../../JClass.hpp"
#include "./RecommendedStreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint RecommendedStreamConfigurationMap::USECASE_LOW_LATENCY_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_LOW_LATENCY_SNAPSHOT"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_PREVIEW"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RAW"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RECORD"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_SNAPSHOT"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_VIDEO_SNAPSHOT"
		);
	}
	jint RecommendedStreamConfigurationMap::USECASE_ZSL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_ZSL"
		);
	}
	
	// QAndroidJniObject forward
	RecommendedStreamConfigurationMap::RecommendedStreamConfigurationMap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject RecommendedStreamConfigurationMap::getHighResolutionOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	JObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRanges()
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()Ljava/util/Set;"
		);
	}
	JObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRangesFor(android::util::Size arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizes()
	{
		return callObjectMethod(
			"getHighSpeedVideoSizes",
			"()Ljava/util/Set;"
		);
	}
	JObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizesFor(android::util::Range arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject RecommendedStreamConfigurationMap::getInputFormats()
	{
		return callObjectMethod(
			"getInputFormats",
			"()Ljava/util/Set;"
		);
	}
	JObject RecommendedStreamConfigurationMap::getInputSizes(jint arg0)
	{
		return callObjectMethod(
			"getInputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	JObject RecommendedStreamConfigurationMap::getOutputFormats()
	{
		return callObjectMethod(
			"getOutputFormats",
			"()Ljava/util/Set;"
		);
	}
	jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(jint arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(JClass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	JObject RecommendedStreamConfigurationMap::getOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	JObject RecommendedStreamConfigurationMap::getOutputSizes(JClass arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	jlong RecommendedStreamConfigurationMap::getOutputStallDuration(jint arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jlong RecommendedStreamConfigurationMap::getOutputStallDuration(JClass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	jint RecommendedStreamConfigurationMap::getRecommendedUseCase()
	{
		return callMethod<jint>(
			"getRecommendedUseCase",
			"()I"
		);
	}
	JObject RecommendedStreamConfigurationMap::getValidOutputFormatsForInput(jint arg0)
	{
		return callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(android::view::Surface arg0)
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(jint arg0)
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(I)Z",
			arg0
		);
	}
} // namespace android::hardware::camera2::params

