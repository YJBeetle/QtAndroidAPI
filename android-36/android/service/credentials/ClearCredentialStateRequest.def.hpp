#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::service::credentials
{
	class CallingAppInfo;
}
class JString;

namespace android::service::credentials
{
	class ClearCredentialStateRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ClearCredentialStateRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClearCredentialStateRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ClearCredentialStateRequest(android::service::credentials::CallingAppInfo arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents() const;
		android::service::credentials::CallingAppInfo getCallingAppInfo() const;
		android::os::Bundle getData() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::credentials

