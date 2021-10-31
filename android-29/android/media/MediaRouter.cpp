#include "../content/Context.hpp"
#include "./MediaRouter_Callback.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_UserRouteInfo.hpp"
#include "./MediaRouter.hpp"

namespace android::media
{
	// Fields
	jint MediaRouter::CALLBACK_FLAG_PERFORM_ACTIVE_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_PERFORM_ACTIVE_SCAN"
		);
	}
	jint MediaRouter::CALLBACK_FLAG_UNFILTERED_EVENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_UNFILTERED_EVENTS"
		);
	}
	jint MediaRouter::ROUTE_TYPE_LIVE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_AUDIO"
		);
	}
	jint MediaRouter::ROUTE_TYPE_LIVE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_VIDEO"
		);
	}
	jint MediaRouter::ROUTE_TYPE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_USER"
		);
	}
	
	MediaRouter::MediaRouter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1)
	{
		__thiz.callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void MediaRouter::addUserRoute(android::media::MediaRouter_UserRouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"addUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter::clearUserRoutes()
	{
		__thiz.callMethod<void>(
			"clearUserRoutes",
			"()V"
		);
	}
	QAndroidJniObject MediaRouter::createRouteCategory(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"createRouteCategory",
			"(IZ)Landroid/media/MediaRouter$RouteCategory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaRouter::createRouteCategory(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"createRouteCategory",
			"(Ljava/lang/CharSequence;Z)Landroid/media/MediaRouter$RouteCategory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaRouter::createUserRoute(android::media::MediaRouter_RouteCategory arg0)
	{
		return __thiz.callObjectMethod(
			"createUserRoute",
			"(Landroid/media/MediaRouter$RouteCategory;)Landroid/media/MediaRouter$UserRouteInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaRouter::getCategoryAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getCategoryAt",
			"(I)Landroid/media/MediaRouter$RouteCategory;",
			arg0
		);
	}
	jint MediaRouter::getCategoryCount()
	{
		return __thiz.callMethod<jint>(
			"getCategoryCount",
			"()I"
		);
	}
	QAndroidJniObject MediaRouter::getDefaultRoute()
	{
		return __thiz.callObjectMethod(
			"getDefaultRoute",
			"()Landroid/media/MediaRouter$RouteInfo;"
		);
	}
	QAndroidJniObject MediaRouter::getRouteAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	jint MediaRouter::getRouteCount()
	{
		return __thiz.callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	QAndroidJniObject MediaRouter::getSelectedRoute(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedRoute",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	void MediaRouter::removeCallback(android::media::MediaRouter_Callback arg0)
	{
		__thiz.callMethod<void>(
			"removeCallback",
			"(Landroid/media/MediaRouter$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter::removeUserRoute(android::media::MediaRouter_UserRouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"removeUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter::selectRoute(jint arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"selectRoute",
			"(ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::media

