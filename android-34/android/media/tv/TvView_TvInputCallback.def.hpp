#pragma once

#include "../../../JObject.hpp"

class JFloatArray;
namespace android::media::tv
{
	class AitInfo;
}
namespace android::media::tv
{
	class TvContentRating;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv
{
	class TvView_TvInputCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvView_TvInputCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvView_TvInputCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvView_TvInputCallback();
		
		// Methods
		void onAitInfoUpdated(JString arg0, android::media::tv::AitInfo arg1) const;
		void onAudioPresentationSelected(JString arg0, jint arg1, jint arg2) const;
		void onAudioPresentationsChanged(JString arg0, JObject arg1) const;
		void onAvailableSpeeds(JString arg0, JFloatArray arg1) const;
		void onChannelRetuned(JString arg0, android::net::Uri arg1) const;
		void onConnectionFailed(JString arg0) const;
		void onContentAllowed(JString arg0) const;
		void onContentBlocked(JString arg0, android::media::tv::TvContentRating arg1) const;
		void onCueingMessageAvailability(JString arg0, jboolean arg1) const;
		void onDisconnected(JString arg0) const;
		void onSignalStrengthUpdated(JString arg0, jint arg1) const;
		void onTimeShiftMode(JString arg0, jint arg1) const;
		void onTimeShiftStatusChanged(JString arg0, jint arg1) const;
		void onTrackSelected(JString arg0, jint arg1, JString arg2) const;
		void onTracksChanged(JString arg0, JObject arg1) const;
		void onTuned(JString arg0, android::net::Uri arg1) const;
		void onTvMessage(JString arg0, jint arg1, android::os::Bundle arg2) const;
		void onVideoAvailable(JString arg0) const;
		void onVideoSizeChanged(JString arg0, jint arg1, jint arg2) const;
		void onVideoUnavailable(JString arg0, jint arg1) const;
	};
} // namespace android::media::tv

