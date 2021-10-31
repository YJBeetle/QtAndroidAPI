#include "./MediaRoute2Info.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./MediaRoute2Info_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(android::media::MediaRoute2Info arg0)
		: __JniBaseClass(
			"android.media.MediaRoute2Info$Builder",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		) {}
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.media.MediaRoute2Info$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeature(jstring arg0)
	{
		return callObjectMethod(
			"addFeature",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeatures(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addFeatures",
			"(Ljava/util/Collection;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info MediaRoute2Info_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaRoute2Info;"
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::clearFeatures()
	{
		return callObjectMethod(
			"clearFeatures",
			"()Landroid/media/MediaRoute2Info$Builder;"
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setClientPackageName(jstring arg0)
	{
		return callObjectMethod(
			"setClientPackageName",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setConnectionState(jint arg0)
	{
		return callObjectMethod(
			"setConnectionState",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setIconUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolume(jint arg0)
	{
		return callObjectMethod(
			"setVolume",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeHandling(jint arg0)
	{
		return callObjectMethod(
			"setVolumeHandling",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeMax(jint arg0)
	{
		return callObjectMethod(
			"setVolumeMax",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
} // namespace android::media

