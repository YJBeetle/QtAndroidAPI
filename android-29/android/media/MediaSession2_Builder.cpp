#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSession2_Builder::MediaSession2_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaSession2_Builder::MediaSession2_Builder(android::content::Context arg0)
		: __JniBaseClass(
			"android.media.MediaSession2$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject MediaSession2_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaSession2;"
		);
	}
	QAndroidJniObject MediaSession2_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaSession2$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject MediaSession2_Builder::setId(jstring arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/media/MediaSession2$Builder;",
			arg0
		);
	}
	QAndroidJniObject MediaSession2_Builder::setSessionActivity(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)Landroid/media/MediaSession2$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject MediaSession2_Builder::setSessionCallback(__JniBaseClass arg0, android::media::MediaSession2_SessionCallback arg1)
	{
		return callObjectMethod(
			"setSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaSession2$SessionCallback;)Landroid/media/MediaSession2$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

