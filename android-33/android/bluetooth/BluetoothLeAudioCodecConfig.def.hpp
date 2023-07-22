#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth
{
	class BluetoothLeAudioCodecConfig : public JObject
	{
	public:
		// Fields
		static jint BITS_PER_SAMPLE_16();
		static jint BITS_PER_SAMPLE_24();
		static jint BITS_PER_SAMPLE_32();
		static jint BITS_PER_SAMPLE_NONE();
		static jint CHANNEL_COUNT_1();
		static jint CHANNEL_COUNT_2();
		static jint CHANNEL_COUNT_NONE();
		static jint CODEC_PRIORITY_DEFAULT();
		static jint CODEC_PRIORITY_DISABLED();
		static jint CODEC_PRIORITY_HIGHEST();
		static JObject CREATOR();
		static jint FRAME_DURATION_10000();
		static jint FRAME_DURATION_7500();
		static jint FRAME_DURATION_NONE();
		static jint SAMPLE_RATE_16000();
		static jint SAMPLE_RATE_24000();
		static jint SAMPLE_RATE_32000();
		static jint SAMPLE_RATE_44100();
		static jint SAMPLE_RATE_48000();
		static jint SAMPLE_RATE_8000();
		static jint SAMPLE_RATE_NONE();
		static jint SOURCE_CODEC_TYPE_INVALID();
		static jint SOURCE_CODEC_TYPE_LC3();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudioCodecConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudioCodecConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBitsPerSample() const;
		jint getChannelCount() const;
		JString getCodecName() const;
		jint getCodecPriority() const;
		jint getCodecType() const;
		jint getFrameDuration() const;
		jint getMaxOctetsPerFrame() const;
		jint getMinOctetsPerFrame() const;
		jint getOctetsPerFrame() const;
		jint getSampleRate() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

