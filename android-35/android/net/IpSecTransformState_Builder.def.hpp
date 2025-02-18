#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class IpSecTransformState;
}

namespace android::net
{
	class IpSecTransformState_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecTransformState_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransformState_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IpSecTransformState_Builder();
		
		// Methods
		android::net::IpSecTransformState build() const;
		android::net::IpSecTransformState_Builder setByteCount(jlong arg0) const;
		android::net::IpSecTransformState_Builder setPacketCount(jlong arg0) const;
		android::net::IpSecTransformState_Builder setReplayBitmap(JByteArray arg0) const;
		android::net::IpSecTransformState_Builder setRxHighestSequenceNumber(jlong arg0) const;
		android::net::IpSecTransformState_Builder setTimestampMillis(jlong arg0) const;
		android::net::IpSecTransformState_Builder setTxHighestSequenceNumber(jlong arg0) const;
	};
} // namespace android::net

