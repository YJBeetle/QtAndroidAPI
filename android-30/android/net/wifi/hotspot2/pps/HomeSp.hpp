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
		HomeSp(QAndroidJniObject obj);
		
		// Constructors
		HomeSp();
		HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getFqdn();
		JString getFriendlyName();
		JLongArray getRoamingConsortiumOis();
		jint hashCode();
		void setFqdn(JString arg0);
		void setFriendlyName(JString arg0);
		void setRoamingConsortiumOis(JLongArray arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

