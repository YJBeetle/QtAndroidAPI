#pragma once

#include "./Event.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::metrics
{
	class NetworkEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint NETWORK_TYPE_2G();
		static jint NETWORK_TYPE_3G();
		static jint NETWORK_TYPE_4G();
		static jint NETWORK_TYPE_5G_NSA();
		static jint NETWORK_TYPE_5G_SA();
		static jint NETWORK_TYPE_ETHERNET();
		static jint NETWORK_TYPE_OFFLINE();
		static jint NETWORK_TYPE_OTHER();
		static jint NETWORK_TYPE_UNKNOWN();
		static jint NETWORK_TYPE_WIFI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		NetworkEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::os::Bundle getMetricsBundle();
		jint getNetworkType();
		jlong getTimeSinceCreatedMillis();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

