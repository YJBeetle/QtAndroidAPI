#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class CollationKey;
}
namespace android::icu::text
{
	class UnicodeSet;
}
namespace android::icu::util
{
	class ULocale;
}
namespace android::icu::util
{
	class VersionInfo;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class Collator : public __JniBaseClass
	{
	public:
		// Fields
		static jint CANONICAL_DECOMPOSITION();
		static jint FULL_DECOMPOSITION();
		static jint IDENTICAL();
		static jint NO_DECOMPOSITION();
		static jint PRIMARY();
		static jint QUATERNARY();
		static jint SECONDARY();
		static jint TERTIARY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Collator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Collator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static jarray getAvailableULocales();
		static jstring getDisplayName(android::icu::util::ULocale arg0);
		static jstring getDisplayName(java::util::Locale arg0);
		static jstring getDisplayName(android::icu::util::ULocale arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayName(java::util::Locale arg0, java::util::Locale arg1);
		static jintArray getEquivalentReorderCodes(jint arg0);
		static android::icu::util::ULocale getFunctionalEquivalent(jstring arg0, android::icu::util::ULocale arg1);
		static android::icu::util::ULocale getFunctionalEquivalent(jstring arg0, android::icu::util::ULocale arg1, jbooleanArray arg2);
		static android::icu::text::Collator getInstance();
		static android::icu::text::Collator getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::Collator getInstance(java::util::Locale arg0);
		static jarray getKeywordValues(jstring arg0);
		static jarray getKeywordValuesForLocale(jstring arg0, android::icu::util::ULocale arg1, jboolean arg2);
		static jarray getKeywords();
		jobject clone();
		android::icu::text::Collator cloneAsThawed();
		jint compare(jobject arg0, jobject arg1);
		jint compare(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		jboolean equals(jstring arg0, jstring arg1);
		android::icu::text::Collator freeze();
		android::icu::text::CollationKey getCollationKey(jstring arg0);
		jint getDecomposition();
		jint getMaxVariable();
		jintArray getReorderCodes();
		jint getStrength();
		android::icu::text::UnicodeSet getTailoredSet();
		android::icu::util::VersionInfo getUCAVersion();
		jint getVariableTop();
		android::icu::util::VersionInfo getVersion();
		jint hashCode();
		jboolean isFrozen();
		void setDecomposition(jint arg0);
		android::icu::text::Collator setMaxVariable(jint arg0);
		void setReorderCodes(jintArray arg0);
		void setStrength(jint arg0);
	};
} // namespace android::icu::text

