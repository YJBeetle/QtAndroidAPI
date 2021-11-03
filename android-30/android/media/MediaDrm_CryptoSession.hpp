#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::media
{
	class MediaDrm;
}

namespace android::media
{
	class MediaDrm_CryptoSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_CryptoSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_CryptoSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray decrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2) const;
		JByteArray encrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2) const;
		JByteArray sign(JByteArray arg0, JByteArray arg1) const;
		jboolean verify(JByteArray arg0, JByteArray arg1, JByteArray arg2) const;
	};
} // namespace android::media

