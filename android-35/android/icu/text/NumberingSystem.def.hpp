#pragma once

#include "../../../JObject.hpp"

class JArray;
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
	class NumberingSystem : public JObject
	{
	public:
		// Fields
		static android::icu::text::NumberingSystem LATIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberingSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberingSystem(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NumberingSystem();
		
		// Methods
		static JArray getAvailableNames();
		static android::icu::text::NumberingSystem getInstance();
		static android::icu::text::NumberingSystem getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberingSystem getInstance(java::util::Locale arg0);
		static android::icu::text::NumberingSystem getInstance(jint arg0, jboolean arg1, JString arg2);
		static android::icu::text::NumberingSystem getInstanceByName(JString arg0);
		static jboolean isValidDigitString(JString arg0);
		JString getDescription() const;
		JString getName() const;
		jint getRadix() const;
		jboolean isAlgorithmic() const;
	};
} // namespace android::icu::text

