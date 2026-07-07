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
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectWalletCardRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectWalletCardRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SelectWalletCardRequest(JString arg0);
		
		// Methods
		jint describeContents() const;
		JString getCardId() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

