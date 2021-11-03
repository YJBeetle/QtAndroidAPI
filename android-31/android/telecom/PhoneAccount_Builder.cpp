#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./PhoneAccount.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./PhoneAccount_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	PhoneAccount_Builder::PhoneAccount_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccount arg0)
		: JObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.object()
		) {}
	PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccountHandle arg0, jstring arg1)
		: JObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::addSupportedUriScheme(jstring arg0)
	{
		return callObjectMethod(
			"addSupportedUriScheme",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	android::telecom::PhoneAccount PhoneAccount_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/PhoneAccount;"
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setAddress(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setCapabilities(jint arg0)
	{
		return callObjectMethod(
			"setCapabilities",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setHighlightColor(jint arg0)
	{
		return callObjectMethod(
			"setHighlightColor",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setShortDescription(jstring arg0)
	{
		return callObjectMethod(
			"setShortDescription",
			"(Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setSubscriptionAddress(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setSubscriptionAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
	android::telecom::PhoneAccount_Builder PhoneAccount_Builder::setSupportedUriSchemes(JObject arg0)
	{
		return callObjectMethod(
			"setSupportedUriSchemes",
			"(Ljava/util/List;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.object()
		);
	}
} // namespace android::telecom

