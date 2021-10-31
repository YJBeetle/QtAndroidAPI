#include "./TvContentRating.hpp"
#include "../../net/Uri.hpp"
#include "./TvView_TvInputCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	TvView_TvInputCallback::TvView_TvInputCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvView_TvInputCallback::TvView_TvInputCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView$TvInputCallback",
			"()V"
		);
	}
	
	// Methods
	void TvView_TvInputCallback::onChannelRetuned(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"onChannelRetuned",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView_TvInputCallback::onConnectionFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onContentAllowed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onContentAllowed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onContentBlocked(jstring arg0, android::media::tv::TvContentRating arg1)
	{
		__thiz.callMethod<void>(
			"onContentBlocked",
			"(Ljava/lang/String;Landroid/media/tv/TvContentRating;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView_TvInputCallback::onDisconnected(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onTimeShiftStatusChanged(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftStatusChanged",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void TvView_TvInputCallback::onTrackSelected(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onTrackSelected",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TvView_TvInputCallback::onTracksChanged(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onTracksChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView_TvInputCallback::onVideoAvailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onVideoAvailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onVideoSizeChanged(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onVideoSizeChanged",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TvView_TvInputCallback::onVideoUnavailable(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVideoUnavailable",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
} // namespace android::media::tv

