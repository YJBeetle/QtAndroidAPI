#include "./Visualizer_MeasurementPeakRms.hpp"
#include "./Visualizer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Visualizer::ALREADY_EXISTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ALREADY_EXISTS"
		);
	}
	jint Visualizer::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR"
		);
	}
	jint Visualizer::ERROR_BAD_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_BAD_VALUE"
		);
	}
	jint Visualizer::ERROR_DEAD_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_DEAD_OBJECT"
		);
	}
	jint Visualizer::ERROR_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_INVALID_OPERATION"
		);
	}
	jint Visualizer::ERROR_NO_INIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_INIT"
		);
	}
	jint Visualizer::ERROR_NO_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"ERROR_NO_MEMORY"
		);
	}
	jint Visualizer::MEASUREMENT_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_NONE"
		);
	}
	jint Visualizer::MEASUREMENT_MODE_PEAK_RMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"MEASUREMENT_MODE_PEAK_RMS"
		);
	}
	jint Visualizer::SCALING_MODE_AS_PLAYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_AS_PLAYED"
		);
	}
	jint Visualizer::SCALING_MODE_NORMALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SCALING_MODE_NORMALIZED"
		);
	}
	jint Visualizer::STATE_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_ENABLED"
		);
	}
	jint Visualizer::STATE_INITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_INITIALIZED"
		);
	}
	jint Visualizer::STATE_UNINITIALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"STATE_UNINITIALIZED"
		);
	}
	jint Visualizer::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Visualizer",
			"SUCCESS"
		);
	}
	
	Visualizer::Visualizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Visualizer::Visualizer(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Visualizer",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jintArray Visualizer::getCaptureSizeRange()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.audiofx.Visualizer",
			"getCaptureSizeRange",
			"()[I"
		).object<jintArray>();
	}
	jint Visualizer::getMaxCaptureRate()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.audiofx.Visualizer",
			"getMaxCaptureRate",
			"()I"
		);
	}
	jint Visualizer::getCaptureSize()
	{
		return __thiz.callMethod<jint>(
			"getCaptureSize",
			"()I"
		);
	}
	jboolean Visualizer::getEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getEnabled",
			"()Z"
		);
	}
	jint Visualizer::getFft(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getFft",
			"([B)I",
			arg0
		);
	}
	jint Visualizer::getMeasurementMode()
	{
		return __thiz.callMethod<jint>(
			"getMeasurementMode",
			"()I"
		);
	}
	jint Visualizer::getMeasurementPeakRms(android::media::audiofx::Visualizer_MeasurementPeakRms arg0)
	{
		return __thiz.callMethod<jint>(
			"getMeasurementPeakRms",
			"(Landroid/media/audiofx/Visualizer$MeasurementPeakRms;)I",
			arg0.__jniObject().object()
		);
	}
	jint Visualizer::getSamplingRate()
	{
		return __thiz.callMethod<jint>(
			"getSamplingRate",
			"()I"
		);
	}
	jint Visualizer::getScalingMode()
	{
		return __thiz.callMethod<jint>(
			"getScalingMode",
			"()I"
		);
	}
	jint Visualizer::getWaveForm(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaveForm",
			"([B)I",
			arg0
		);
	}
	void Visualizer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jint Visualizer::setCaptureSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setCaptureSize",
			"(I)I",
			arg0
		);
	}
	jint Visualizer::setDataCaptureListener(__JniBaseClass arg0, jint arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callMethod<jint>(
			"setDataCaptureListener",
			"(Landroid/media/audiofx/Visualizer$OnDataCaptureListener;IZZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint Visualizer::setEnabled(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
	jint Visualizer::setMeasurementMode(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setMeasurementMode",
			"(I)I",
			arg0
		);
	}
	jint Visualizer::setScalingMode(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"setScalingMode",
			"(I)I",
			arg0
		);
	}
} // namespace android::media::audiofx

