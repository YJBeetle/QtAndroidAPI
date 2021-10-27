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
		
		TvView_TvInputCallback(QAndroidJniObject obj);
		// Constructors
		TvView_TvInputCallback();
		
		// Methods
		void onChannelRetuned(jstring arg0, android::net::Uri arg1);
		void onChannelRetuned(const QString &arg0, android::net::Uri arg1);
		void onConnectionFailed(jstring arg0);
		void onConnectionFailed(const QString &arg0);
		void onContentAllowed(jstring arg0);
		void onContentAllowed(const QString &arg0);
		void onContentBlocked(jstring arg0, android::media::tv::TvContentRating arg1);
		void onContentBlocked(const QString &arg0, android::media::tv::TvContentRating arg1);
		void onDisconnected(jstring arg0);
		void onDisconnected(const QString &arg0);
		void onTimeShiftStatusChanged(jstring arg0, jint arg1);
		void onTimeShiftStatusChanged(const QString &arg0, jint arg1);
		void onTrackSelected(jstring arg0, jint arg1, jstring arg2);
		void onTrackSelected(const QString &arg0, jint arg1, const QString &arg2);
		void onTracksChanged(jstring arg0, __JniBaseClass arg1);
		void onTracksChanged(const QString &arg0, __JniBaseClass arg1);
		void onVideoAvailable(jstring arg0);
		void onVideoAvailable(const QString &arg0);
		void onVideoSizeChanged(jstring arg0, jint arg1, jint arg2);
		void onVideoSizeChanged(const QString &arg0, jint arg1, jint arg2);
		void onVideoUnavailable(jstring arg0, jint arg1);
		void onVideoUnavailable(const QString &arg0, jint arg1);
	};
} // namespace android::media::tv

