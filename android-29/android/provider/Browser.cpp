#include "../content/Context.hpp"
#include "./Browser.hpp"

namespace android::provider
{
	// Fields
	jstring Browser::EXTRA_APPLICATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_APPLICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_CREATE_NEW_TAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_CREATE_NEW_TAB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_HEADERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_HEADERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::INITIAL_ZOOM_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"INITIAL_ZOOM_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Browser::Browser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Browser::Browser()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Browser",
			"()V"
		);
	}
	
	// Methods
	void Browser::sendString(android::content::Context arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Browser::sendString(android::content::Context arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::provider

