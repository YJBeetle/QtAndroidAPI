#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class GetWalletCardsRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetWalletCardsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsRequest(QJniObject obj);
		
		// Constructors
		GetWalletCardsRequest(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		jint getCardHeightPx() const;
		jint getCardWidthPx() const;
		jint getIconSizePx() const;
		jint getMaxCards() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

