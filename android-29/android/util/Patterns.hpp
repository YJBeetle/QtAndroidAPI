#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::util::regex
{
	class Matcher;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::util
{
	class Patterns : public JObject
	{
	public:
		// Fields
		static java::util::regex::Pattern DOMAIN_NAME();
		static java::util::regex::Pattern EMAIL_ADDRESS();
		static JString GOOD_IRI_CHAR();
		static java::util::regex::Pattern IP_ADDRESS();
		static java::util::regex::Pattern PHONE();
		static java::util::regex::Pattern TOP_LEVEL_DOMAIN();
		static JString TOP_LEVEL_DOMAIN_STR();
		static JString TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL();
		static java::util::regex::Pattern WEB_URL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Patterns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Patterns(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString concatGroups(java::util::regex::Matcher arg0);
		static JString digitsAndPlusOnly(java::util::regex::Matcher arg0);
	};
} // namespace android::util

