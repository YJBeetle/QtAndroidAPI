#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}

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
		android::icu::util::ULocale_Builder addUnicodeLocaleAttribute(jstring arg0);
		android::icu::util::ULocale build();
		android::icu::util::ULocale_Builder clear();
		android::icu::util::ULocale_Builder clearExtensions();
		android::icu::util::ULocale_Builder removeUnicodeLocaleAttribute(jstring arg0);
		android::icu::util::ULocale_Builder setExtension(jchar arg0, jstring arg1);
		android::icu::util::ULocale_Builder setLanguage(jstring arg0);
		android::icu::util::ULocale_Builder setLanguageTag(jstring arg0);
		android::icu::util::ULocale_Builder setLocale(android::icu::util::ULocale arg0);
		android::icu::util::ULocale_Builder setRegion(jstring arg0);
		android::icu::util::ULocale_Builder setScript(jstring arg0);
		android::icu::util::ULocale_Builder setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		android::icu::util::ULocale_Builder setVariant(jstring arg0);
	};
} // namespace android::icu::util

