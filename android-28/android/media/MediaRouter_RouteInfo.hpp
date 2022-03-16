#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "./MediaRouter_RouteCategory.def.hpp"
#include "./MediaRouter_RouteGroup.def.hpp"
#include "../view/Display.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_RouteInfo.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRouter_RouteInfo::DEVICE_TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_BLUETOOTH"
		);
	}
	inline jint MediaRouter_RouteInfo::DEVICE_TYPE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_SPEAKER"
		);
	}
	inline jint MediaRouter_RouteInfo::DEVICE_TYPE_TV()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_TV"
		);
	}
	inline jint MediaRouter_RouteInfo::DEVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	inline jint MediaRouter_RouteInfo::PLAYBACK_TYPE_LOCAL()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	inline jint MediaRouter_RouteInfo::PLAYBACK_TYPE_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	inline jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_FIXED()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	inline jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_VARIABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::MediaRouter_RouteCategory MediaRouter_RouteInfo::getCategory() const
	{
		return callObjectMethod(
			"getCategory",
			"()Landroid/media/MediaRouter$RouteCategory;"
		);
	}
	inline JString MediaRouter_RouteInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint MediaRouter_RouteInfo::getDeviceType() const
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	inline android::media::MediaRouter_RouteGroup MediaRouter_RouteInfo::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Landroid/media/MediaRouter$RouteGroup;"
		);
	}
	inline android::graphics::drawable::Drawable MediaRouter_RouteInfo::getIconDrawable() const
	{
		return callObjectMethod(
			"getIconDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString MediaRouter_RouteInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString MediaRouter_RouteInfo::getName(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline jint MediaRouter_RouteInfo::getPlaybackStream() const
	{
		return callMethod<jint>(
			"getPlaybackStream",
			"()I"
		);
	}
	inline jint MediaRouter_RouteInfo::getPlaybackType() const
	{
		return callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	inline android::view::Display MediaRouter_RouteInfo::getPresentationDisplay() const
	{
		return callObjectMethod(
			"getPresentationDisplay",
			"()Landroid/view/Display;"
		);
	}
	inline JString MediaRouter_RouteInfo::getStatus() const
	{
		return callObjectMethod(
			"getStatus",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint MediaRouter_RouteInfo::getSupportedTypes() const
	{
		return callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	inline JObject MediaRouter_RouteInfo::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	inline jint MediaRouter_RouteInfo::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	inline jint MediaRouter_RouteInfo::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	inline jint MediaRouter_RouteInfo::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	inline jboolean MediaRouter_RouteInfo::isConnecting() const
	{
		return callMethod<jboolean>(
			"isConnecting",
			"()Z"
		);
	}
	inline jboolean MediaRouter_RouteInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void MediaRouter_RouteInfo::requestSetVolume(jint arg0) const
	{
		callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouter_RouteInfo::requestUpdateVolume(jint arg0) const
	{
		callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouter_RouteInfo::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline JString MediaRouter_RouteInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

