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

namespace android::accounts
{
	class AccountAuthenticatorResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccountAuthenticatorResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccountAuthenticatorResponse(QJniObject obj);
		
		// Constructors
		AccountAuthenticatorResponse(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		void onError(jint arg0, JString arg1) const;
		void onRequestContinued() const;
		void onResult(android::os::Bundle arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::accounts

