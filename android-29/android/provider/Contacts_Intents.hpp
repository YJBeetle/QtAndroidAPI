#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ATTACH_IMAGE();
		static jstring EXTRA_CREATE_DESCRIPTION();
		static jstring EXTRA_FORCE_CREATE();
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
	jstring Contacts_Intents::ATTACH_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"ATTACH_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::EXTRA_CREATE_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_CREATE_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::EXTRA_FORCE_CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"EXTRA_FORCE_CREATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::SEARCH_SUGGESTION_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents::SHOW_OR_CREATE_CONTACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents",
			"SHOW_OR_CREATE_CONTACT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Intents",
			"()V"
		);
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

