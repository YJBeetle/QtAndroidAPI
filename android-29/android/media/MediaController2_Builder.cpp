#include "../content/Context.hpp"
#include "./MediaController2.hpp"
#include "./MediaController2_ControllerCallback.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaController2_Builder.hpp"

namespace android::media
{
	// Fields
	
	MediaController2_Builder::MediaController2_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaController2_Builder::MediaController2_Builder(android::content::Context &arg0, android::media::Session2Token &arg1)
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
	QAndroidJniObject MediaController2_Builder::setConnectionHints(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setConnectionHints",
			"(Landroid/os/Bundle;)Landroid/media/MediaController2$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaController2_Builder::setControllerCallback(__JniBaseClass arg0, android::media::MediaController2_ControllerCallback arg1)
	{
		return __thiz.callObjectMethod(
			"setControllerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaController2$ControllerCallback;)Landroid/media/MediaController2$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media

