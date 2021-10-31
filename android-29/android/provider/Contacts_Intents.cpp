#include "./Contacts_Intents.hpp"

namespace android::provider
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
	
	// QAndroidJniObject forward
	Contacts_Intents::Contacts_Intents(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Contacts_Intents::Contacts_Intents()
		: __JniBaseClass(
			"android.provider.Contacts$Intents",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

