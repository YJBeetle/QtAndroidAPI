#include "./ContactsContract_Intents.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Intents::ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::ATTACH_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::CONTACTS_DATABASE_CREATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"CONTACTS_DATABASE_CREATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::EXTRA_FORCE_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_CHAT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_CHAT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::INVITE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"INVITE_CONTACT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::METADATA_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_ACCOUNT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::METADATA_MIMETYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_MIMETYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContactsContract_Intents::ContactsContract_Intents(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_Intents::ContactsContract_Intents()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Intents",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

