#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_INTENTS_INSERT
#define ANDROID_PROVIDER_CONTACTS_INTENTS_INSERT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_Intents_Insert : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION();
		static QAndroidJniObject COMPANY();
		static QAndroidJniObject EMAIL();
		static QAndroidJniObject EMAIL_ISPRIMARY();
		static QAndroidJniObject EMAIL_TYPE();
		static QAndroidJniObject FULL_MODE();
		static QAndroidJniObject IM_HANDLE();
		static QAndroidJniObject IM_ISPRIMARY();
		static QAndroidJniObject IM_PROTOCOL();
		static QAndroidJniObject JOB_TITLE();
		static QAndroidJniObject NAME();
		static QAndroidJniObject NOTES();
		static QAndroidJniObject PHONE();
		static QAndroidJniObject PHONETIC_NAME();
		static QAndroidJniObject PHONE_ISPRIMARY();
		static QAndroidJniObject PHONE_TYPE();
		static QAndroidJniObject POSTAL();
		static QAndroidJniObject POSTAL_ISPRIMARY();
		static QAndroidJniObject POSTAL_TYPE();
		static QAndroidJniObject SECONDARY_EMAIL();
		static QAndroidJniObject SECONDARY_EMAIL_TYPE();
		static QAndroidJniObject SECONDARY_PHONE();
		static QAndroidJniObject SECONDARY_PHONE_TYPE();
		static QAndroidJniObject TERTIARY_EMAIL();
		static QAndroidJniObject TERTIARY_EMAIL_TYPE();
		static QAndroidJniObject TERTIARY_PHONE();
		static QAndroidJniObject TERTIARY_PHONE_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_Intents_Insert::ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::COMPANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"COMPANY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::EMAIL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL_ISPRIMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::FULL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"FULL_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::IM_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_HANDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::IM_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_ISPRIMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::IM_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_PROTOCOL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::JOB_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"JOB_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::NOTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"NOTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::PHONETIC_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONETIC_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::PHONE_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE_ISPRIMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::POSTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::POSTAL_ISPRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL_ISPRIMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::POSTAL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::SECONDARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_EMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::SECONDARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_EMAIL_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::SECONDARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::SECONDARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_PHONE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::TERTIARY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_EMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::TERTIARY_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_EMAIL_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::TERTIARY_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents_Insert::TERTIARY_PHONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_PHONE_TYPE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_Intents_Insert::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Intents$Insert",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Intents_Insert : public __jni_impl::android::provider::Contacts_Intents_Insert
	{
	public:
		Contacts_Intents_Insert(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Intents_Insert()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_INTENTS_INSERT

