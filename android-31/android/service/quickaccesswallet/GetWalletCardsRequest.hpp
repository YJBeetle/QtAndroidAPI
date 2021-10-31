#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class GetWalletCardsRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetWalletCardsRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsRequest(QAndroidJniObject obj);
		
		// Constructors
		GetWalletCardsRequest(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jint getCardHeightPx();
		jint getCardWidthPx();
		jint getIconSizePx();
		jint getMaxCards();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet
