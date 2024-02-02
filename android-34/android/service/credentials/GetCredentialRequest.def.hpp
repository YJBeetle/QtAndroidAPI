#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::credentials
{
	class CallingAppInfo;
}

namespace android::service::credentials
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
		GetCredentialRequest(android::service::credentials::CallingAppInfo arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		android::service::credentials::CallingAppInfo getCallingAppInfo() const;
		JObject getCredentialOptions() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

