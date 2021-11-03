#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./UserDictionary_Words.hpp"

namespace android::provider
{
	// Fields
	JString UserDictionary_Words::APP_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"APP_ID",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri UserDictionary_Words::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString UserDictionary_Words::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::FREQUENCY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"FREQUENCY",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::LOCALE()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"LOCALE",
			"Ljava/lang/String;"
		);
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
	JString UserDictionary_Words::SHORTCUT()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::WORD()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"WORD",
			"Ljava/lang/String;"
		);
	}
	JString UserDictionary_Words::_ID()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary$Words",
			"_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	UserDictionary_Words::UserDictionary_Words(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UserDictionary_Words::UserDictionary_Words()
		: JObject(
			"android.provider.UserDictionary$Words",
			"()V"
		) {}
	
	// Methods
	void UserDictionary_Words::addWord(android::content::Context arg0, JString arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;II)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	void UserDictionary_Words::addWord(android::content::Context arg0, JString arg1, jint arg2, JString arg3, java::util::Locale arg4)
	{
		callStaticMethod<void>(
			"android.provider.UserDictionary$Words",
			"addWord",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object()
		);
	}
} // namespace android::provider

