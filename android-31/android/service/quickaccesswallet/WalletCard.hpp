#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
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
	class WalletCard : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WalletCard(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WalletCard(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::graphics::drawable::Icon getCardIcon();
		jstring getCardId();
		android::graphics::drawable::Icon getCardImage();
		jstring getCardLabel();
		jstring getContentDescription();
		android::app::PendingIntent getPendingIntent();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::quickaccesswallet

