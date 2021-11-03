#include "./MediaCas_Session.hpp"
#include "../os/Handler.hpp"
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
	jarray MediaCas::enumeratePlugins()
	{
		return callStaticObjectMethod(
			"android.media.MediaCas",
			"enumeratePlugins",
			"()[Landroid/media/MediaCas$PluginDescriptor;"
		).object<jarray>();
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
	void MediaCas::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::MediaCas_Session MediaCas::openSession()
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	void MediaCas::processEmm(jbyteArray arg0)
	{
		callMethod<void>(
			"processEmm",
			"([B)V",
			arg0
		);
	}
	void MediaCas::processEmm(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"processEmm",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::provision(jstring arg0)
	{
		callMethod<void>(
			"provision",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaCas::refreshEntitlements(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"refreshEntitlements",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void MediaCas::sendEvent(jint arg0, jint arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"sendEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas::setEventListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/MediaCas$EventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaCas::setPrivateData(jbyteArray arg0)
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0
		);
	}
} // namespace android::media

