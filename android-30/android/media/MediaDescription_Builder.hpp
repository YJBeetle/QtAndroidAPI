#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "./MediaDescription.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaDescription_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaDescription_Builder::MediaDescription_Builder()
		: JObject(
			"android.media.MediaDescription$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::MediaDescription MediaDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaDescription;"
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setIconBitmap(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setIconBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setIconUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setMediaId(JString arg0) const
	{
		return callObjectMethod(
			"setMediaId",
			"(Ljava/lang/String;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setMediaUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setMediaUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaDescription_Builder MediaDescription_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::media

// Base class headers

