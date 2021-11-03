#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../net/Uri.hpp"
#include "../view/View.hpp"
#include "./ContactsContract_QuickContact.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_QuickContact::ACTION_QUICK_CONTACT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"ACTION_QUICK_CONTACT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_EXCLUDE_MIMES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_EXCLUDE_MIMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_MODE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_QuickContact::EXTRA_PRIORITIZED_MIMETYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_PRIORITIZED_MIMETYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_QuickContact::MODE_LARGE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_LARGE"
		);
	}
	jint ContactsContract_QuickContact::MODE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_MEDIUM"
		);
	}
	jint ContactsContract_QuickContact::MODE_SMALL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_SMALL"
		);
	}
	
	// QJniObject forward
	ContactsContract_QuickContact::ContactsContract_QuickContact(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_QuickContact::ContactsContract_QuickContact()
		: JObject(
			"android.provider.ContactsContract$QuickContact",
			"()V"
		) {}
	
	// Methods
	void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jarray arg3, jstring arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jint arg3, jarray arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jarray arg3, jstring arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
	void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jint arg3, jarray arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
} // namespace android::provider

