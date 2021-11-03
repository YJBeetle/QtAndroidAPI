#pragma once

#include "./Event.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::metrics
{
	class TrackChangeEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TrackChangeEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		TrackChangeEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAudioSampleRate();
		jint getBitrate();
		jint getChannelCount();
		JString getCodecName();
		JString getContainerMimeType();
		jint getHeight();
		JString getLanguage();
		JString getLanguageRegion();
		android::os::Bundle getMetricsBundle();
		JString getSampleMimeType();
		jlong getTimeSinceCreatedMillis();
		jint getTrackChangeReason();
		jint getTrackState();
		jint getTrackType();
		jfloat getVideoFrameRate();
		jint getWidth();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

