#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_QUICKCONTACT
#define ANDROID_PROVIDER_CONTACTSCONTRACT_QUICKCONTACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_QuickContact : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_QUICK_CONTACT();
		static jstring EXTRA_EXCLUDE_MIMES();
		static jstring EXTRA_MODE();
		static jstring EXTRA_PRIORITIZED_MIMETYPE();
		static jint MODE_LARGE();
		static jint MODE_MEDIUM();
		static jint MODE_SMALL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4);
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4);
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jint arg3, jarray arg4);
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4);
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4);
		static void showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jint arg3, jarray arg4);
	};
} // namespace __jni_impl::android::provider

#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../net/Uri.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_QuickContact::ACTION_QUICK_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"ACTION_QUICK_CONTACT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_EXCLUDE_MIMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_EXCLUDE_MIMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_PRIORITIZED_MIMETYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_PRIORITIZED_MIMETYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_QuickContact::MODE_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_LARGE"
		);
	}
	jint ContactsContract_QuickContact::MODE_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_MEDIUM"
		);
	}
	jint ContactsContract_QuickContact::MODE_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_SMALL"
		);
	}
	
	// Constructors
	void ContactsContract_QuickContact::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$QuickContact",
			"()V"
		);
	}
	
	// Methods
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::net::Uri arg2, jint arg3, jarray arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jarray arg3, jstring arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jarray arg3, const QString &arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void ContactsContract_QuickContact::showQuickContact(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1, __jni_impl::android::net::Uri arg2, jint arg3, jarray arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_QuickContact : public __jni_impl::android::provider::ContactsContract_QuickContact
	{
	public:
		ContactsContract_QuickContact(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_QuickContact()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_QUICKCONTACT

