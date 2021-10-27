#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/Locale.hpp"
#include "./UserDictionary_Words.hpp"

namespace android::provider
{
	// Fields
	jstring UserDictionary_Words::APP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"APP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UserDictionary_Words::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring UserDictionary_Words::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::FREQUENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"FREQUENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::LOCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"LOCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint UserDictionary_Words::LOCALE_TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_ALL"
		);
	}
	jint UserDictionary_Words::LOCALE_TYPE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_CURRENT"
		);
	}
	jstring UserDictionary_Words::SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::WORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"WORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	UserDictionary_Words::UserDictionary_Words(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserDictionary_Words::UserDictionary_Words()
	{
		__thiz = QAndroidJniObject(
			"android.provider.UserDictionary$Words",
			"()V"
		);
	}
	
	// Methods
	void UserDictionary_Words::addWord(android::content::Context arg0, jstring arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(android::content::Context arg0, const QString &arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3, java::util::Locale arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void UserDictionary_Words::addWord(android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3, java::util::Locale arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
} // namespace android::provider

