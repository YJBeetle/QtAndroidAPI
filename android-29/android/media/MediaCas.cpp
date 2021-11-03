#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCas_Session.hpp"
#include "../os/Handler.hpp"
#include "../../JString.hpp"
#include "./MediaCas.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCas::MediaCas(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaCas::MediaCas(jint arg0)
		: JObject(
			"android.media.MediaCas",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JArray MediaCas::enumeratePlugins()
	{
		return callStaticObjectMethod(
			"android.media.MediaCas",
			"enumeratePlugins",
			"()[Landroid/media/MediaCas$PluginDescriptor;"
		);
	}
	jboolean MediaCas::isSystemIdSupported(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCas",
			"isSystemIdSupported",
			"(I)Z",
			arg0
		);
	}
	void MediaCas::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::MediaCas_Session MediaCas::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	void MediaCas::processEmm(JByteArray arg0) const
	{
		callMethod<void>(
			"processEmm",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaCas::processEmm(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"processEmm",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void MediaCas::provision(JString arg0) const
	{
		callMethod<void>(
			"provision",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaCas::refreshEntitlements(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"refreshEntitlements",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	void MediaCas::sendEvent(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"sendEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void MediaCas::setEventListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/MediaCas$EventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCas::setPrivateData(JByteArray arg0) const
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

