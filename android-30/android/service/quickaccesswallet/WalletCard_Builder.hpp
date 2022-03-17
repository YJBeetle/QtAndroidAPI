#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../graphics/drawable/Icon.def.hpp"
#include "./WalletCard.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./WalletCard_Builder.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	
	// Constructors
	inline WalletCard_Builder::WalletCard_Builder(JString arg0, android::graphics::drawable::Icon arg1, JString arg2, android::app::PendingIntent arg3)
		: JObject(
			"android.service.quickaccesswallet.WalletCard$Builder",
			"(Ljava/lang/String;Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline android::service::quickaccesswallet::WalletCard WalletCard_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/quickaccesswallet/WalletCard;"
		);
	}
	inline android::service::quickaccesswallet::WalletCard_Builder WalletCard_Builder::setCardIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setCardIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/quickaccesswallet/WalletCard$Builder;",
			arg0.object()
		);
	}
	inline android::service::quickaccesswallet::WalletCard_Builder WalletCard_Builder::setCardLabel(JString arg0) const
	{
		return callObjectMethod(
			"setCardLabel",
			"(Ljava/lang/CharSequence;)Landroid/service/quickaccesswallet/WalletCard$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::service::quickaccesswallet

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::quickaccesswallet;
#endif
