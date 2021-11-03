#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class AudioFormat : public JObject
	{
	public:
		// Fields
		static jint CHANNEL_CONFIGURATION_DEFAULT();
		static jint CHANNEL_CONFIGURATION_INVALID();
		static jint CHANNEL_CONFIGURATION_MONO();
		static jint CHANNEL_CONFIGURATION_STEREO();
		static jint CHANNEL_INVALID();
		static jint CHANNEL_IN_BACK();
		static jint CHANNEL_IN_BACK_PROCESSED();
		static jint CHANNEL_IN_DEFAULT();
		static jint CHANNEL_IN_FRONT();
		static jint CHANNEL_IN_FRONT_PROCESSED();
		static jint CHANNEL_IN_LEFT();
		static jint CHANNEL_IN_LEFT_PROCESSED();
		static jint CHANNEL_IN_MONO();
		static jint CHANNEL_IN_PRESSURE();
		static jint CHANNEL_IN_RIGHT();
		static jint CHANNEL_IN_RIGHT_PROCESSED();
		static jint CHANNEL_IN_STEREO();
		static jint CHANNEL_IN_VOICE_DNLINK();
		static jint CHANNEL_IN_VOICE_UPLINK();
		static jint CHANNEL_IN_X_AXIS();
		static jint CHANNEL_IN_Y_AXIS();
		static jint CHANNEL_IN_Z_AXIS();
		static jint CHANNEL_OUT_5POINT1();
		static jint CHANNEL_OUT_7POINT1();
		static jint CHANNEL_OUT_7POINT1_SURROUND();
		static jint CHANNEL_OUT_BACK_CENTER();
		static jint CHANNEL_OUT_BACK_LEFT();
		static jint CHANNEL_OUT_BACK_RIGHT();
		static jint CHANNEL_OUT_DEFAULT();
		static jint CHANNEL_OUT_FRONT_CENTER();
		static jint CHANNEL_OUT_FRONT_LEFT();
		static jint CHANNEL_OUT_FRONT_LEFT_OF_CENTER();
		static jint CHANNEL_OUT_FRONT_RIGHT();
		static jint CHANNEL_OUT_FRONT_RIGHT_OF_CENTER();
		static jint CHANNEL_OUT_LOW_FREQUENCY();
		static jint CHANNEL_OUT_MONO();
		static jint CHANNEL_OUT_QUAD();
		static jint CHANNEL_OUT_SIDE_LEFT();
		static jint CHANNEL_OUT_SIDE_RIGHT();
		static jint CHANNEL_OUT_STEREO();
		static jint CHANNEL_OUT_SURROUND();
		static JObject CREATOR();
		static jint ENCODING_AAC_ELD();
		static jint ENCODING_AAC_HE_V1();
		static jint ENCODING_AAC_HE_V2();
		static jint ENCODING_AAC_LC();
		static jint ENCODING_AAC_XHE();
		static jint ENCODING_AC3();
		static jint ENCODING_AC4();
		static jint ENCODING_DEFAULT();
		static jint ENCODING_DOLBY_MAT();
		static jint ENCODING_DOLBY_TRUEHD();
		static jint ENCODING_DTS();
		static jint ENCODING_DTS_HD();
		static jint ENCODING_E_AC3();
		static jint ENCODING_E_AC3_JOC();
		static jint ENCODING_IEC61937();
		static jint ENCODING_INVALID();
		static jint ENCODING_MP3();
		static jint ENCODING_OPUS();
		static jint ENCODING_PCM_16BIT();
		static jint ENCODING_PCM_8BIT();
		static jint ENCODING_PCM_FLOAT();
		static jint SAMPLE_RATE_UNSPECIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getChannelCount() const;
		jint getChannelIndexMask() const;
		jint getChannelMask() const;
		jint getEncoding() const;
		jint getFrameSizeInBytes() const;
		jint getSampleRate() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

