#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::tv
{
	class TvContentRating;
}
namespace android::net
{
	class Uri;
}

namespace android::media::tv
{
	class TvView_TvInputCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvView_TvInputCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvView_TvInputCallback(QJniObject obj);
		
		// Constructors
		TvView_TvInputCallback();
		
		// Methods
		void onChannelRetuned(jstring arg0, android::net::Uri arg1);
		void onConnectionFailed(jstring arg0);
		void onContentAllowed(jstring arg0);
		void onContentBlocked(jstring arg0, android::media::tv::TvContentRating arg1);
		void onDisconnected(jstring arg0);
		void onTimeShiftStatusChanged(jstring arg0, jint arg1);
		void onTrackSelected(jstring arg0, jint arg1, jstring arg2);
		void onTracksChanged(jstring arg0, __JniBaseClass arg1);
		void onVideoAvailable(jstring arg0);
		void onVideoSizeChanged(jstring arg0, jint arg1, jint arg2);
		void onVideoUnavailable(jstring arg0, jint arg1);
	};
} // namespace android::media::tv

