#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaDrm;
}

namespace android::media
{
	class MediaDrm_CryptoSession : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaDrm_CryptoSession(QAndroidJniObject obj);
		// Constructors
		MediaDrm_CryptoSession() = default;
		
		// Methods
		jbyteArray decrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray encrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray sign(jbyteArray arg0, jbyteArray arg1);
		jboolean verify(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
	};
} // namespace android::media

