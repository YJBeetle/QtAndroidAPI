#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_INTENTS
#define ANDROID_PROVIDER_CONTACTS_INTENTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ATTACH_IMAGE();
		static QAndroidJniObject EXTRA_CREATE_DESCRIPTION();
		static QAndroidJniObject EXTRA_FORCE_CREATE();
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
	QAndroidJniObject Contacts_Intents::ATTACH_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::EXTRA_FORCE_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Contacts_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Contacts_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Intents",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Intents : public __jni_impl::android::provider::Contacts_Intents
	{
	public:
		Contacts_Intents(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Intents()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_INTENTS

