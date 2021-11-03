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
		
		// QJniObject forward
		template<typename ...Ts> explicit ULocale_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ULocale_Builder(QJniObject obj);
		
		// Constructors
		ULocale_Builder();
		
		// Methods
		android::icu::util::ULocale_Builder addUnicodeLocaleAttribute(JString arg0) const;
		android::icu::util::ULocale build() const;
		android::icu::util::ULocale_Builder clear() const;
		android::icu::util::ULocale_Builder clearExtensions() const;
		android::icu::util::ULocale_Builder removeUnicodeLocaleAttribute(JString arg0) const;
		android::icu::util::ULocale_Builder setExtension(jchar arg0, JString arg1) const;
		android::icu::util::ULocale_Builder setLanguage(JString arg0) const;
		android::icu::util::ULocale_Builder setLanguageTag(JString arg0) const;
		android::icu::util::ULocale_Builder setLocale(android::icu::util::ULocale arg0) const;
		android::icu::util::ULocale_Builder setRegion(JString arg0) const;
		android::icu::util::ULocale_Builder setScript(JString arg0) const;
		android::icu::util::ULocale_Builder setUnicodeLocaleKeyword(JString arg0, JString arg1) const;
		android::icu::util::ULocale_Builder setVariant(JString arg0) const;
	};
} // namespace android::icu::util

