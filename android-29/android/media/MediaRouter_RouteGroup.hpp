#pragma once

#include "../../__JniBaseClass.hpp"
#include "MediaRouter_RouteInfo.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::media
{
	class MediaRouter_RouteCategory;
}
namespace __jni_impl::android::media
{
	class MediaRouter_RouteInfo;
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
		void addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0);
		void addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1);
		QAndroidJniObject getRouteAt(jint arg0);
		jint getRouteCount();
		void removeRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0);
		void removeRoute(jint arg0);
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::media

#include "../graphics/drawable/Drawable.hpp"
#include "MediaRouter_RouteCategory.hpp"
#include "MediaRouter_RouteInfo.hpp"

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
	void MediaRouter_RouteGroup::addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::addRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MediaRouter_RouteGroup::getRouteAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	jint MediaRouter_RouteGroup::getRouteCount()
	{
		return __thiz.callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	void MediaRouter_RouteGroup::removeRoute(__jni_impl::android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::removeRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::setIconDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::setIconResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	jstring MediaRouter_RouteGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

