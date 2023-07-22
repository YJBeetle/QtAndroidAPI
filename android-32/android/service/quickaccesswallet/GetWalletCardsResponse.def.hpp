#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class GetWalletCardsResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetWalletCardsResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsResponse(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetWalletCardsResponse(JObject arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jint getSelectedIndex() const;
		JObject getWalletCards() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

