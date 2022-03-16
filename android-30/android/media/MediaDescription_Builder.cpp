#include "../graphics/Bitmap.hpp"
#include "./MediaDescription.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaDescription_Builder.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaDescription_Builder::MediaDescription_Builder()
		: JObject(
			"android.media.MediaDescription$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::MediaDescription MediaDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaDescription;"
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setIconBitmap(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setIconBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setIconUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setMediaId(JString arg0) const
	{
		return callObjectMethod(
			"setMediaId",
			"(Ljava/lang/String;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setMediaUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setMediaUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setSubtitle(JString arg0) const
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::media

