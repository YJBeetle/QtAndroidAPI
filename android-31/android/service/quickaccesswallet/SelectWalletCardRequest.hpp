#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::quickaccesswallet
{
	class SelectWalletCardRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectWalletCardRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectWalletCardRequest(QAndroidJniObject obj);
		
		// Constructors
		SelectWalletCardRequest(JString arg0);
		
		// Methods
		jint describeContents();
		JString getCardId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

