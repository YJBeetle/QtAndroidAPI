#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class MediaController2;
}
namespace __jni_impl::android::media
{
	class MediaController2_ControllerCallback;
}
namespace __jni_impl::android::media
{
	class Session2Token;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaController2_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::media::Session2Token arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setConnectionHints(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setControllerCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::MediaController2_ControllerCallback arg1);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "./MediaController2.hpp"
#include "./MediaController2_ControllerCallback.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaController2_Builder::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::media::Session2Token arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaController2$Builder",
			"(Landroid/content/Context;Landroid/media/Session2Token;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MediaController2_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/MediaController2;"
		);
	}
	QAndroidJniObject MediaController2_Builder::setConnectionHints(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectionHints",
			"(Landroid/os/Bundle;)Landroid/media/MediaController2$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaController2_Builder::setControllerCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::media::MediaController2_ControllerCallback arg1)
	{
		return __thiz.callObjectMethod(
			"setControllerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaController2$ControllerCallback;)Landroid/media/MediaController2$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaController2_Builder : public __jni_impl::android::media::MediaController2_Builder
	{
	public:
		MediaController2_Builder(QAndroidJniObject obj) { __thiz = obj; }
		MediaController2_Builder(__jni_impl::android::content::Context arg0, __jni_impl::android::media::Session2Token arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

