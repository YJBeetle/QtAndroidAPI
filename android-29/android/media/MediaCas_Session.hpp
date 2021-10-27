#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCas;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::media
{
	class MediaCas_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jboolean equals(jobject arg0);
		void processEcm(jbyteArray arg0);
		void processEcm(jbyteArray arg0, jint arg1, jint arg2);
		void sendSessionEvent(jint arg0, jint arg1, jbyteArray arg2);
		void setPrivateData(jbyteArray arg0);
	};
} // namespace __jni_impl::android::media

#include "MediaCas.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCas_Session::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCas$Session",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCas_Session : public __jni_impl::android::media::MediaCas_Session
	{
	public:
		MediaCas_Session(QAndroidJniObject obj) { __thiz = obj; }
		MediaCas_Session()
		{
			__constructor();
		}
	};
} // namespace android::media

