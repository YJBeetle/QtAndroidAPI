#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::rtt
{
	class RangingRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangingRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getDefaultRttBurstSize();
		static jint getMaxPeers();
		static jint getMaxRttBurstSize();
		static jint getMinRttBurstSize();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getRttBurstSize();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

