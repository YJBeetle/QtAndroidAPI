#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::media::audiofx
{
	class Visualizer_MeasurementPeakRms;
}

namespace android::media::audiofx
{
	class Visualizer : public JObject
	{
	public:
		// Fields
		static jint ALREADY_EXISTS();
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint ERROR_NO_INIT();
		static jint ERROR_NO_MEMORY();
		static jint MEASUREMENT_MODE_NONE();
		static jint MEASUREMENT_MODE_PEAK_RMS();
		static jint SCALING_MODE_AS_PLAYED();
		static jint SCALING_MODE_NORMALIZED();
		static jint STATE_ENABLED();
		static jint STATE_INITIALIZED();
		static jint STATE_UNINITIALIZED();
		static jint SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Visualizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Visualizer(QAndroidJniObject obj);
		
		// Constructors
		Visualizer(jint arg0);
		
		// Methods
		static JIntArray getCaptureSizeRange();
		static jint getMaxCaptureRate();
		jint getCaptureSize();
		jboolean getEnabled();
		jint getFft(JByteArray arg0);
		jint getMeasurementMode();
		jint getMeasurementPeakRms(android::media::audiofx::Visualizer_MeasurementPeakRms arg0);
		jint getSamplingRate();
		jint getScalingMode();
		jint getWaveForm(JByteArray arg0);
		void release();
		jint setCaptureSize(jint arg0);
		jint setDataCaptureListener(JObject arg0, jint arg1, jboolean arg2, jboolean arg3);
		jint setEnabled(jboolean arg0);
		jint setMeasurementMode(jint arg0);
		jint setScalingMode(jint arg0);
	};
} // namespace android::media::audiofx

