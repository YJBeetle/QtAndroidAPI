#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class RangingRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getDefaultRttBurstSize();
		static jint getMaxPeers();
		static jint getMaxRttBurstSize();
		static jint getMinRttBurstSize();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getRttBurstSize() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

