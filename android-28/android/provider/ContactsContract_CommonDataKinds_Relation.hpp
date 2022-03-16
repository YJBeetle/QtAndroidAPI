#pragma once

#include "../content/res/Resources.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Relation.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Relation::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Relation::NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_ASSISTANT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_ASSISTANT"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_BROTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_BROTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_CHILD()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_CHILD"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_DOMESTIC_PARTNER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_DOMESTIC_PARTNER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_FATHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FATHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_FRIEND()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FRIEND"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_MANAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MANAGER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_MOTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MOTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_PARENT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARENT"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_PARTNER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARTNER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_REFERRED_BY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_REFERRED_BY"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_RELATIVE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_RELATIVE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_SISTER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SISTER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::TYPE_SPOUSE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SPOUSE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString ContactsContract_CommonDataKinds_Relation::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint ContactsContract_CommonDataKinds_Relation::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

