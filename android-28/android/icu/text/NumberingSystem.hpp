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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberingSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberingSystem(QAndroidJniObject obj);
		
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
		JString getDescription();
		JString getName();
		jint getRadix();
		jboolean isAlgorithmic();
	};
} // namespace android::icu::text

