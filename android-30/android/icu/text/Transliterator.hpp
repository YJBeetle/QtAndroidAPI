#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class Transliterator_Position;
}
namespace android::icu::text
{
	class UnicodeFilter;
}
namespace android::icu::text
{
	class UnicodeSet;
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
	class Transliterator : public JObject
	{
	public:
		// Fields
		static jint FORWARD();
		static jint REVERSE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Transliterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transliterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::Transliterator createFromRules(jstring arg0, jstring arg1, jint arg2);
		static JObject getAvailableIDs();
		static JObject getAvailableSources();
		static JObject getAvailableTargets(jstring arg0);
		static JObject getAvailableVariants(jstring arg0, jstring arg1);
		static jstring getDisplayName(jstring arg0);
		static jstring getDisplayName(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayName(jstring arg0, java::util::Locale arg1);
		static android::icu::text::Transliterator getInstance(jstring arg0);
		static android::icu::text::Transliterator getInstance(jstring arg0, jint arg1);
		void filteredTransliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jboolean arg2);
		void finishTransliteration(JObject arg0, android::icu::text::Transliterator_Position arg1);
		jarray getElements();
		android::icu::text::UnicodeFilter getFilter();
		jstring getID();
		android::icu::text::Transliterator getInverse();
		jint getMaximumContextLength();
		android::icu::text::UnicodeSet getSourceSet();
		android::icu::text::UnicodeSet getTargetSet();
		void setFilter(android::icu::text::UnicodeFilter arg0);
		jstring toRules(jboolean arg0);
		jint transliterate(JObject arg0, jint arg1, jint arg2);
		jstring transliterate(jstring arg0);
		void transliterate(JObject arg0);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jint arg2);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jstring arg2);
	};
} // namespace android::icu::text

