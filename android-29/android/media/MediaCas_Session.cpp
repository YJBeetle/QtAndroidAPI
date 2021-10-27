#include "./MediaCas.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./MediaCas_Session.hpp"

namespace android::media
{
	// Fields
	
	MediaCas_Session::MediaCas_Session(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaCas_Session::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean MediaCas_Session::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void MediaCas_Session::processEcm(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"processEcm",
			"([B)V",
			arg0
		);
	}
	void MediaCas_Session::processEcm(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"processEcm",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas_Session::sendSessionEvent(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"sendSessionEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaCas_Session::setPrivateData(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0
		);
	}
} // namespace android::media

