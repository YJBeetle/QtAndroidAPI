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
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkCapabilities arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		JIntArray getCapabilities();
		android::net::NetworkSpecifier getNetworkSpecifier();
		JIntArray getTransportTypes();
		jboolean hasCapability(jint arg0);
		jboolean hasTransport(jint arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

