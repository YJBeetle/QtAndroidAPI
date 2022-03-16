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
		Credential_SimCredential(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Credential_SimCredential();
		Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getEapType() const;
		JString getImsi() const;
		jint hashCode() const;
		void setEapType(jint arg0) const;
		void setImsi(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2::pps

