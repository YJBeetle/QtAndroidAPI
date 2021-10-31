#include "../net/Uri.hpp"
#include "./Contacts_Groups.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Groups::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Groups::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Groups::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Groups::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_Groups::DELETED_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Groups::GROUP_ANDROID_STARRED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_ANDROID_STARRED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Groups::GROUP_MY_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$Groups",
			"GROUP_MY_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Contacts_Groups::Contacts_Groups(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

