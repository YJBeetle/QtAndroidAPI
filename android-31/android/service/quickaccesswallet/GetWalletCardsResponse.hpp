#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class GetWalletCardsResponse : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetWalletCardsResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsResponse(QJniObject obj);
		
		// Constructors
		GetWalletCardsResponse(__JniBaseClass arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jint getSelectedIndex();
		__JniBaseClass getWalletCards();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

