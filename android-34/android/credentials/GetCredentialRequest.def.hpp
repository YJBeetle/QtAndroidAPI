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
	class GetCredentialRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetCredentialRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetCredentialRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean alwaysSendAppInfoToProvider() const;
		jint describeContents() const;
		JObject getCredentialOptions() const;
		android::os::Bundle getData() const;
		JString getOrigin() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::credentials

