#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::credentials
{
	class CredentialOption : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString SUPPORTED_ELEMENT_KEYS();
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialOption(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialOption(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getAllowedProviders() const;
		android::os::Bundle getCandidateQueryData() const;
		android::os::Bundle getCredentialRetrievalData() const;
		JString getType() const;
		jboolean isSystemProviderRequired() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

