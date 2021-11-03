#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./MediaBrowser_ConnectionCallback.hpp"
#include "./MediaBrowser_ItemCallback.hpp"
#include "./MediaBrowser_SubscriptionCallback.hpp"
#include "../session/MediaSession_Token.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser.hpp"

namespace android::media::browse
{
	// Fields
	JString MediaBrowser::EXTRA_PAGE()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE",
			"Ljava/lang/String;"
		);
	}
	JString MediaBrowser::EXTRA_PAGE_SIZE()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE_SIZE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaBrowser::MediaBrowser(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser::MediaBrowser(android::content::Context arg0, android::content::ComponentName arg1, android::media::browse::MediaBrowser_ConnectionCallback arg2, android::os::Bundle arg3)
		: JObject(
			"android.media.browse.MediaBrowser",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/media/browse/MediaBrowser$ConnectionCallback;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	void MediaBrowser::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaBrowser::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	android::os::Bundle MediaBrowser::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void MediaBrowser::getItem(JString arg0, android::media::browse::MediaBrowser_ItemCallback arg1) const
	{
		callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString MediaBrowser::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/lang/String;"
		);
	}
	android::content::ComponentName MediaBrowser::getServiceComponent() const
	{
		return callObjectMethod(
			"getServiceComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::media::session::MediaSession_Token MediaBrowser::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	jboolean MediaBrowser::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaBrowser::subscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaBrowser::subscribe(JString arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2) const
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaBrowser::unsubscribe(JString arg0) const
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaBrowser::unsubscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::browse

