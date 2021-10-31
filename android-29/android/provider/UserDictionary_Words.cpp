#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../java/util/Locale.hpp"
#include "./UserDictionary_Words.hpp"

namespace android::provider
{
	// Fields
	jstring UserDictionary_Words::APP_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"APP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri UserDictionary_Words::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring UserDictionary_Words::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::FREQUENCY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"FREQUENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::LOCALE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"LOCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint UserDictionary_Words::LOCALE_TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_ALL"
		);
	}
	jint UserDictionary_Words::LOCALE_TYPE_CURRENT()
	{
		return getStaticField<jint>(
			"android.provider.UserDictionary$Words",
			"LOCALE_TYPE_CURRENT"
		);
	}
	jstring UserDictionary_Words::SHORTCUT()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::WORD()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"WORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserDictionary_Words::_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	UserDictionary_Words::UserDictionary_Words(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UserDictionary_Words::UserDictionary_Words()
		: __JniBaseClass(
			"android.provider.UserDictionary$Words",
			"()V"
		) {}
	
	// Methods
	void UserDictionary_Words::addWord(android::content::Context arg0, jstring arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3, java::util::Locale arg4)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
} // namespace android::provider

