#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../net/Uri.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_QuickContact.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_QuickContact::ACTION_QUICK_CONTACT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"ACTION_QUICK_CONTACT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_QuickContact::EXTRA_EXCLUDE_MIMES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_EXCLUDE_MIMES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_QuickContact::EXTRA_MODE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_QuickContact::EXTRA_PRIORITIZED_MIMETYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$QuickContact",
			"EXTRA_PRIORITIZED_MIMETYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_QuickContact::MODE_LARGE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_LARGE"
		);
	}
	inline jint ContactsContract_QuickContact::MODE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_MEDIUM"
		);
	}
	inline jint ContactsContract_QuickContact::MODE_SMALL()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$QuickContact",
			"MODE_SMALL"
		);
	}
	
	// Constructors
	inline ContactsContract_QuickContact::ContactsContract_QuickContact()
		: JObject(
			"android.provider.ContactsContract$QuickContact",
			"()V"
		) {}
	
	// Methods
	inline void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, JArray arg3, JString arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	inline void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::graphics::Rect arg1, android::net::Uri arg2, jint arg3, JArray arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/graphics/Rect;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object<jarray>()
		);
	}
	inline void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, JArray arg3, JString arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	inline void ContactsContract_QuickContact::showQuickContact(android::content::Context arg0, android::view::View arg1, android::net::Uri arg2, jint arg3, JArray arg4)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$QuickContact",
			"showQuickContact",
			"(Landroid/content/Context;Landroid/view/View;Landroid/net/Uri;I[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object<jarray>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
