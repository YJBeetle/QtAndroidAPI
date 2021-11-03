#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JString;
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
		static android::icu::text::Transliterator createFromRules(JString arg0, JString arg1, jint arg2);
		static JObject getAvailableIDs();
		static JObject getAvailableSources();
		static JObject getAvailableTargets(JString arg0);
		static JObject getAvailableVariants(JString arg0, JString arg1);
		static JString getDisplayName(JString arg0);
		static JString getDisplayName(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayName(JString arg0, java::util::Locale arg1);
		static android::icu::text::Transliterator getInstance(JString arg0);
		static android::icu::text::Transliterator getInstance(JString arg0, jint arg1);
		void filteredTransliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jboolean arg2);
		void finishTransliteration(JObject arg0, android::icu::text::Transliterator_Position arg1);
		JArray getElements();
		android::icu::text::UnicodeFilter getFilter();
		JString getID();
		android::icu::text::Transliterator getInverse();
		jint getMaximumContextLength();
		android::icu::text::UnicodeSet getSourceSet();
		android::icu::text::UnicodeSet getTargetSet();
		void setFilter(android::icu::text::UnicodeFilter arg0);
		JString toRules(jboolean arg0);
		jint transliterate(JObject arg0, jint arg1, jint arg2);
		JString transliterate(JString arg0);
		void transliterate(JObject arg0);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, jint arg2);
		void transliterate(JObject arg0, android::icu::text::Transliterator_Position arg1, JString arg2);
	};
} // namespace android::icu::text

