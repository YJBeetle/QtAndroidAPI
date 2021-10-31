#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./MediaBrowser_ConnectionCallback.hpp"
#include "./MediaBrowser_ItemCallback.hpp"
#include "./MediaBrowser_SubscriptionCallback.hpp"
#include "../session/MediaSession_Token.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaBrowser.hpp"

namespace android::media::browse
{
	// Fields
	jstring MediaBrowser::EXTRA_PAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowser::EXTRA_PAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaBrowser::MediaBrowser(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaBrowser::MediaBrowser(android::content::Context arg0, android::content::ComponentName arg1, android::media::browse::MediaBrowser_ConnectionCallback arg2, android::os::Bundle arg3)
		: __JniBaseClass(
			"android.media.browse.MediaBrowser",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/media/browse/MediaBrowser$ConnectionCallback;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	void MediaBrowser::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	void MediaBrowser::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	android::os::Bundle MediaBrowser::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void MediaBrowser::getItem(jstring arg0, android::media::browse::MediaBrowser_ItemCallback arg1)
	{
		callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			arg0,
			arg1.object()
		);
	}
	jstring MediaBrowser::getRoot()
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::ComponentName MediaBrowser::getServiceComponent()
	{
		return callObjectMethod(
			"getServiceComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::media::session::MediaSession_Token MediaBrowser::getSessionToken()
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	jboolean MediaBrowser::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void MediaBrowser::subscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaBrowser::subscribe(jstring arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2)
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void MediaBrowser::unsubscribe(jstring arg0)
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowser::unsubscribe(jstring arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1)
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::browse

