#include "../content/res/Resources.hpp"
#include "./ContactsContract_CommonDataKinds_Relation.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Relation::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_ASSISTANT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_ASSISTANT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_BROTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_BROTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_CHILD()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_CHILD"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_DOMESTIC_PARTNER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_DOMESTIC_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FATHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FATHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FRIEND()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FRIEND"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MANAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MANAGER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MOTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MOTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARENT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARENT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARTNER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_REFERRED_BY()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_REFERRED_BY"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_RELATIVE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_RELATIVE"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SISTER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SISTER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SPOUSE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SPOUSE"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Relation::ContactsContract_CommonDataKinds_Relation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ContactsContract_CommonDataKinds_Relation::getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

