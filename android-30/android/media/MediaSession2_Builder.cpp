#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./MediaSession2_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaSession2_Builder::MediaSession2_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession2_Builder::MediaSession2_Builder(android::content::Context arg0)
		: JObject(
			"android.media.MediaSession2$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::MediaSession2 MediaSession2_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaSession2;"
		);
	}
	android::media::MediaSession2_Builder MediaSession2_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaSession2$Builder;",
			arg0.object()
		);
	}
	android::media::MediaSession2_Builder MediaSession2_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/media/MediaSession2$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaSession2_Builder MediaSession2_Builder::setSessionActivity(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)Landroid/media/MediaSession2$Builder;",
			arg0.object()
		);
	}
	android::media::MediaSession2_Builder MediaSession2_Builder::setSessionCallback(JObject arg0, android::media::MediaSession2_SessionCallback arg1) const
	{
		return callObjectMethod(
			"setSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaSession2$SessionCallback;)Landroid/media/MediaSession2$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

