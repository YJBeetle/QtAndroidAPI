#pragma once

#include "../content/res/Resources.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Organization.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Organization::COMPANY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"COMPANY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::DEPARTMENT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"DEPARTMENT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::JOB_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"JOB_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::OFFICE_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"OFFICE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::PHONETIC_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"PHONETIC_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::PHONETIC_NAME_STYLE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"PHONETIC_NAME_STYLE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::SYMBOL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"SYMBOL",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Organization::TITLE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TITLE",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Organization::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TYPE_OTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Organization::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString ContactsContract_CommonDataKinds_Organization::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint ContactsContract_CommonDataKinds_Organization::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Organization",
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
