#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::nsd
{
	class DiscoveryRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscoveryRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoveryRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Network getNetwork() const;
		JString getServiceType() const;
		JString getSubtype() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::nsd

