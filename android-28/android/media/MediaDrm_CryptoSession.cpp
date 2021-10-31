#include "./MediaDrm.hpp"
#include "./MediaDrm_CryptoSession.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_CryptoSession::MediaDrm_CryptoSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_CryptoSession::decrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return callObjectMethod(
			"decrypt",
			"([B[B[B)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm_CryptoSession::encrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return callObjectMethod(
			"encrypt",
			"([B[B[B)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jbyteArray MediaDrm_CryptoSession::sign(jbyteArray arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"sign",
			"([B[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jboolean MediaDrm_CryptoSession::verify(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return callMethod<jboolean>(
			"verify",
			"([B[B[B)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::media

