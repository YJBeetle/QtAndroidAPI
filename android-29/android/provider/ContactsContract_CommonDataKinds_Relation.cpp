#include "../content/res/Resources.hpp"
#include "./ContactsContract_CommonDataKinds_Relation.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Relation::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_ASSISTANT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_BROTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_BROTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_CHILD"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_DOMESTIC_PARTNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_DOMESTIC_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FATHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FATHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FRIEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FRIEND"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MANAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MANAGER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MOTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MOTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARENT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARTNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_REFERRED_BY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_REFERRED_BY"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_RELATIVE"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SISTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SISTER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SPOUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SPOUSE"
		);
	}
	
	ContactsContract_CommonDataKinds_Relation::ContactsContract_CommonDataKinds_Relation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring ContactsContract_CommonDataKinds_Relation::getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::getTypeLabel(android::content::res::Resources arg0, jint arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

