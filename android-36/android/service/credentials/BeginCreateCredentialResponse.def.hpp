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
	class BeginCreateCredentialResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BeginCreateCredentialResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BeginCreateCredentialResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BeginCreateCredentialResponse();
		
		// Methods
		jint describeContents() const;
		JObject getCreateEntries() const;
		android::service::credentials::RemoteEntry getRemoteCreateEntry() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

