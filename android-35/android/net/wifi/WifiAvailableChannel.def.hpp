#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class WifiAvailableChannel : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint OP_MODE_SAP();
		static jint OP_MODE_STA();
		static jint OP_MODE_TDLS();
		static jint OP_MODE_WIFI_AWARE();
		static jint OP_MODE_WIFI_DIRECT_CLI();
		static jint OP_MODE_WIFI_DIRECT_GO();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAvailableChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAvailableChannel(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiAvailableChannel(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getFrequencyMhz() const;
		jint getOperationalModes() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

