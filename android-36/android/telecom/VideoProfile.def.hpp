#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telecom
{
	class VideoProfile : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint QUALITY_DEFAULT();
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		static jint STATE_AUDIO_ONLY();
		static jint STATE_BIDIRECTIONAL();
		static jint STATE_PAUSED();
		static jint STATE_RX_ENABLED();
		static jint STATE_TX_ENABLED();
		
		// QJniObject forward
		template<typename ...Ts> explicit VideoProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VideoProfile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VideoProfile(jint arg0);
		VideoProfile(jint arg0, jint arg1);
		
		// Methods
		static jboolean isAudioOnly(jint arg0);
		static jboolean isBidirectional(jint arg0);
		static jboolean isPaused(jint arg0);
		static jboolean isReceptionEnabled(jint arg0);
		static jboolean isTransmissionEnabled(jint arg0);
		static jboolean isVideo(jint arg0);
		static JString videoStateToString(jint arg0);
		jint describeContents() const;
		jint getQuality() const;
		jint getVideoState() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

