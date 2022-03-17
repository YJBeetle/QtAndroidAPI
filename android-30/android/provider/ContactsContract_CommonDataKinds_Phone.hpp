#pragma once

#include "../content/res/Resources.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Phone.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri ContactsContract_CommonDataKinds_Phone::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Phone::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_Phone::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::NORMALIZED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::NUMBER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::SEARCH_DISPLAY_NAME_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_DISPLAY_NAME_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Phone::SEARCH_PHONE_NUMBER_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_PHONE_NUMBER_KEY",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_ASSISTANT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ASSISTANT"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_CALLBACK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CALLBACK"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_CAR()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CAR"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_COMPANY_MAIN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_COMPANY_MAIN"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_HOME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_WORK"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_HOME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_ISDN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ISDN"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_MAIN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MAIN"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_MMS()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MMS"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MOBILE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER_FAX()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER_FAX"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_PAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_PAGER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_RADIO()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_RADIO"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_TELEX()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TELEX"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_TTY_TDD()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TTY_TDD"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_MOBILE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_PAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_PAGER"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString ContactsContract_CommonDataKinds_Phone::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint ContactsContract_CommonDataKinds_Phone::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

