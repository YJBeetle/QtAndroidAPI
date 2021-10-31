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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_CryptoSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_CryptoSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray decrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray encrypt(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
		jbyteArray sign(jbyteArray arg0, jbyteArray arg1);
		jboolean verify(jbyteArray arg0, jbyteArray arg1, jbyteArray arg2);
	};
} // namespace android::media

