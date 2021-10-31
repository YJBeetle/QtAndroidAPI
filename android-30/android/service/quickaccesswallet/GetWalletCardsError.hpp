#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::quickaccesswallet
{
	class GetWalletCardsError : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetWalletCardsError(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetWalletCardsError(QAndroidJniObject obj);
		
		// Constructors
		GetWalletCardsError(android::graphics::drawable::Icon arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		android::graphics::drawable::Icon getIcon();
		jstring getMessage();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

