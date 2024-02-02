#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class Credential;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::credentials
{
	class GetCredentialResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetCredentialResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetCredentialResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetCredentialResponse(android::credentials::Credential arg0);
		
		// Methods
		jint describeContents() const;
		android::credentials::Credential getCredential() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

