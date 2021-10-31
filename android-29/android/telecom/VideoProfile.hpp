#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class VideoProfile : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint QUALITY_DEFAULT();
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		static jint STATE_AUDIO_ONLY();
		static jint STATE_BIDIRECTIONAL();
		static jint STATE_PAUSED();
		static jint STATE_RX_ENABLED();
		static jint STATE_TX_ENABLED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VideoProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VideoProfile(QAndroidJniObject obj);
		
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
		static jstring videoStateToString(jint arg0);
		jint describeContents();
		jint getQuality();
		jint getVideoState();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

