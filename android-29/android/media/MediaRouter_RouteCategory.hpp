#pragma once

#ifndef ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY
#define ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::media
{
	class MediaRouter_RouteCategory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName(__jni_impl::android::content::Context arg0);
		jstring getName();
		jstring toString();
		jboolean isGroupable();
		QAndroidJniObject getRoutes(__jni_impl::__JniBaseClass arg0);
		jint getSupportedTypes();
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaRouter_RouteCategory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$RouteCategory",
			"(V)V");
	}
	
	// Methods
	jstring MediaRouter_RouteCategory::getName(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring MediaRouter_RouteCategory::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaRouter_RouteCategory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MediaRouter_RouteCategory::isGroupable()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupable",
			"()Z"
		);
	}
	QAndroidJniObject MediaRouter_RouteCategory::getRoutes(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getRoutes",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint MediaRouter_RouteCategory::getSupportedTypes()
	{
		return __thiz.callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaRouter_RouteCategory : public __jni_impl::android::media::MediaRouter_RouteCategory
	{
	public:
		MediaRouter_RouteCategory(QAndroidJniObject obj) { __thiz = obj; }
		MediaRouter_RouteCategory()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAROUTER_ROUTECATEGORY

