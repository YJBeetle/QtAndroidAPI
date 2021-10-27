#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccount;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}

namespace __jni_impl::android::telecom
{
	class PhoneAccount_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::telecom::PhoneAccount arg0);
		void __constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1);
		void __constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject addSupportedUriScheme(jstring arg0);
		QAndroidJniObject addSupportedUriScheme(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject setAddress(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setCapabilities(jint arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setHighlightColor(jint arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setShortDescription(jstring arg0);
		QAndroidJniObject setShortDescription(const QString &arg0);
		QAndroidJniObject setSubscriptionAddress(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setSupportedUriSchemes(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "PhoneAccount.hpp"
#include "PhoneAccountHandle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void PhoneAccount_Builder::__constructor(__jni_impl::android::telecom::PhoneAccount arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccount;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneAccount_Builder::__constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccount$Builder",
			"(Landroid/telecom/PhoneAccountHandle;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void PhoneAccount_Builder::__constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, const QString &arg1)
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
	QAndroidJniObject PhoneAccount_Builder::setAddress(__jni_impl::android::net::Uri arg0)
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
	QAndroidJniObject PhoneAccount_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
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
	QAndroidJniObject PhoneAccount_Builder::setIcon(__jni_impl::android::graphics::drawable::Icon arg0)
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
	QAndroidJniObject PhoneAccount_Builder::setSubscriptionAddress(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setSubscriptionAddress",
			"(Landroid/net/Uri;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PhoneAccount_Builder::setSupportedUriSchemes(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setSupportedUriSchemes",
			"(Ljava/util/List;)Landroid/telecom/PhoneAccount$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class PhoneAccount_Builder : public __jni_impl::android::telecom::PhoneAccount_Builder
	{
	public:
		PhoneAccount_Builder(QAndroidJniObject obj) { __thiz = obj; }
		PhoneAccount_Builder(__jni_impl::android::telecom::PhoneAccount arg0)
		{
			__constructor(
				arg0);
		}
		PhoneAccount_Builder(__jni_impl::android::telecom::PhoneAccountHandle arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::telecom

