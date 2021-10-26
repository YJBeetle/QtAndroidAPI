#pragma once

#ifndef ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO
#define ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO

#include "../../__JniBaseClass.hpp"
#include "MediaRouter_RouteInfo.hpp"

namespace __jni_impl::android::media
{
	class MediaRouter_RouteCategory;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::media
{
	class RemoteControlClient;
}
namespace __jni_impl::android::media
{
	class MediaRouter_VolumeCallback;
}

namespace __jni_impl::android::media
{
	class MediaRouter_UserRouteInfo : public __jni_impl::android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setName(jint arg0);
		void setName(jstring arg0);
		void setName(const QString &arg0);
		void setVolume(jint arg0);
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
		void setDescription(jstring arg0);
		void setDescription(const QString &arg0);
		void setStatus(jstring arg0);
		void setStatus(const QString &arg0);
		QAndroidJniObject getRemoteControlClient();
		void setRemoteControlClient(__jni_impl::android::media::RemoteControlClient arg0);
		void setVolumeCallback(__jni_impl::android::media::MediaRouter_VolumeCallback arg0);
		void setPlaybackType(jint arg0);
		void setVolumeHandling(jint arg0);
		void setVolumeMax(jint arg0);
		void setPlaybackStream(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "MediaRouter_RouteCategory.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "RemoteControlClient.hpp"
#include "MediaRouter_VolumeCallback.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaRouter_UserRouteInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$UserRouteInfo",
			"(V)V");
	}
	
	// Methods
	void MediaRouter_UserRouteInfo::setName(jint arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaRouter_UserRouteInfo::setVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setIconResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaRouter_UserRouteInfo::setStatus(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setStatus(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaRouter_UserRouteInfo::getRemoteControlClient()
	{
		return __thiz.callObjectMethod(
			"getRemoteControlClient",
			"()Landroid/media/RemoteControlClient;"
		);
	}
	void MediaRouter_UserRouteInfo::setRemoteControlClient(__jni_impl::android::media::RemoteControlClient arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteControlClient",
			"(Landroid/media/RemoteControlClient;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeCallback(__jni_impl::android::media::MediaRouter_VolumeCallback arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeCallback",
			"(Landroid/media/MediaRouter$VolumeCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackType",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeHandling(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeHandling",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setVolumeMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeMax",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_UserRouteInfo::setPlaybackStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackStream",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRouter_UserRouteInfo : public __jni_impl::android::media::MediaRouter_UserRouteInfo
	{
	public:
		MediaRouter_UserRouteInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouter_UserRouteInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAROUTER_USERROUTEINFO

