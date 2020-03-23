#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION
#define ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION

#include "TvInputService_Session.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::media::tv
{
	class TvInputService_HardwareSession : public __jni_impl::android::media::tv::TvInputService_Session
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getHardwareInputId();
		jboolean onSetSurface(__jni_impl::android::view::Surface arg0);
		void onHardwareVideoAvailable();
		void onHardwareVideoUnavailable(jint arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/Context.hpp"
#include "../../view/Surface.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvInputService_HardwareSession::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService$HardwareSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TvInputService_HardwareSession::getHardwareInputId()
	{
		return __thiz.callObjectMethod(
			"getHardwareInputId",
			"()Ljava/lang/String;");
	}
	jboolean TvInputService_HardwareSession::onSetSurface(__jni_impl::android::view::Surface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.__jniObject().object());
	}
	void TvInputService_HardwareSession::onHardwareVideoAvailable()
	{
		__thiz.callMethod<void>(
			"onHardwareVideoAvailable",
			"()V");
	}
	void TvInputService_HardwareSession::onHardwareVideoUnavailable(jint arg0)
	{
		__thiz.callMethod<void>(
			"onHardwareVideoUnavailable",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputService_HardwareSession : public __jni_impl::android::media::tv::TvInputService_HardwareSession
	{
	public:
		TvInputService_HardwareSession(QAndroidJniObject obj) { __thiz = obj; }
		TvInputService_HardwareSession(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTSERVICE_HARDWARESESSION

