#include "../../JByteArray.hpp"
#include "./MediaCas.hpp"
#include "../../JObject.hpp"
#include "./MediaCas_Session.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCas_Session::MediaCas_Session(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaCas_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean MediaCas_Session::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray MediaCas_Session::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()[B"
		);
	}
	void MediaCas_Session::processEcm(JByteArray arg0) const
	{
		callMethod<void>(
			"processEcm",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaCas_Session::processEcm(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"processEcm",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void MediaCas_Session::sendSessionEvent(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"sendSessionEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	void MediaCas_Session::setPrivateData(JByteArray arg0) const
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

