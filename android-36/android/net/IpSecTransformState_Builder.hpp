#pragma once

#include "../../JByteArray.hpp"
#include "./IpSecTransformState.def.hpp"
#include "./IpSecTransformState_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline IpSecTransformState_Builder::IpSecTransformState_Builder()
		: JObject(
			"android.net.IpSecTransformState$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::IpSecTransformState IpSecTransformState_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/IpSecTransformState;"
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setByteCount(jlong arg0) const
	{
		return callObjectMethod(
			"setByteCount",
			"(J)Landroid/net/IpSecTransformState$Builder;",
			arg0
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setPacketCount(jlong arg0) const
	{
		return callObjectMethod(
			"setPacketCount",
			"(J)Landroid/net/IpSecTransformState$Builder;",
			arg0
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setReplayBitmap(JByteArray arg0) const
	{
		return callObjectMethod(
			"setReplayBitmap",
			"([B)Landroid/net/IpSecTransformState$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setRxHighestSequenceNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setRxHighestSequenceNumber",
			"(J)Landroid/net/IpSecTransformState$Builder;",
			arg0
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setTimestampMillis",
			"(J)Landroid/net/IpSecTransformState$Builder;",
			arg0
		);
	}
	inline android::net::IpSecTransformState_Builder IpSecTransformState_Builder::setTxHighestSequenceNumber(jlong arg0) const
	{
		return callObjectMethod(
			"setTxHighestSequenceNumber",
			"(J)Landroid/net/IpSecTransformState$Builder;",
			arg0
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
