#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::accounts
{
	class AuthenticatorDescription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint accountPreferencesId();
		jboolean customTokens();
		jint iconId();
		jint labelId();
		JString packageName();
		jint smallIconId();
		JString type();
		
		// QJniObject forward
		template<typename ...Ts> explicit AuthenticatorDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticatorDescription(QJniObject obj);
		
		// Constructors
		AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		AuthenticatorDescription(JString arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
		
		// Methods
		static android::accounts::AuthenticatorDescription newKey(JString arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

