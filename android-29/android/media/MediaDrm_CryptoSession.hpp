#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaDrm;
}

namespace __jni_impl::android::media
{
	class MediaDrm_CryptoSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jbyteArray decrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray encrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray sign(jbyteArray arg0, jbyteArray arg1);
		jboolean verify(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
	};
} // namespace __jni_impl::android::media

#include "./MediaDrm.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaDrm_CryptoSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$CryptoSession",
			"(V)V");
	}
	
	// Methods
	jbyteArray MediaDrm_CryptoSession::decrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return __thiz.callObjectMethod(
			"decrypt",
			"([B[B[B)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm_CryptoSession::encrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return __thiz.callObjectMethod(
			"encrypt",
			"([B[B[B)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm_CryptoSession::sign(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"sign",
			"([B[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jboolean MediaDrm_CryptoSession::verify(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"([B[B[B)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_CryptoSession : public __jni_impl::android::media::MediaDrm_CryptoSession
	{
	public:
		MediaDrm_CryptoSession(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_CryptoSession()
		{
			__constructor();
		}
	};
} // namespace android::media

