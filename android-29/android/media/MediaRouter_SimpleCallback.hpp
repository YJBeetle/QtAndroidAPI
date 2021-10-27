#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MediaRouter_Callback.hpp"

namespace __jni_impl::android::media
{
	class MediaRouter;
}
namespace __jni_impl::android::media
{
	class MediaRouter_RouteGroup;
}
namespace __jni_impl::android::media
{
	class MediaRouter_RouteInfo;
}

namespace __jni_impl::android::media
{
	class MediaRouter_SimpleCallback : public __jni_impl::android::media::MediaRouter_Callback
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onRouteAdded(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1);
		void onRouteChanged(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1);
		void onRouteGrouped(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1, __jni_impl::android::media::MediaRouter_RouteGroup arg2, jint arg3);
		void onRouteRemoved(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1);
		void onRouteSelected(__jni_impl::android::media::MediaRouter arg0, jint arg1, __jni_impl::android::media::MediaRouter_RouteInfo arg2);
		void onRouteUngrouped(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1, __jni_impl::android::media::MediaRouter_RouteGroup arg2);
		void onRouteUnselected(__jni_impl::android::media::MediaRouter arg0, jint arg1, __jni_impl::android::media::MediaRouter_RouteInfo arg2);
		void onRouteVolumeChanged(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1);
	};
} // namespace __jni_impl::android::media

#include "./MediaRouter.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "./MediaRouter_RouteInfo.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaRouter_SimpleCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$SimpleCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaRouter_SimpleCallback::onRouteAdded(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteAdded",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteChanged(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteGrouped(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1, __jni_impl::android::media::MediaRouter_RouteGroup arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onRouteGrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void MediaRouter_SimpleCallback::onRouteRemoved(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteRemoved",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteSelected(__jni_impl::android::media::MediaRouter arg0, jint arg1, __jni_impl::android::media::MediaRouter_RouteInfo arg2)
	{
		__thiz.callMethod<void>(
			"onRouteSelected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUngrouped(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1, __jni_impl::android::media::MediaRouter_RouteGroup arg2)
	{
		__thiz.callMethod<void>(
			"onRouteUngrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUnselected(__jni_impl::android::media::MediaRouter arg0, jint arg1, __jni_impl::android::media::MediaRouter_RouteInfo arg2)
	{
		__thiz.callMethod<void>(
			"onRouteUnselected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteVolumeChanged(__jni_impl::android::media::MediaRouter arg0, __jni_impl::android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteVolumeChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRouter_SimpleCallback : public __jni_impl::android::media::MediaRouter_SimpleCallback
	{
	public:
		MediaRouter_SimpleCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouter_SimpleCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

