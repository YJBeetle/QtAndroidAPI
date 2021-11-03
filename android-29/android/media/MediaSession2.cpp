#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSession2.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaSession2::MediaSession2(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaSession2::broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"broadcastSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession2::cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, JObject arg1) const
	{
		callMethod<void>(
			"cancelSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void MediaSession2::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject MediaSession2::getConnectedControllers() const
	{
		return callObjectMethod(
			"getConnectedControllers",
			"()Ljava/util/List;"
		);
	}
	JString MediaSession2::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::media::Session2Token MediaSession2::getToken() const
	{
		return callObjectMethod(
			"getToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaSession2::isPlaybackActive() const
	{
		return callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	JObject MediaSession2::sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaSession2::setPlaybackActive(jboolean arg0) const
	{
		callMethod<void>(
			"setPlaybackActive",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media

