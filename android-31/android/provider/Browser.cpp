#include "../content/Context.hpp"
#include "./Browser.hpp"

namespace android::provider
{
	// Fields
	jstring Browser::EXTRA_APPLICATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_APPLICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_CREATE_NEW_TAB()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_CREATE_NEW_TAB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_HEADERS()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_HEADERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::INITIAL_ZOOM_LEVEL()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"INITIAL_ZOOM_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Browser::Browser(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Browser::Browser()
		: __JniBaseClass(
			"android.provider.Browser",
			"()V"
		) {}
	
	// Methods
	void Browser::sendString(android::content::Context arg0, jstring arg1)
	{
		callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

