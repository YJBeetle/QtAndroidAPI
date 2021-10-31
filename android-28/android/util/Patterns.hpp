#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Patterns : public __JniBaseClass
	{
	public:
		// Fields
		static java::util::regex::Pattern DOMAIN_NAME();
		static java::util::regex::Pattern EMAIL_ADDRESS();
		static jstring GOOD_IRI_CHAR();
		static java::util::regex::Pattern IP_ADDRESS();
		static java::util::regex::Pattern PHONE();
		static java::util::regex::Pattern TOP_LEVEL_DOMAIN();
		static jstring TOP_LEVEL_DOMAIN_STR();
		static jstring TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL();
		static java::util::regex::Pattern WEB_URL();
		
		// QJniObject forward
		template<typename ...Ts> explicit Patterns(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Patterns(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring concatGroups(java::util::regex::Matcher arg0);
		static jstring digitsAndPlusOnly(java::util::regex::Matcher arg0);
	};
} // namespace android::util

