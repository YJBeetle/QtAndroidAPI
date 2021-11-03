#include "../content/res/Resources.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Phone.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_CommonDataKinds_Phone::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Phone::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Phone::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::NORMALIZED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::NUMBER()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::SEARCH_DISPLAY_NAME_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_DISPLAY_NAME_KEY",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Phone::SEARCH_PHONE_NUMBER_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"SEARCH_PHONE_NUMBER_KEY",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_ASSISTANT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ASSISTANT"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_CALLBACK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CALLBACK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_CAR()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_CAR"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_COMPANY_MAIN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_COMPANY_MAIN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_FAX_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_FAX_WORK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_ISDN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_ISDN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MAIN()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MAIN"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MMS()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MMS"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_OTHER_FAX()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_OTHER_FAX"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_PAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_PAGER"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_RADIO()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_RADIO"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_TELEX()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TELEX"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_TTY_TDD()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_TTY_TDD"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Phone::TYPE_WORK_PAGER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"TYPE_WORK_PAGER"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Phone::ContactsContract_CommonDataKinds_Phone(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContactsContract_CommonDataKinds_Phone::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
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
	jint ContactsContract_CommonDataKinds_Phone::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Phone",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

