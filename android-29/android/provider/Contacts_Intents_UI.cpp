#include "./Contacts_Intents_UI.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Intents_UI::FILTER_CONTACTS_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"FILTER_CONTACTS_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::FILTER_TEXT_EXTRA_KEY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"FILTER_TEXT_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::GROUP_NAME_EXTRA_KEY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"GROUP_NAME_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_ALL_CONTACTS_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_ALL_CONTACTS_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_CONTACTS_WITH_PHONES_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_CONTACTS_WITH_PHONES_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_DEFAULT()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_FREQUENT_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_FREQUENT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_GROUP_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_GROUP_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_STARRED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_STARRED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::LIST_STREQUENT_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"LIST_STREQUENT_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Intents_UI::TITLE_EXTRA_KEY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$UI",
			"TITLE_EXTRA_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Contacts_Intents_UI::Contacts_Intents_UI(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Contacts_Intents_UI::Contacts_Intents_UI()
		: __JniBaseClass(
			"android.provider.Contacts$Intents$UI",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

