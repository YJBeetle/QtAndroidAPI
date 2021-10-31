#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Event.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::metrics
{
	class TrackChangeEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TRACK_CHANGE_REASON_ADAPTIVE();
		static jint TRACK_CHANGE_REASON_INITIAL();
		static jint TRACK_CHANGE_REASON_MANUAL();
		static jint TRACK_CHANGE_REASON_OTHER();
		static jint TRACK_CHANGE_REASON_UNKNOWN();
		static jint TRACK_STATE_OFF();
		static jint TRACK_STATE_ON();
		static jint TRACK_TYPE_AUDIO();
		static jint TRACK_TYPE_TEXT();
		static jint TRACK_TYPE_VIDEO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TrackChangeEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		TrackChangeEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAudioSampleRate();
		jint getBitrate();
		jint getChannelCount();
		jstring getCodecName();
		jstring getContainerMimeType();
		jint getHeight();
		jstring getLanguage();
		jstring getLanguageRegion();
		android::os::Bundle getMetricsBundle();
		jstring getSampleMimeType();
		jlong getTimeSinceCreatedMillis();
		jint getTrackChangeReason();
		jint getTrackState();
		jint getTrackType();
		jfloat getVideoFrameRate();
		jint getWidth();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

