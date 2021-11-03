#include "../content/res/Resources.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Email.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_CommonDataKinds_Email::ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ADDRESS",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Email::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_CommonDataKinds_Email::ENTERPRISE_CONTENT_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"ENTERPRISE_CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_CommonDataKinds_Email::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_MOBILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_MOBILE"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Email::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"TYPE_WORK"
		);
	}
	
	// QJniObject forward
	ContactsContract_CommonDataKinds_Email::ContactsContract_CommonDataKinds_Email(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContactsContract_CommonDataKinds_Email::getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2)
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
	jint ContactsContract_CommonDataKinds_Email::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Email",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

