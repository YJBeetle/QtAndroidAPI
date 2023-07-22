#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class WalletServiceEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_NFC_PAYMENT_STARTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WalletServiceEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WalletServiceEvent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WalletServiceEvent(jint arg0);
		
		// Methods
		jint describeContents() const;
		jint getEventType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

