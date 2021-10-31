#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class SelectWalletCardRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectWalletCardRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SelectWalletCardRequest(QJniObject obj);
		
		// Constructors
		SelectWalletCardRequest(jstring arg0);
		
		// Methods
		jint describeContents();
		jstring getCardId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

