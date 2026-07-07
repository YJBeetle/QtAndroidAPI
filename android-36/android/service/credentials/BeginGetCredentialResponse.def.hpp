#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::credentials
{
	class RemoteEntry;
}

namespace android::service::credentials
{
	class BeginGetCredentialResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginGetCredentialResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginGetCredentialResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginGetCredentialResponse();
		
		// Methods
		jint describeContents() const;
		JObject getActions() const;
		JObject getAuthenticationActions() const;
		JObject getCredentialEntries() const;
		android::service::credentials::RemoteEntry getRemoteCredentialEntry() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

