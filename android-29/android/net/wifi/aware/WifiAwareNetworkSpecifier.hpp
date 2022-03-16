#pragma once

#include "../../NetworkSpecifier.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiAwareNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareNetworkSpecifier(QAndroidJniObject obj) : android::net::NetworkSpecifier(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

