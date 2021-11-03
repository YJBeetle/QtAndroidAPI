#pragma once

#include "../../../JObject.hpp"

namespace android::media::tv
{
	class TvContentRating;
}
namespace android::net
{
	class Uri;
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
		TvView_TvInputCallback(QJniObject obj);
		
		// Constructors
		TvView_TvInputCallback();
		
		// Methods
		void onChannelRetuned(JString arg0, android::net::Uri arg1);
		void onConnectionFailed(JString arg0);
		void onContentAllowed(JString arg0);
		void onContentBlocked(JString arg0, android::media::tv::TvContentRating arg1);
		void onDisconnected(JString arg0);
		void onTimeShiftStatusChanged(JString arg0, jint arg1);
		void onTrackSelected(JString arg0, jint arg1, JString arg2);
		void onTracksChanged(JString arg0, JObject arg1);
		void onVideoAvailable(JString arg0);
		void onVideoSizeChanged(JString arg0, jint arg1, jint arg2);
		void onVideoUnavailable(JString arg0, jint arg1);
	};
} // namespace android::media::tv

