#include "./MediaDrm.hpp"
#include "./MediaDrm_CryptoSession.hpp"

namespace android::media
{
	// Fields
	
	MediaDrm_CryptoSession::MediaDrm_CryptoSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::media

