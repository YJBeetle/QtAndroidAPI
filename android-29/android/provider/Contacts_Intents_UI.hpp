#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Contacts_Intents_UI : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FILTER_CONTACTS_ACTION();
		static jstring FILTER_TEXT_EXTRA_KEY();
		static jstring GROUP_NAME_EXTRA_KEY();
		static jstring LIST_ALL_CONTACTS_ACTION();
		static jstring LIST_CONTACTS_WITH_PHONES_ACTION();
		static jstring LIST_DEFAULT();
		static jstring LIST_FREQUENT_ACTION();
		static jstring LIST_GROUP_ACTION();
		static jstring LIST_STARRED_ACTION();
		static jstring LIST_STREQUENT_ACTION();
		static jstring TITLE_EXTRA_KEY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_Intents_UI::FILTER_CONTACTS_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"FILTER_CONTACTS_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::FILTER_TEXT_EXTRA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"FILTER_TEXT_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::GROUP_NAME_EXTRA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"GROUP_NAME_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_ALL_CONTACTS_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_ALL_CONTACTS_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_CONTACTS_WITH_PHONES_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_CONTACTS_WITH_PHONES_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_FREQUENT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_FREQUENT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_GROUP_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_GROUP_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_STARRED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_STARRED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_STREQUENT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_STREQUENT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::TITLE_EXTRA_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"TITLE_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_Intents_UI::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$Intents$UI",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_Intents_UI : public __jni_impl::android::provider::Contacts_Intents_UI
	{
	public:
		Contacts_Intents_UI(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_Intents_UI()
		{
			__constructor();
		}
	};
} // namespace android::provider

