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
	class BluetoothCodecConfig : public JObject
	{
	public:
		// Fields
		static jint BITS_PER_SAMPLE_16();
		static jint BITS_PER_SAMPLE_24();
		static jint BITS_PER_SAMPLE_32();
		static jint BITS_PER_SAMPLE_NONE();
		static jint CHANNEL_MODE_MONO();
		static jint CHANNEL_MODE_NONE();
		static jint CHANNEL_MODE_STEREO();
		static jint CODEC_PRIORITY_DEFAULT();
		static jint CODEC_PRIORITY_DISABLED();
		static jint CODEC_PRIORITY_HIGHEST();
		static JObject CREATOR();
		static jint SAMPLE_RATE_176400();
		static jint SAMPLE_RATE_192000();
		static jint SAMPLE_RATE_44100();
		static jint SAMPLE_RATE_48000();
		static jint SAMPLE_RATE_88200();
		static jint SAMPLE_RATE_96000();
		static jint SAMPLE_RATE_NONE();
		static jint SOURCE_CODEC_TYPE_AAC();
		static jint SOURCE_CODEC_TYPE_APTX();
		static jint SOURCE_CODEC_TYPE_APTX_HD();
		static jint SOURCE_CODEC_TYPE_INVALID();
		static jint SOURCE_CODEC_TYPE_LC3();
		static jint SOURCE_CODEC_TYPE_LDAC();
		static jint SOURCE_CODEC_TYPE_OPUS();
		static jint SOURCE_CODEC_TYPE_SBC();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothCodecConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothCodecConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBitsPerSample() const;
		jint getChannelMode() const;
		jint getCodecPriority() const;
		jlong getCodecSpecific1() const;
		jlong getCodecSpecific2() const;
		jlong getCodecSpecific3() const;
		jlong getCodecSpecific4() const;
		jint getCodecType() const;
		jint getSampleRate() const;
		jint hashCode() const;
		jboolean isMandatoryCodec() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

