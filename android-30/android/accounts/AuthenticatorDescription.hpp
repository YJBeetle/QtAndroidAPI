#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

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
		jstring packageName();
		jint smallIconId();
		jstring type();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthenticatorDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticatorDescription(QAndroidJniObject obj);
		
		// Constructors
		AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		AuthenticatorDescription(jstring arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
		
		// Methods
		static android::accounts::AuthenticatorDescription newKey(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

