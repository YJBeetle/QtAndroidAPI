#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class CredentialDescription;
}
namespace android::os
{
	class Parcel;
}

namespace android::credentials
{
	class UnregisterCredentialDescriptionRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UnregisterCredentialDescriptionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnregisterCredentialDescriptionRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UnregisterCredentialDescriptionRequest(android::credentials::CredentialDescription arg0);
		UnregisterCredentialDescriptionRequest(JObject arg0);
		
		// Methods
		jint describeContents() const;
		JObject getCredentialDescriptions() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

