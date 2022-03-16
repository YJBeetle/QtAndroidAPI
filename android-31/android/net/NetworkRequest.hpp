#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::net
{
	class NetworkCapabilities;
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
	class NetworkRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkCapabilities arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JIntArray getCapabilities() const;
		android::net::NetworkSpecifier getNetworkSpecifier() const;
		JIntArray getTransportTypes() const;
		jboolean hasCapability(jint arg0) const;
		jboolean hasTransport(jint arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

