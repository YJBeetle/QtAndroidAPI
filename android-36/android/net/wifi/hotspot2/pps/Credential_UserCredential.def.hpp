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
		
		// QJniObject forward
		template<typename ...Ts> explicit Credential_UserCredential(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Credential_UserCredential(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Credential_UserCredential();
		Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getEapType() const;
		JString getNonEapInnerMethod() const;
		JString getPassword() const;
		JString getUsername() const;
		jint hashCode() const;
		void setEapType(jint arg0) const;
		void setNonEapInnerMethod(JString arg0) const;
		void setPassword(JString arg0) const;
		void setUsername(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2::pps

