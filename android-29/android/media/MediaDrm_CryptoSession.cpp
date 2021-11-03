#include "../../JByteArray.hpp"
#include "./MediaDrm.hpp"
#include "../../JString.hpp"
#include "./MediaDrm_CryptoSession.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_CryptoSession::MediaDrm_CryptoSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray MediaDrm_CryptoSession::decrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2)
	{
		return callObjectMethod(
			"decrypt",
			"([B[B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	JByteArray MediaDrm_CryptoSession::encrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2)
	{
		return callObjectMethod(
			"encrypt",
			"([B[B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	JByteArray MediaDrm_CryptoSession::sign(JByteArray arg0, JByteArray arg1)
	{
		return callObjectMethod(
			"sign",
			"([B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean MediaDrm_CryptoSession::verify(JByteArray arg0, JByteArray arg1, JByteArray arg2)
	{
		return callMethod<jboolean>(
			"verify",
			"([B[B[B)Z",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::media

