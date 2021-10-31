#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::net
{
	class NetworkRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkCapabilities arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jintArray getCapabilities();
		android::net::NetworkSpecifier getNetworkSpecifier();
		jintArray getTransportTypes();
		jboolean hasCapability(jint arg0);
		jboolean hasTransport(jint arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

