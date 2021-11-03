#pragma once

#include "../../../JObject.hpp"

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
	class NumberingSystem : public JObject
	{
	public:
		// Fields
		static android::icu::text::NumberingSystem LATIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberingSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberingSystem(QJniObject obj);
		
		// Constructors
		NumberingSystem();
		
		// Methods
		static jarray getAvailableNames();
		static android::icu::text::NumberingSystem getInstance();
		static android::icu::text::NumberingSystem getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberingSystem getInstance(java::util::Locale arg0);
		static android::icu::text::NumberingSystem getInstance(jint arg0, jboolean arg1, jstring arg2);
		static android::icu::text::NumberingSystem getInstanceByName(jstring arg0);
		static jboolean isValidDigitString(jstring arg0);
		jstring getDescription();
		jstring getName();
		jint getRadix();
		jboolean isAlgorithmic();
	};
} // namespace android::icu::text

