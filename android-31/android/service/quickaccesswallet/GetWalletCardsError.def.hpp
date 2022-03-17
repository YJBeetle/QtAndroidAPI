#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::quickaccesswallet
{
	class GetWalletCardsError : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetWalletCardsError(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsError(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetWalletCardsError(android::graphics::drawable::Icon arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getMessage() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::quickaccesswallet

