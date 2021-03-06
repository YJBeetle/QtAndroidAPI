#pragma once

#ifndef ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK
#define ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media::tv
{
	class TvContentRating;
}

namespace __jni_impl::android::media::tv
{
	class TvView_TvInputCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDisconnected(jstring arg0);
		void onChannelRetuned(jstring arg0, __jni_impl::android::net::Uri arg1);
		void onTracksChanged(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void onTrackSelected(jstring arg0, jint arg1, jstring arg2);
		void onVideoAvailable(jstring arg0);
		void onVideoUnavailable(jstring arg0, jint arg1);
		void onContentAllowed(jstring arg0);
		void onContentBlocked(jstring arg0, __jni_impl::android::media::tv::TvContentRating arg1);
		void onTimeShiftStatusChanged(jstring arg0, jint arg1);
		void onConnectionFailed(jstring arg0);
		void onVideoSizeChanged(jstring arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"
#include "TvContentRating.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvView_TvInputCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView$TvInputCallback",
			"()V");
	}
	
	// Methods
	void TvView_TvInputCallback::onDisconnected(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onChannelRetuned(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"onChannelRetuned",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView_TvInputCallback::onTracksChanged(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onTracksChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
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
	void TvView_TvInputCallback::onVideoAvailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onVideoAvailable",
			"(Ljava/lang/String;)V",
			arg0
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
	void TvView_TvInputCallback::onContentAllowed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onContentAllowed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvView_TvInputCallback::onContentBlocked(jstring arg0, __jni_impl::android::media::tv::TvContentRating arg1)
	{
		__thiz.callMethod<void>(
			"onContentBlocked",
			"(Ljava/lang/String;Landroid/media/tv/TvContentRating;)V",
			arg0,
			arg1.__jniObject().object()
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
	void TvView_TvInputCallback::onConnectionFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
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
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvView_TvInputCallback : public __jni_impl::android::media::tv::TvView_TvInputCallback
	{
	public:
		TvView_TvInputCallback(QAndroidJniObject obj) { __thiz = obj; }
		TvView_TvInputCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVVIEW_TVINPUTCALLBACK

