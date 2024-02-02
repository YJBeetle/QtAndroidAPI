#pragma once

#include "../MultiResolutionImageReader.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../util/Size.def.hpp"
#include "../../../view/Surface.def.hpp"
#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./OutputConfiguration.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline JObject OutputConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.params.OutputConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint OutputConfiguration::MIRROR_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"MIRROR_MODE_AUTO"
		);
	}
	inline jint OutputConfiguration::MIRROR_MODE_H()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"MIRROR_MODE_H"
		);
	}
	inline jint OutputConfiguration::MIRROR_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"MIRROR_MODE_NONE"
		);
	}
	inline jint OutputConfiguration::MIRROR_MODE_V()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"MIRROR_MODE_V"
		);
	}
	inline jint OutputConfiguration::SURFACE_GROUP_ID_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"SURFACE_GROUP_ID_NONE"
		);
	}
	inline jint OutputConfiguration::TIMESTAMP_BASE_CHOREOGRAPHER_SYNCED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"TIMESTAMP_BASE_CHOREOGRAPHER_SYNCED"
		);
	}
	inline jint OutputConfiguration::TIMESTAMP_BASE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"TIMESTAMP_BASE_DEFAULT"
		);
	}
	inline jint OutputConfiguration::TIMESTAMP_BASE_MONOTONIC()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"TIMESTAMP_BASE_MONOTONIC"
		);
	}
	inline jint OutputConfiguration::TIMESTAMP_BASE_REALTIME()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"TIMESTAMP_BASE_REALTIME"
		);
	}
	inline jint OutputConfiguration::TIMESTAMP_BASE_SENSOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"TIMESTAMP_BASE_SENSOR"
		);
	}
	
	// Constructors
	inline OutputConfiguration::OutputConfiguration(android::view::Surface arg0)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/view/Surface;)V",
			arg0.object()
		) {}
	inline OutputConfiguration::OutputConfiguration(android::util::Size arg0, JClass arg1)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/util/Size;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object<jclass>()
		) {}
	inline OutputConfiguration::OutputConfiguration(jint arg0, android::view::Surface arg1)
		: JObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(ILandroid/view/Surface;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline JObject OutputConfiguration::createInstancesForMultiResolutionOutput(android::hardware::camera2::MultiResolutionImageReader arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.camera2.params.OutputConfiguration",
			"createInstancesForMultiResolutionOutput",
			"(Landroid/hardware/camera2/MultiResolutionImageReader;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline void OutputConfiguration::addSensorPixelModeUsed(jint arg0) const
	{
		callMethod<void>(
			"addSensorPixelModeUsed",
			"(I)V",
			arg0
		);
	}
	inline void OutputConfiguration::addSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"addSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline jint OutputConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void OutputConfiguration::enableSurfaceSharing() const
	{
		callMethod<void>(
			"enableSurfaceSharing",
			"()V"
		);
	}
	inline jboolean OutputConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong OutputConfiguration::getDynamicRangeProfile() const
	{
		return callMethod<jlong>(
			"getDynamicRangeProfile",
			"()J"
		);
	}
	inline jint OutputConfiguration::getMaxSharedSurfaceCount() const
	{
		return callMethod<jint>(
			"getMaxSharedSurfaceCount",
			"()I"
		);
	}
	inline jint OutputConfiguration::getMirrorMode() const
	{
		return callMethod<jint>(
			"getMirrorMode",
			"()I"
		);
	}
	inline jlong OutputConfiguration::getStreamUseCase() const
	{
		return callMethod<jlong>(
			"getStreamUseCase",
			"()J"
		);
	}
	inline android::view::Surface OutputConfiguration::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jint OutputConfiguration::getSurfaceGroupId() const
	{
		return callMethod<jint>(
			"getSurfaceGroupId",
			"()I"
		);
	}
	inline JObject OutputConfiguration::getSurfaces() const
	{
		return callObjectMethod(
			"getSurfaces",
			"()Ljava/util/List;"
		);
	}
	inline jint OutputConfiguration::getTimestampBase() const
	{
		return callMethod<jint>(
			"getTimestampBase",
			"()I"
		);
	}
	inline jint OutputConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean OutputConfiguration::isReadoutTimestampEnabled() const
	{
		return callMethod<jboolean>(
			"isReadoutTimestampEnabled",
			"()Z"
		);
	}
	inline void OutputConfiguration::removeSensorPixelModeUsed(jint arg0) const
	{
		callMethod<void>(
			"removeSensorPixelModeUsed",
			"(I)V",
			arg0
		);
	}
	inline void OutputConfiguration::removeSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"removeSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void OutputConfiguration::setDynamicRangeProfile(jlong arg0) const
	{
		callMethod<void>(
			"setDynamicRangeProfile",
			"(J)V",
			arg0
		);
	}
	inline void OutputConfiguration::setMirrorMode(jint arg0) const
	{
		callMethod<void>(
			"setMirrorMode",
			"(I)V",
			arg0
		);
	}
	inline void OutputConfiguration::setPhysicalCameraId(JString arg0) const
	{
		callMethod<void>(
			"setPhysicalCameraId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void OutputConfiguration::setReadoutTimestampEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setReadoutTimestampEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void OutputConfiguration::setStreamUseCase(jlong arg0) const
	{
		callMethod<void>(
			"setStreamUseCase",
			"(J)V",
			arg0
		);
	}
	inline void OutputConfiguration::setTimestampBase(jint arg0) const
	{
		callMethod<void>(
			"setTimestampBase",
			"(I)V",
			arg0
		);
	}
	inline void OutputConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
