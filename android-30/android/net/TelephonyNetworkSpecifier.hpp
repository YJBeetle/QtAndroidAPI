#pragma once

#include "../../__JniBaseClass.hpp"
#include "./NetworkSpecifier.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class TelephonyNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyNetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getSubscriptionId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

