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
	class CreateCredentialRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CreateCredentialRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CreateCredentialRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean alwaysSendAppInfoToProvider() const;
		jint describeContents() const;
		android::os::Bundle getCandidateQueryData() const;
		android::os::Bundle getCredentialData() const;
		JString getOrigin() const;
		JString getType() const;
		jboolean isSystemProviderRequired() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

