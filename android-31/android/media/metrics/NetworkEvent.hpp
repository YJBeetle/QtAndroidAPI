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
		NetworkEvent(QAndroidJniObject obj) : android::media::metrics::Event(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getMetricsBundle() const;
		jint getNetworkType() const;
		jlong getTimeSinceCreatedMillis() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::metrics

