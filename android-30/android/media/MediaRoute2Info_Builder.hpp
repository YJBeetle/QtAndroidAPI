#pragma once

#include "./MediaRoute2Info.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2Info_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRoute2Info_Builder::MediaRoute2Info_Builder(android::media::MediaRoute2Info arg0)
		: JObject(
			"android.media.MediaRoute2Info$Builder",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		) {}
	inline MediaRoute2Info_Builder::MediaRoute2Info_Builder(JString arg0, JString arg1)
		: JObject(
			"android.media.MediaRoute2Info$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeature(JString arg0) const
	{
		return callObjectMethod(
			"addFeature",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeatures(JObject arg0) const
	{
		return callObjectMethod(
			"addFeatures",
			"(Ljava/util/Collection;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaRoute2Info MediaRoute2Info_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaRoute2Info;"
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::clearFeatures() const
	{
		return callObjectMethod(
			"clearFeatures",
			"()Landroid/media/MediaRoute2Info$Builder;"
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setClientPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setClientPackageName",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setConnectionState(jint arg0) const
	{
		return callObjectMethod(
			"setConnectionState",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setIconUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolume(jint arg0) const
	{
		return callObjectMethod(
			"setVolume",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeHandling(jint arg0) const
	{
		return callObjectMethod(
			"setVolumeHandling",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	inline android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeMax(jint arg0) const
	{
		return callObjectMethod(
			"setVolumeMax",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
