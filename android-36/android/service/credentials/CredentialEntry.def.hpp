#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class Slice;
}
namespace android::os
{
	class Parcel;
}
namespace android::service::credentials
{
	class BeginGetCredentialOption;
}
class JString;

namespace android::service::credentials
{
	class CredentialEntry : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialEntry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CredentialEntry(android::service::credentials::BeginGetCredentialOption arg0, android::app::slice::Slice arg1);
		CredentialEntry(JString arg0, android::app::slice::Slice arg1);
		CredentialEntry(JString arg0, JString arg1, android::app::slice::Slice arg2);
		
		// Methods
		jint describeContents() const;
		JString getBeginGetCredentialOptionId() const;
		android::app::slice::Slice getSlice() const;
		JString getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

