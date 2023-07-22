#pragma once

#include "../../../../../JObject.hpp"

class JLongArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::hotspot2::pps
{
	class HomeSp : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HomeSp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HomeSp(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		HomeSp();
		HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getFqdn() const;
		JString getFriendlyName() const;
		JLongArray getMatchAllOis() const;
		JLongArray getMatchAnyOis() const;
		JObject getOtherHomePartnersList() const;
		JLongArray getRoamingConsortiumOis() const;
		jint hashCode() const;
		void setFqdn(JString arg0) const;
		void setFriendlyName(JString arg0) const;
		void setMatchAllOis(JLongArray arg0) const;
		void setMatchAnyOis(JLongArray arg0) const;
		void setOtherHomePartnersList(JObject arg0) const;
		void setRoamingConsortiumOis(JLongArray arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2::pps

