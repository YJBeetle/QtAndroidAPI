#pragma once

#include "../../../JObject.hpp"
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
	class PlaybackStateEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATE_ABANDONED();
		static jint STATE_BUFFERING();
		static jint STATE_ENDED();
		static jint STATE_FAILED();
		static jint STATE_INTERRUPTED_BY_AD();
		static jint STATE_JOINING_BACKGROUND();
		static jint STATE_JOINING_FOREGROUND();
		static jint STATE_NOT_STARTED();
		static jint STATE_PAUSED();
		static jint STATE_PAUSED_BUFFERING();
		static jint STATE_PLAYING();
		static jint STATE_SEEKING();
		static jint STATE_STOPPED();
		static jint STATE_SUPPRESSED();
		static jint STATE_SUPPRESSED_BUFFERING();
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackStateEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackStateEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::Bundle getMetricsBundle();
		jint getState();
		jlong getTimeSinceCreatedMillis();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

