#include "../content/Context.hpp"
#include "./MediaController2.hpp"
#include "./MediaController2_ControllerCallback.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaController2_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaController2_Builder::MediaController2_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaController2_Builder::MediaController2_Builder(android::content::Context arg0, android::media::Session2Token arg1)
		: __JniBaseClass(
			"android.media.MediaController2$Builder",
			"(Landroid/content/Context;Landroid/media/Session2Token;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::media::MediaController2 MediaController2_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaController2;"
		);
	}
	android::media::MediaController2_Builder MediaController2_Builder::setConnectionHints(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setConnectionHints",
			"(Landroid/os/Bundle;)Landroid/media/MediaController2$Builder;",
			arg0.object()
		);
	}
	android::media::MediaController2_Builder MediaController2_Builder::setControllerCallback(__JniBaseClass arg0, android::media::MediaController2_ControllerCallback arg1)
	{
		return callObjectMethod(
			"setControllerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaController2$ControllerCallback;)Landroid/media/MediaController2$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

