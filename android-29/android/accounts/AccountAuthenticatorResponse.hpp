#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::accounts
{
	class AccountAuthenticatorResponse : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AccountAuthenticatorResponse(QAndroidJniObject obj);
		// Constructors
		AccountAuthenticatorResponse(android::os::Parcel arg0);
		AccountAuthenticatorResponse() = default;
		
		// Methods
		jint describeContents();
		void onError(jint arg0, jstring arg1);
		void onRequestContinued();
		void onResult(android::os::Bundle arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accounts

