#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::provider
{
	class UserDictionary_Words : public JObject
	{
	public:
		// Fields
		static JString APP_ID();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString FREQUENCY();
		static JString LOCALE();
		static jint LOCALE_TYPE_ALL();
		static jint LOCALE_TYPE_CURRENT();
		static JString SHORTCUT();
		static JString WORD();
		static JString _ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserDictionary_Words(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserDictionary_Words(QJniObject obj);
		
		// Constructors
		UserDictionary_Words();
		
		// Methods
		static void addWord(android::content::Context arg0, JString arg1, jint arg2, jint arg3);
		static void addWord(android::content::Context arg0, JString arg1, jint arg2, JString arg3, java::util::Locale arg4);
	};
} // namespace android::provider

