#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./Settings_NameValueTable.hpp"

namespace android::provider
{
	// Fields
	jstring Settings_NameValueTable::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_NameValueTable::VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$NameValueTable",
			"VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Settings_NameValueTable::Settings_NameValueTable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Settings_NameValueTable::Settings_NameValueTable()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$NameValueTable",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Settings_NameValueTable::getUriFor(android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Settings_NameValueTable::getUriFor(android::net::Uri arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$NameValueTable",
			"getUriFor",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::provider

