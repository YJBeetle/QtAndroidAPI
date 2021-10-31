#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pServiceRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pServiceRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pServiceRequest newInstance(jint arg0);
		static android::net::wifi::p2p::nsd::WifiP2pServiceRequest newInstance(jint arg0, jstring arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p::nsd

