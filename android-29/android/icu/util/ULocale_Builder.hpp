#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
class JString;

namespace android::icu::util
{
	class ULocale_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ULocale_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ULocale_Builder(QAndroidJniObject obj);
		
		// Constructors
		ULocale_Builder();
		
		// Methods
		android::icu::util::ULocale_Builder addUnicodeLocaleAttribute(JString arg0);
		android::icu::util::ULocale build();
		android::icu::util::ULocale_Builder clear();
		android::icu::util::ULocale_Builder clearExtensions();
		android::icu::util::ULocale_Builder removeUnicodeLocaleAttribute(JString arg0);
		android::icu::util::ULocale_Builder setExtension(jchar arg0, JString arg1);
		android::icu::util::ULocale_Builder setLanguage(JString arg0);
		android::icu::util::ULocale_Builder setLanguageTag(JString arg0);
		android::icu::util::ULocale_Builder setLocale(android::icu::util::ULocale arg0);
		android::icu::util::ULocale_Builder setRegion(JString arg0);
		android::icu::util::ULocale_Builder setScript(JString arg0);
		android::icu::util::ULocale_Builder setUnicodeLocaleKeyword(JString arg0, JString arg1);
		android::icu::util::ULocale_Builder setVariant(JString arg0);
	};
} // namespace android::icu::util

