#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./Contacts_Settings.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Settings::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_Settings::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Settings::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Settings::SYNC_EVERYTHING()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Settings",
			"SYNC_EVERYTHING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Contacts_Settings::Contacts_Settings(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Contacts_Settings::getSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Settings",
			"getSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	void Contacts_Settings::setSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.provider.Contacts$Settings",
			"setSetting",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

