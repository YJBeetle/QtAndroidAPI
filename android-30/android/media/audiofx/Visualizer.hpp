#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "./Visualizer_MeasurementPeakRms.def.hpp"
#include "./Visualizer.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint Visualizer::ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ALREADY_EXISTS"
		);
	}
	inline jint Visualizer::ERROR()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR"
		);
	}
	inline jint Visualizer::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_BAD_VALUE"
		);
	}
	inline jint Visualizer::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_DEAD_OBJECT"
		);
	}
	inline jint Visualizer::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_INVALID_OPERATION"
		);
	}
	inline jint Visualizer::ERROR_NO_INIT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_INIT"
		);
	}
	inline jint Visualizer::ERROR_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_MEMORY"
		);
	}
	inline jint Visualizer::MEASUREMENT_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_NONE"
		);
	}
	inline jint Visualizer::MEASUREMENT_MODE_PEAK_RMS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_PEAK_RMS"
		);
	}
	inline jint Visualizer::SCALING_MODE_AS_PLAYED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_AS_PLAYED"
		);
	}
	inline jint Visualizer::SCALING_MODE_NORMALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_NORMALIZED"
		);
	}
	inline jint Visualizer::STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_ENABLED"
		);
	}
	inline jint Visualizer::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_INITIALIZED"
		);
	}
	inline jint Visualizer::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_UNINITIALIZED"
		);
	}
	inline jint Visualizer::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SUCCESS"
		);
	}
	
	// Constructors
	inline Visualizer::Visualizer(jint arg0)
		: JObject(
			"android.media.audiofx.Visualizer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JIntArray Visualizer::getCaptureSizeRange()
	{
		return callStaticObjectMethod(
			"android.media.audiofx.Visualizer",
			"getCaptureSizeRange",
			"()[I"
		);
	}
	inline jint Visualizer::getMaxCaptureRate()
	{
		return callStaticMethod<jint>(
			"android.media.audiofx.Visualizer",
			"getMaxCaptureRate",
			"()I"
		);
	}
	inline jint Visualizer::getCaptureSize() const
	{
		return callMethod<jint>(
			"getCaptureSize",
			"()I"
		);
	}
	inline jboolean Visualizer::getEnabled() const
	{
		return callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	inline jint Visualizer::getFft(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getFft",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint Visualizer::getMeasurementMode() const
	{
		return callMethod<jint>(
			"getMeasurementMode",
			"()I"
		);
	}
	inline jint Visualizer::getMeasurementPeakRms(android::media::audiofx::Visualizer_MeasurementPeakRms arg0) const
	{
		return callMethod<jint>(
			"getMeasurementPeakRms",
			"(Landroid/media/audiofx/Visualizer$MeasurementPeakRms;)I",
			arg0.object()
		);
	}
	inline jint Visualizer::getSamplingRate() const
	{
		return callMethod<jint>(
			"getSamplingRate",
			"()I"
		);
	}
	inline jint Visualizer::getScalingMode() const
	{
		return callMethod<jint>(
			"getScalingMode",
			"()I"
		);
	}
	inline jint Visualizer::getWaveForm(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getWaveForm",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline void Visualizer::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jint Visualizer::setCaptureSize(jint arg0) const
	{
		return callMethod<jint>(
			"setCaptureSize",
			"(I)I",
			arg0
		);
	}
	inline jint Visualizer::setDataCaptureListener(JObject arg0, jint arg1, jboolean arg2, jboolean arg3) const
	{
		return callMethod<jint>(
			"setDataCaptureListener",
			"(Landroid/media/audiofx/Visualizer$OnDataCaptureListener;IZZ)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Visualizer::setEnabled(jboolean arg0) const
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
	inline jint Visualizer::setMeasurementMode(jint arg0) const
	{
		return callMethod<jint>(
			"setMeasurementMode",
			"(I)I",
			arg0
		);
	}
	inline jint Visualizer::setScalingMode(jint arg0) const
	{
		return callMethod<jint>(
			"setScalingMode",
			"(I)I",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
