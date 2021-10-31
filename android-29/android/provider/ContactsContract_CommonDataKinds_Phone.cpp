#include "../content/res/Resources.hpp"
#include "../net/Uri.hpp"
#include "./ContactsContract_CommonDataKinds_Phone.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_CommonDataKinds_Phone::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Phone::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Phone::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_CommonDataKinds_Phone::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::NORMALIZED_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::SEARCH_DISPLAY_NAME_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_DISPLAY_NAME_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Phone::SEARCH_PHONE_NUMBER_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_PHONE_NUMBER_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ASSISTANT"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_CALLBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CALLBACK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_CAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CAR"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_COMPANY_MAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_COMPANY_MAIN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_WORK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_ISDN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ISDN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MAIN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MMS"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER_FAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER_FAX"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_PAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_PAGER"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_RADIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_RADIO"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_TELEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TELEX"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_TTY_TDD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TTY_TDD"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_MOBILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_PAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_PAGER"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_CommonDataKinds_Phone::ContactsContract_CommonDataKinds_Phone(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ContactsContract_CommonDataKinds_Phone::getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Phone::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider
