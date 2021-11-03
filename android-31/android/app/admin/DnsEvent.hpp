#pragma once

#include "./NetworkEvent.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class DnsEvent : public android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsEvent(const char *className, const char *sig, Ts...agv) : android::app::admin::NetworkEvent(className, sig, std::forward<Ts>(agv)...) {}
		DnsEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getHostname() const;
		JObject getInetAddresses() const;
		jint getTotalResolvedAddressCount() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

