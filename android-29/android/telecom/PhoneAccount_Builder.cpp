#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./PhoneAccount.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./PhoneAccount_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	PhoneAccount_Builder::PhoneAccount_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccount &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.__jniObject().object()
		);
	}
	PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccountHandle &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	PhoneAccount_Builder::PhoneAccount_Builder(android::telecom::PhoneAccountHandle &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject PhoneAccount_Builder::addSupportedUriScheme(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addSupportedUriScheme",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount_Builder::addSupportedUriScheme(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addSupportedUriScheme",
			"(Ljava/lang/String;)Landroid/telecom/PhoneAccount$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telecom/PhoneAccount;"
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setAddress(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setCapabilities(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCapabilities",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setHighlightColor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHighlightColor",
			"(I)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setShortDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setShortDescription",
			"(Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			arg0
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setShortDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setShortDescription",
			"(Ljava/lang/CharSequence;)Landroid/telecom/PhoneAccount$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setSubscriptionAddress(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setSubscriptionAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setSupportedUriSchemes(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setSupportedUriSchemes",
			"(Ljava/util/List;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

