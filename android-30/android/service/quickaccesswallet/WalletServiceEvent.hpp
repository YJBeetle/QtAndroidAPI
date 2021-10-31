#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class WalletServiceEvent : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_NFC_PAYMENT_STARTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WalletServiceEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WalletServiceEvent(QJniObject obj);
		
		// Constructors
		WalletServiceEvent(jint arg0);
		
		// Methods
		jint describeContents();
		jint getEventType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

