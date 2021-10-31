#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class PluralRules_PluralType;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class PluralRules : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		static jstring KEYWORD_FEW();
		static jstring KEYWORD_MANY();
		static jstring KEYWORD_ONE();
		static jstring KEYWORD_OTHER();
		static jstring KEYWORD_TWO();
		static jstring KEYWORD_ZERO();
		static jdouble NO_UNIQUE_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PluralRules(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject createRules(jstring arg0);
		static QAndroidJniObject forLocale(android::icu::util::ULocale arg0);
		static QAndroidJniObject forLocale(java::util::Locale arg0);
		static QAndroidJniObject forLocale(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1);
		static QAndroidJniObject forLocale(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1);
		static QAndroidJniObject parseDescription(jstring arg0);
		jboolean equals(android::icu::text::PluralRules arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getAllKeywordValues(jstring arg0);
		QAndroidJniObject getKeywords();
		QAndroidJniObject getSamples(jstring arg0);
		jdouble getUniqueKeywordValue(jstring arg0);
		jint hashCode();
		jstring select(jdouble arg0);
		jstring toString();
	};
} // namespace android::icu::text

