#include "./Settings_Panel.hpp"

namespace android::provider
{
	// Fields
	jstring Settings_Panel::ACTION_INTERNET_CONNECTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_INTERNET_CONNECTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Panel::ACTION_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Panel",
			"ACTION_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Settings_Panel::Settings_Panel(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

