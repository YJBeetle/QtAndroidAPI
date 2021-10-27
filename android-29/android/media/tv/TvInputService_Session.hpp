#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION
#define ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class PlaybackParams;
}
namespace __jni_impl::android::media::tv
{
	class TvContentRating;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::media::tv
{
	class TvInputService_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3);
		void notifyChannelRetuned(__jni_impl::android::net::Uri arg0);
		void notifyContentAllowed();
		void notifyContentBlocked(__jni_impl::android::media::tv::TvContentRating arg0);
		void notifyTimeShiftStatusChanged(jint arg0);
		void notifyTrackSelected(jint arg0, jstring arg1);
		void notifyTrackSelected(jint arg0, const QString &arg1);
		void notifyTracksChanged(__jni_impl::__JniBaseClass arg0);
		void notifyVideoAvailable();
		void notifyVideoUnavailable(jint arg0);
		void onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject onCreateOverlayView();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void onOverlayViewSizeChanged(jint arg0, jint arg1);
		void onRelease();
		jboolean onSelectTrack(jint arg0, jstring arg1);
		jboolean onSelectTrack(jint arg0, const QString &arg1);
		void onSetCaptionEnabled(jboolean arg0);
		void onSetStreamVolume(jfloat arg0);
		jboolean onSetSurface(__jni_impl::android::view::Surface arg0);
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2);
		jlong onTimeShiftGetCurrentPosition();
		jlong onTimeShiftGetStartPosition();
		void onTimeShiftPause();
		void onTimeShiftPlay(__jni_impl::android::net::Uri arg0);
		void onTimeShiftResume();
		void onTimeShiftSeekTo(jlong arg0);
		void onTimeShiftSetPlaybackParams(__jni_impl::android::media::PlaybackParams arg0);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTune(__jni_impl::android::net::Uri arg0);
		jboolean onTune(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		void onUnblockContent(__jni_impl::android::media::tv::TvContentRating arg0);
		void setOverlayViewEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/Context.hpp"
#include "../PlaybackParams.hpp"
#include "TvContentRating.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/Surface.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvInputService_Session::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService$Session",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void TvInputService_Session::layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"layoutSurface",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TvInputService_Session::notifyChannelRetuned(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"notifyChannelRetuned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::notifyContentAllowed()
	{
		__thiz.callMethod<void>(
			"notifyContentAllowed",
			"()V"
		);
	}
	void TvInputService_Session::notifyContentBlocked(__jni_impl::android::media::tv::TvContentRating arg0)
	{
		__thiz.callMethod<void>(
			"notifyContentBlocked",
			"(Landroid/media/tv/TvContentRating;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::notifyTimeShiftStatusChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"notifyTimeShiftStatusChanged",
			"(I)V",
			arg0
		);
	}
	void TvInputService_Session::notifyTrackSelected(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"notifyTrackSelected",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TvInputService_Session::notifyTrackSelected(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"notifyTrackSelected",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void TvInputService_Session::notifyTracksChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"notifyTracksChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::notifyVideoAvailable()
	{
		__thiz.callMethod<void>(
			"notifyVideoAvailable",
			"()V"
		);
	}
	void TvInputService_Session::notifyVideoUnavailable(jint arg0)
	{
		__thiz.callMethod<void>(
			"notifyVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	void TvInputService_Session::onAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvInputService_Session::onAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TvInputService_Session::onCreateOverlayView()
	{
		return __thiz.callObjectMethod(
			"onCreateOverlayView",
			"()Landroid/view/View;"
		);
	}
	jboolean TvInputService_Session::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvInputService_Session::onOverlayViewSizeChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onOverlayViewSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TvInputService_Session::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jboolean TvInputService_Session::onSelectTrack(jint arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onSelectTrack",
			"(ILjava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean TvInputService_Session::onSelectTrack(jint arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onSelectTrack",
			"(ILjava/lang/String;)Z",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void TvInputService_Session::onSetCaptionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onSetCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void TvInputService_Session::onSetStreamVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onSetStreamVolume",
			"(F)V",
			arg0
		);
	}
	jboolean TvInputService_Session::onSetSurface(__jni_impl::android::view::Surface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::onSurfaceChanged(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onSurfaceChanged",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jlong TvInputService_Session::onTimeShiftGetCurrentPosition()
	{
		return __thiz.callMethod<jlong>(
			"onTimeShiftGetCurrentPosition",
			"()J"
		);
	}
	jlong TvInputService_Session::onTimeShiftGetStartPosition()
	{
		return __thiz.callMethod<jlong>(
			"onTimeShiftGetStartPosition",
			"()J"
		);
	}
	void TvInputService_Session::onTimeShiftPause()
	{
		__thiz.callMethod<void>(
			"onTimeShiftPause",
			"()V"
		);
	}
	void TvInputService_Session::onTimeShiftPlay(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onTimeShiftPlay",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::onTimeShiftResume()
	{
		__thiz.callMethod<void>(
			"onTimeShiftResume",
			"()V"
		);
	}
	void TvInputService_Session::onTimeShiftSeekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onTimeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	void TvInputService_Session::onTimeShiftSetPlaybackParams(__jni_impl::android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"onTimeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onTune(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTune",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputService_Session::onTune(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TvInputService_Session::onUnblockContent(__jni_impl::android::media::tv::TvContentRating arg0)
	{
		__thiz.callMethod<void>(
			"onUnblockContent",
			"(Landroid/media/tv/TvContentRating;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_Session::setOverlayViewEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOverlayViewEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputService_Session : public __jni_impl::android::media::tv::TvInputService_Session
	{
	public:
		TvInputService_Session(QAndroidJniObject obj) { __thiz = obj; }
		TvInputService_Session(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTSERVICE_SESSION

