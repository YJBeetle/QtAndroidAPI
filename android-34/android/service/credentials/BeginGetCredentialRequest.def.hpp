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
	class BeginGetCredentialRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginGetCredentialRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginGetCredentialRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getBeginGetCredentialOptions() const;
		android::service::credentials::CallingAppInfo getCallingAppInfo() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

