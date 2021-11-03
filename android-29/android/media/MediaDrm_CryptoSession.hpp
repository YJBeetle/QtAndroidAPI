#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::media
{
	class MediaDrm;
}
class JString;

namespace android::media
{
	class MediaDrm_CryptoSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_CryptoSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_CryptoSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray decrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2);
		JByteArray encrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2);
		JByteArray sign(JByteArray arg0, JByteArray arg1);
		jboolean verify(JByteArray arg0, JByteArray arg1, JByteArray arg2);
	};
} // namespace android::media

