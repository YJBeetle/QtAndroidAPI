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
		
		WifiP2pServiceRequest(QAndroidJniObject obj);
		// Constructors
		WifiP2pServiceRequest() = default;
		
		// Methods
		static QAndroidJniObject newInstance(jint arg0);
		static QAndroidJniObject newInstance(jint arg0, jstring arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p::nsd

