#include "../graphics/Bitmap.hpp"
#include "./MediaDescription.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./MediaDescription_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDescription_Builder::MediaDescription_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaDescription_Builder::MediaDescription_Builder()
		: __JniBaseClass(
			"android.media.MediaDescription$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::MediaDescription MediaDescription_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaDescription;"
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setIconBitmap(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"setIconBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setIconUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setMediaId(jstring arg0)
	{
		return callObjectMethod(
			"setMediaId",
			"(Ljava/lang/String;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setMediaUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setMediaUri",
			"(Landroid/net/Uri;)Landroid/media/MediaDescription$Builder;",
			arg0.object()
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setSubtitle(jstring arg0)
	{
		return callObjectMethod(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
	android::media::MediaDescription_Builder MediaDescription_Builder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaDescription$Builder;",
			arg0
		);
	}
} // namespace android::media

