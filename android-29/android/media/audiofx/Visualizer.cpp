#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "./Visualizer_MeasurementPeakRms.hpp"
#include "./Visualizer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Visualizer::ALREADY_EXISTS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ALREADY_EXISTS"
		);
	}
	jint Visualizer::ERROR()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR"
		);
	}
	jint Visualizer::ERROR_BAD_VALUE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_BAD_VALUE"
		);
	}
	jint Visualizer::ERROR_DEAD_OBJECT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint Visualizer::ERROR_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint Visualizer::ERROR_NO_INIT()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_INIT"
		);
	}
	jint Visualizer::ERROR_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_MEMORY"
		);
	}
	jint Visualizer::MEASUREMENT_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_NONE"
		);
	}
	jint Visualizer::MEASUREMENT_MODE_PEAK_RMS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_PEAK_RMS"
		);
	}
	jint Visualizer::SCALING_MODE_AS_PLAYED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_AS_PLAYED"
		);
	}
	jint Visualizer::SCALING_MODE_NORMALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_NORMALIZED"
		);
	}
	jint Visualizer::STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_ENABLED"
		);
	}
	jint Visualizer::STATE_INITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_INITIALIZED"
		);
	}
	jint Visualizer::STATE_UNINITIALIZED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_UNINITIALIZED"
		);
	}
	jint Visualizer::SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SUCCESS"
		);
	}
	
	// Constructors
	Visualizer::Visualizer(jint arg0)
		: JObject(
			"android.media.audiofx.Visualizer",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JIntArray Visualizer::getCaptureSizeRange()
	{
		return callStaticObjectMethod(
			"android.media.audiofx.Visualizer",
			"getCaptureSizeRange",
			"()[I"
		);
	}
	jint Visualizer::getMaxCaptureRate()
	{
		return callStaticMethod<jint>(
			"android.media.audiofx.Visualizer",
			"getMaxCaptureRate",
			"()I"
		);
	}
	jint Visualizer::getCaptureSize() const
	{
		return callMethod<jint>(
			"getCaptureSize",
			"()I"
		);
	}
	jboolean Visualizer::getEnabled() const
	{
		return callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	jint Visualizer::getFft(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getFft",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint Visualizer::getMeasurementMode() const
	{
		return callMethod<jint>(
			"getMeasurementMode",
			"()I"
		);
	}
	jint Visualizer::getMeasurementPeakRms(android::media::audiofx::Visualizer_MeasurementPeakRms arg0) const
	{
		return callMethod<jint>(
			"getMeasurementPeakRms",
			"(Landroid/media/audiofx/Visualizer$MeasurementPeakRms;)I",
			arg0.object()
		);
	}
	jint Visualizer::getSamplingRate() const
	{
		return callMethod<jint>(
			"getSamplingRate",
			"()I"
		);
	}
	jint Visualizer::getScalingMode() const
	{
		return callMethod<jint>(
			"getScalingMode",
			"()I"
		);
	}
	jint Visualizer::getWaveForm(JByteArray arg0) const
	{
		return callMethod<jint>(
			"getWaveForm",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	void Visualizer::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jint Visualizer::setCaptureSize(jint arg0) const
	{
		return callMethod<jint>(
			"setCaptureSize",
			"(I)I",
			arg0
		);
	}
	jint Visualizer::setDataCaptureListener(JObject arg0, jint arg1, jboolean arg2, jboolean arg3) const
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
	jint Visualizer::setEnabled(jboolean arg0) const
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
	jint Visualizer::setMeasurementMode(jint arg0) const
	{
		return callMethod<jint>(
			"setMeasurementMode",
			"(I)I",
			arg0
		);
	}
	jint Visualizer::setScalingMode(jint arg0) const
	{
		return callMethod<jint>(
			"setScalingMode",
			"(I)I",
			arg0
		);
	}
} // namespace android::media::audiofx

