#pragma once

#include "../graphics/drawable/Icon.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./PhoneAccount.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./PhoneAccount_Builder.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccount arg0)
		: JObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.object()
		) {}
	inline PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccountHandle arg0, JString arg1)
		: JObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::addSupportedUriScheme(JString arg0) const
	{
		return callObjectMethod(
			"addSupportedUriScheme",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telecom::PhoneAccount PhoneAccount_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/PhoneAccount;"
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setAddress(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setCapabilities(jint arg0) const
	{
		return callObjectMethod(
			"setCapabilities",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setHighlightColor(jint arg0) const
	{
		return callObjectMethod(
			"setHighlightColor",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setShortDescription(JString arg0) const
	{
		return callObjectMethod(
			"setShortDescription",
			"(Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setSubscriptionAddress(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setSubscriptionAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	inline android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setSupportedUriSchemes(JObject arg0) const
	{
		return callObjectMethod(
			"setSupportedUriSchemes",
			"(Ljava/util/List;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
