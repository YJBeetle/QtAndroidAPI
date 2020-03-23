#pragma once

#ifndef ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP
#define ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP

#include "MediaRouter_RouteInfo.hpp"

namespace __jni_impl::android::media
{
	class MediaRouter_RouteCategory;
}
namespace __jni_impl::android::media
{
	class MediaRouter_RouteInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::media
{
	class MediaRouter_RouteGroup : public __jni_impl::android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void removeRoute(jint arg0);
		void removeRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0);
		void addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0);
		void addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1);
		jint getRouteCount();
		QAndroidJniObject getRouteAt(jint arg0);
		void setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "MediaRouter_RouteCategory.hpp"
#include "MediaRouter_RouteInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaRouter_RouteGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$RouteGroup",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaRouter_RouteGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void MediaRouter_RouteGroup::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0);
	}
	void MediaRouter_RouteGroup::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0);
	}
	void MediaRouter_RouteGroup::removeRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(I)V",
			arg0);
	}
	void MediaRouter_RouteGroup::removeRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object());
	}
	void MediaRouter_RouteGroup::addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object());
	}
	void MediaRouter_RouteGroup::addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint MediaRouter_RouteGroup::getRouteCount()
	{
		return __thiz.callMethod<jint>(
			"getRouteCount",
			"()I");
	}
	QAndroidJniObject MediaRouter_RouteGroup::getRouteAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0);
	}
	void MediaRouter_RouteGroup::setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void MediaRouter_RouteGroup::setIconResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRouter_RouteGroup : public __jni_impl::android::media::MediaRouter_RouteGroup
	{
	public:
		MediaRouter_RouteGroup(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouter_RouteGroup()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAROUTER_ROUTEGROUP

