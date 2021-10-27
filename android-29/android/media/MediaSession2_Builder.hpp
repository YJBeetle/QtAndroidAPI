#pragma once

#ifndef ANDROID_MEDIA_MEDIASESSION2_BUILDER
#define ANDROID_MEDIA_MEDIASESSION2_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class MediaSession2;
}
namespace __jni_impl::android::media
{
	class MediaSession2_SessionCallback;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaSession2_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setId(const QString &arg0);
		QAndroidJniObject setSessionActivity(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setSessionCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::MediaSession2_SessionCallback arg1);
	};
} // namespace __jni_impl::android::media

#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "MediaSession2.hpp"
#include "MediaSession2_SessionCallback.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSession2_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MediaSession2_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/MediaSession2;"
		);
	}
	QAndroidJniObject MediaSession2_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaSession2$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/media/MediaSession2$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaSession2_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/media/MediaSession2$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaSession2_Builder::setSessionActivity(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)Landroid/media/MediaSession2$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2_Builder::setSessionCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::MediaSession2_SessionCallback arg1)
	{
		return __thiz.callObjectMethod(
			"setSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaSession2$SessionCallback;)Landroid/media/MediaSession2$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2_Builder : public __jni_impl::android::media::MediaSession2_Builder
	{
	public:
		MediaSession2_Builder(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASESSION2_BUILDER

