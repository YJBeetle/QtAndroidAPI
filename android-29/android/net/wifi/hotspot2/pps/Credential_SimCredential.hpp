#pragma once

#include "../../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Credential_SimCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential_SimCredential(QAndroidJniObject obj);
		
		// Constructors
		Credential_SimCredential();
		Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getEapType();
		JString getImsi();
		jint hashCode();
		void setEapType(jint arg0);
		void setImsi(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

