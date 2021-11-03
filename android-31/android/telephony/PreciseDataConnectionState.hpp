#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LinkProperties;
}
namespace android::os
{
	class Parcel;
}
namespace android::telephony::data
{
	class ApnSetting;
}
class JObject;
class JString;

namespace android::telephony
{
	class PreciseDataConnectionState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PreciseDataConnectionState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreciseDataConnectionState(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telephony::data::ApnSetting getApnSetting() const;
		jint getId() const;
		jint getLastCauseCode() const;
		android::net::LinkProperties getLinkProperties() const;
		jint getNetworkType() const;
		jint getState() const;
		jint getTransportType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

