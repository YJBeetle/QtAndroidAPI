#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../view/View.hpp"
#include "../../view/ViewGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Region;
}
namespace __jni_impl::android::media
{
	class PlaybackParams;
}
namespace __jni_impl::android::media::tv
{
	class TvView_TimeShiftPositionCallback;
}
namespace __jni_impl::android::media::tv
{
	class TvView_TvInputCallback;
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
	class InputEvent;
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
	class View;
}

namespace __jni_impl::android::media::tv
{
	class TvView : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		
		// Methods
		jboolean dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchUnhandledInputEvent(__jni_impl::android::view::InputEvent arg0);
		void dispatchWindowFocusChanged(jboolean arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jboolean gatherTransparentRegion(__jni_impl::android::graphics::Region arg0);
		jstring getSelectedTrack(jint arg0);
		QAndroidJniObject getTracks(jint arg0);
		jboolean onUnhandledInputEvent(__jni_impl::android::view::InputEvent arg0);
		void reset();
		void selectTrack(jint arg0, jstring arg1);
		void selectTrack(jint arg0, const QString &arg1);
		void sendAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void sendAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void setCallback(__jni_impl::android::media::tv::TvView_TvInputCallback arg0);
		void setCaptionEnabled(jboolean arg0);
		void setOnUnhandledInputEventListener(__jni_impl::__JniBaseClass arg0);
		void setStreamVolume(jfloat arg0);
		void setTimeShiftPositionCallback(__jni_impl::android::media::tv::TvView_TimeShiftPositionCallback arg0);
		void setZOrderMediaOverlay(jboolean arg0);
		void setZOrderOnTop(jboolean arg0);
		void timeShiftPause();
		void timeShiftPlay(jstring arg0, __jni_impl::android::net::Uri arg1);
		void timeShiftPlay(const QString &arg0, __jni_impl::android::net::Uri arg1);
		void timeShiftResume();
		void timeShiftSeekTo(jlong arg0);
		void timeShiftSetPlaybackParams(__jni_impl::android::media::PlaybackParams arg0);
		void tune(jstring arg0, __jni_impl::android::net::Uri arg1);
		void tune(const QString &arg0, __jni_impl::android::net::Uri arg1);
		void tune(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
		void tune(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/Context.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Region.hpp"
#include "../PlaybackParams.hpp"
#include "TvView_TimeShiftPositionCallback.hpp"
#include "TvView_TvInputCallback.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/InputEvent.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TvView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jboolean TvView::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchUnhandledInputEvent(__jni_impl::android::view::InputEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvView::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void TvView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::gatherTransparentRegion(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring TvView::getSelectedTrack(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedTrack",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject TvView::getTracks(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTracks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean TvView::onUnhandledInputEvent(__jni_impl::android::view::InputEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvView::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TvView::selectTrack(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TvView::selectTrack(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void TvView::sendAppPrivateCommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::sendAppPrivateCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvView::setCallback(__jni_impl::android::media::tv::TvView_TvInputCallback arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/tv/TvView$TvInputCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setCaptionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void TvView::setOnUnhandledInputEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Landroid/media/tv/TvView$OnUnhandledInputEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setStreamVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStreamVolume",
			"(F)V",
			arg0
		);
	}
	void TvView::setTimeShiftPositionCallback(__jni_impl::android::media::tv::TvView_TimeShiftPositionCallback arg0)
	{
		__thiz.callMethod<void>(
			"setTimeShiftPositionCallback",
			"(Landroid/media/tv/TvView$TimeShiftPositionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setZOrderMediaOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void TvView::setZOrderOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
	void TvView::timeShiftPause()
	{
		__thiz.callMethod<void>(
			"timeShiftPause",
			"()V"
		);
	}
	void TvView::timeShiftPlay(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"timeShiftPlay",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::timeShiftPlay(const QString &arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"timeShiftPlay",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvView::timeShiftResume()
	{
		__thiz.callMethod<void>(
			"timeShiftResume",
			"()V"
		);
	}
	void TvView::timeShiftSeekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"timeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	void TvView::timeShiftSetPlaybackParams(__jni_impl::android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"timeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::tune(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::tune(const QString &arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvView::tune(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TvView::tune(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvView : public __jni_impl::android::media::tv::TvView
	{
	public:
		TvView(QAndroidJniObject obj) { __thiz = obj; }
		TvView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TvView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TvView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::tv

