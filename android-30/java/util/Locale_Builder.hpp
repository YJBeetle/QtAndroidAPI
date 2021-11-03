#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::util
{
	class Locale;
}

namespace java::util
{
	class Locale_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Builder(QJniObject obj);
		
		// Constructors
		Locale_Builder();
		
		// Methods
		java::util::Locale_Builder addUnicodeLocaleAttribute(JString arg0);
		java::util::Locale build();
		java::util::Locale_Builder clear();
		java::util::Locale_Builder clearExtensions();
		java::util::Locale_Builder removeUnicodeLocaleAttribute(JString arg0);
		java::util::Locale_Builder setExtension(jchar arg0, JString arg1);
		java::util::Locale_Builder setLanguage(JString arg0);
		java::util::Locale_Builder setLanguageTag(JString arg0);
		java::util::Locale_Builder setLocale(java::util::Locale arg0);
		java::util::Locale_Builder setRegion(JString arg0);
		java::util::Locale_Builder setScript(JString arg0);
		java::util::Locale_Builder setUnicodeLocaleKeyword(JString arg0, JString arg1);
		java::util::Locale_Builder setVariant(JString arg0);
	};
} // namespace java::util

