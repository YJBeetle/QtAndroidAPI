#pragma once

#include "./Event.def.hpp"

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
		TrackChangeEvent(QJniObject obj) : android::media::metrics::Event(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAudioSampleRate() const;
		jint getBitrate() const;
		jint getChannelCount() const;
		JString getCodecName() const;
		JString getContainerMimeType() const;
		jint getHeight() const;
		JString getLanguage() const;
		JString getLanguageRegion() const;
		android::os::Bundle getMetricsBundle() const;
		JString getSampleMimeType() const;
		jlong getTimeSinceCreatedMillis() const;
		jint getTrackChangeReason() const;
		jint getTrackState() const;
		jint getTrackType() const;
		jfloat getVideoFrameRate() const;
		jint getWidth() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::metrics

