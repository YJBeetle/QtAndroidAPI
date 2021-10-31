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
		static QAndroidJniObject DOMAIN_NAME();
		static QAndroidJniObject EMAIL_ADDRESS();
		static jstring GOOD_IRI_CHAR();
		static QAndroidJniObject IP_ADDRESS();
		static QAndroidJniObject PHONE();
		static QAndroidJniObject TOP_LEVEL_DOMAIN();
		static jstring TOP_LEVEL_DOMAIN_STR();
		static jstring TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL();
		static QAndroidJniObject WEB_URL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Patterns(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Patterns(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring concatGroups(java::util::regex::Matcher arg0);
		static jstring digitsAndPlusOnly(java::util::regex::Matcher arg0);
	};
} // namespace android::util

