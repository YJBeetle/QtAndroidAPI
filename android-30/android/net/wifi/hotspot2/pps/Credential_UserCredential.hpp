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
	class Credential_UserCredential : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Credential_UserCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential_UserCredential(QAndroidJniObject obj);
		
		// Constructors
		Credential_UserCredential();
		Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getEapType();
		JString getNonEapInnerMethod();
		JString getPassword();
		JString getUsername();
		jint hashCode();
		void setEapType(jint arg0);
		void setNonEapInnerMethod(JString arg0);
		void setPassword(JString arg0);
		void setUsername(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

