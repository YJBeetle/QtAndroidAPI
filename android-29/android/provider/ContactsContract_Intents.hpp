#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS();
		static jstring ATTACH_IMAGE();
		static jstring CONTACTS_DATABASE_CREATED();
		static jstring EXTRA_CREATE_DESCRIPTION();
		static jstring EXTRA_FORCE_CREATE();
		static jstring EXTRA_RECIPIENT_CONTACT_CHAT_ID();
		static jstring EXTRA_RECIPIENT_CONTACT_NAME();
		static jstring EXTRA_RECIPIENT_CONTACT_URI();
		static jstring INVITE_CONTACT();
		static jstring METADATA_ACCOUNT_TYPE();
		static jstring METADATA_MIMETYPE();
		static jstring SEARCH_SUGGESTION_CLICKED();
		static jstring SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static jstring SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static jstring SHOW_OR_CREATE_CONTACT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
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
	
	// Constructors
	void ContactsContract_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Intents",
			"()V"
		);
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

