#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class NetworkCapabilities;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::time
{
	class Duration;
}

namespace android::adservices::ondevicepersonalization
{
	class UserData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getAppInfos() const;
		jlong getAvailableStorageBytes() const;
		jint getBatteryPercentage() const;
		JString getCarrier() const;
		jint getDataNetworkType() const;
		android::net::NetworkCapabilities getNetworkCapabilities() const;
		jint getOrientation() const;
		java::time::Duration getTimezoneUtcOffset() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::ondevicepersonalization

