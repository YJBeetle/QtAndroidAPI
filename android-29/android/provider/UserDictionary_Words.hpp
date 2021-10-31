#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace java::util
{
	class Locale;
}

namespace android::provider
{
	class UserDictionary_Words : public __JniBaseClass
	{
	public:
		// Fields
		static jstring APP_ID();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring FREQUENCY();
		static jstring LOCALE();
		static jint LOCALE_TYPE_ALL();
		static jint LOCALE_TYPE_CURRENT();
		static jstring SHORTCUT();
		static jstring WORD();
		static jstring _ID();
		
		UserDictionary_Words(QAndroidJniObject obj);
		// Constructors
		UserDictionary_Words();
		
		// Methods
		static void addWord(android::content::Context arg0, jstring arg1, jint arg2, jint arg3);
		static void addWord(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3, java::util::Locale arg4);
	};
} // namespace android::provider

