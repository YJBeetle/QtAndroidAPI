#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS();
		static QAndroidJniObject ATTACH_IMAGE();
		static QAndroidJniObject CONTACTS_DATABASE_CREATED();
		static QAndroidJniObject EXTRA_CREATE_DESCRIPTION();
		static QAndroidJniObject EXTRA_FORCE_CREATE();
		static QAndroidJniObject EXTRA_RECIPIENT_CONTACT_CHAT_ID();
		static QAndroidJniObject EXTRA_RECIPIENT_CONTACT_NAME();
		static QAndroidJniObject EXTRA_RECIPIENT_CONTACT_URI();
		static QAndroidJniObject INVITE_CONTACT();
		static QAndroidJniObject METADATA_ACCOUNT_TYPE();
		static QAndroidJniObject METADATA_MIMETYPE();
		static QAndroidJniObject SEARCH_SUGGESTION_CLICKED();
		static QAndroidJniObject SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static QAndroidJniObject SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static QAndroidJniObject SHOW_OR_CREATE_CONTACT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject ContactsContract_Intents::ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::ATTACH_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::CONTACTS_DATABASE_CREATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"CONTACTS_DATABASE_CREATED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::EXTRA_FORCE_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_CHAT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_CHAT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::EXTRA_RECIPIENT_CONTACT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"EXTRA_RECIPIENT_CONTACT_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::INVITE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"INVITE_CONTACT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::METADATA_ACCOUNT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_ACCOUNT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::METADATA_MIMETYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"METADATA_MIMETYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ContactsContract_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ContactsContract_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Intents",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Intents : public __jni_impl::android::provider::ContactsContract_Intents
	{
	public:
		ContactsContract_Intents(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Intents()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_INTENTS

