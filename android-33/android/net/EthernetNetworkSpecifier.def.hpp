#pragma once

#include "./NetworkSpecifier.def.hpp"

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
	class EthernetNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EthernetNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		EthernetNetworkSpecifier(QAndroidJniObject obj) : android::net::NetworkSpecifier(obj) {}
		
		// Constructors
		EthernetNetworkSpecifier(JString arg0);
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getInterfaceName() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

