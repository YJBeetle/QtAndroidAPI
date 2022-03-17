#pragma once

#include "../../JByteArray.hpp"
#include "./MediaDrm.def.hpp"
#include "./MediaDrm_CryptoSession.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray MediaDrm_CryptoSession::decrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2) const
	{
		return callObjectMethod(
			"decrypt",
			"([B[B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	inline JByteArray MediaDrm_CryptoSession::encrypt(JByteArray arg0, JByteArray arg1, JByteArray arg2) const
	{
		return callObjectMethod(
			"encrypt",
			"([B[B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>(),
			arg2.object<jbyteArray>()
		);
	}
	inline JByteArray MediaDrm_CryptoSession::sign(JByteArray arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"sign",
			"([B[B)[B",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline jboolean MediaDrm_CryptoSession::verify(JByteArray arg0, JByteArray arg1, JByteArray arg2) const
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

// Base class headers

