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
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telephony::data::ApnSetting getApnSetting();
		jint getLastCauseCode();
		android::net::LinkProperties getLinkProperties();
		jint getNetworkType();
		jint getState();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

