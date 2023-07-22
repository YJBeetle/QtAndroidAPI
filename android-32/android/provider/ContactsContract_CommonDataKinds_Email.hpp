#pragma once

#include "../content/res/Resources.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Email.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Email::ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Email::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_HOME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Email::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_MOBILE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Email::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_OTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Email::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString ContactsContract_CommonDataKinds_Email::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint ContactsContract_CommonDataKinds_Email::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
