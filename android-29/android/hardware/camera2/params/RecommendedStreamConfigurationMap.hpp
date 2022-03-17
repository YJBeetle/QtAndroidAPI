#pragma once

#include "./StreamConfigurationMap.def.hpp"
#include "../../../util/Range.def.hpp"
#include "../../../util/Size.def.hpp"
#include "../../../view/Surface.def.hpp"
#include "../../../../JClass.hpp"
#include "./RecommendedStreamConfigurationMap.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint RecommendedStreamConfigurationMap::USECASE_LOW_LATENCY_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_LOW_LATENCY_SNAPSHOT"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_PREVIEW"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RAW"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_RECORD"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_SNAPSHOT"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_VIDEO_SNAPSHOT"
		);
	}
	inline jint RecommendedStreamConfigurationMap::USECASE_ZSL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RecommendedStreamConfigurationMap",
			"USECASE_ZSL"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject RecommendedStreamConfigurationMap::getHighResolutionOutputSizes(jint arg0) const
	{
		return callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRanges() const
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()Ljava/util/Set;"
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getHighSpeedVideoFpsRangesFor(android::util::Size arg0) const
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizes() const
	{
		return callObjectMethod(
			"getHighSpeedVideoSizes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getHighSpeedVideoSizesFor(android::util::Range arg0) const
	{
		return callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getInputFormats() const
	{
		return callObjectMethod(
			"getInputFormats",
			"()Ljava/util/Set;"
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getInputSizes(jint arg0) const
	{
		return callObjectMethod(
			"getInputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getOutputFormats() const
	{
		return callObjectMethod(
			"getOutputFormats",
			"()Ljava/util/Set;"
		);
	}
	inline jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(jint arg0, android::util::Size arg1) const
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong RecommendedStreamConfigurationMap::getOutputMinFrameDuration(JClass arg0, android::util::Size arg1) const
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getOutputSizes(jint arg0) const
	{
		return callObjectMethod(
			"getOutputSizes",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getOutputSizes(JClass arg0) const
	{
		return callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)Ljava/util/Set;",
			arg0.object<jclass>()
		);
	}
	inline jlong RecommendedStreamConfigurationMap::getOutputStallDuration(jint arg0, android::util::Size arg1) const
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong RecommendedStreamConfigurationMap::getOutputStallDuration(JClass arg0, android::util::Size arg1) const
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline jint RecommendedStreamConfigurationMap::getRecommendedUseCase() const
	{
		return callMethod<jint>(
			"getRecommendedUseCase",
			"()I"
		);
	}
	inline JObject RecommendedStreamConfigurationMap::getValidOutputFormatsForInput(jint arg0) const
	{
		return callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
	inline jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	inline jboolean RecommendedStreamConfigurationMap::isOutputSupportedFor(jint arg0) const
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(I)Z",
			arg0
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
