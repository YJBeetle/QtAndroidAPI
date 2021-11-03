#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Contacts.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_Contacts::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_FREQUENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_FREQUENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_GROUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_GROUP_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Contacts::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_LOOKUP_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_MULTI_VCARD_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_MULTI_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_STREQUENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_STREQUENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_STREQUENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_STREQUENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Contacts::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Contacts::CONTENT_VCARD_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_VCARD_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_Contacts::CONTENT_VCARD_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"CONTENT_VCARD_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_Contacts::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	JString ContactsContract_Contacts::QUERY_PARAMETER_VCARD_NO_PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Contacts",
			"QUERY_PARAMETER_VCARD_NO_PHOTO",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_Contacts::ContactsContract_Contacts(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri ContactsContract_Contacts::getLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"getLookupUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri ContactsContract_Contacts::getLookupUri(jlong arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"getLookupUri",
			"(JLjava/lang/String;)Landroid/net/Uri;",
			arg0,
			arg1.object<jstring>()
		);
	}
	jboolean ContactsContract_Contacts::isEnterpriseContactId(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.ContactsContract$Contacts",
			"isEnterpriseContactId",
			"(J)Z",
			arg0
		);
	}
	android::net::Uri ContactsContract_Contacts::lookupContact(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"lookupContact",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	void ContactsContract_Contacts::markAsContacted(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$Contacts",
			"markAsContacted",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	java::io::InputStream ContactsContract_Contacts::openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::InputStream ContactsContract_Contacts::openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Contacts",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;Z)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::provider

