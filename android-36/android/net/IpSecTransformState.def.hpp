#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class IpSecTransformState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecTransformState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransformState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getByteCount() const;
		jlong getPacketCount() const;
		JByteArray getReplayBitmap() const;
		jlong getRxHighestSequenceNumber() const;
		jlong getTimestampMillis() const;
		jlong getTxHighestSequenceNumber() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

