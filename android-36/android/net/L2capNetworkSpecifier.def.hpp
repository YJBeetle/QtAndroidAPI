#pragma once

#include "./NetworkSpecifier.def.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net
{
	class NetworkSpecifier;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class L2capNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HEADER_COMPRESSION_6LOWPAN();
		static jint HEADER_COMPRESSION_ANY();
		static jint HEADER_COMPRESSION_NONE();
		static jint PSM_ANY();
		static jint ROLE_ANY();
		static jint ROLE_CLIENT();
		static jint ROLE_SERVER();
		
		// QJniObject forward
		template<typename ...Ts> explicit L2capNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		L2capNetworkSpecifier(QJniObject obj) : android::net::NetworkSpecifier(obj) {}
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getHeaderCompression() const;
		jint getPsm() const;
		android::net::MacAddress getRemoteAddress() const;
		jint getRole() const;
		jint hashCode() const;
		android::net::NetworkSpecifier redact() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

