#pragma once

#include "../content/res/Resources.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_StructuredPostal.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::CITY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CITY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_CommonDataKinds_StructuredPostal::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::COUNTRY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"COUNTRY",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::FORMATTED_ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"FORMATTED_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::NEIGHBORHOOD()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"NEIGHBORHOOD",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::POBOX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"POBOX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::POSTCODE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"POSTCODE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::REGION()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"REGION",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::STREET()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"STREET",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_HOME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_OTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_StructuredPostal::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint ContactsContract_CommonDataKinds_StructuredPostal::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$StructuredPostal",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

