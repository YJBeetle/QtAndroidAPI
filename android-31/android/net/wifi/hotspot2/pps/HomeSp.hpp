#pragma once

#include "../../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class HomeSp : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit HomeSp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HomeSp(QJniObject obj);
		
		// Constructors
		HomeSp();
		HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getFqdn();
		jstring getFriendlyName();
		jlongArray getMatchAllOis();
		jlongArray getMatchAnyOis();
		JObject getOtherHomePartnersList();
		jlongArray getRoamingConsortiumOis();
		jint hashCode();
		void setFqdn(jstring arg0);
		void setFriendlyName(jstring arg0);
		void setMatchAllOis(jlongArray arg0);
		void setMatchAnyOis(jlongArray arg0);
		void setOtherHomePartnersList(JObject arg0);
		void setRoamingConsortiumOis(jlongArray arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

