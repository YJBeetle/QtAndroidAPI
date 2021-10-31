#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::accounts
{
	class AuthenticatorDescription : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jint accountPreferencesId();
		jboolean customTokens();
		jint iconId();
		jint labelId();
		jstring packageName();
		jint smallIconId();
		jstring type();
		
		// QJniObject forward
		template<typename ...Ts> explicit AuthenticatorDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticatorDescription(QJniObject obj);
		
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

