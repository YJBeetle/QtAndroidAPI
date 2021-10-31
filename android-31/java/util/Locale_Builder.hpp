#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::util
{
	class Locale_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Builder(QJniObject obj);
		
		// Constructors
		Locale_Builder();
		
		// Methods
		java::util::Locale_Builder addUnicodeLocaleAttribute(jstring arg0);
		java::util::Locale build();
		java::util::Locale_Builder clear();
		java::util::Locale_Builder clearExtensions();
		java::util::Locale_Builder removeUnicodeLocaleAttribute(jstring arg0);
		java::util::Locale_Builder setExtension(jchar arg0, jstring arg1);
		java::util::Locale_Builder setLanguage(jstring arg0);
		java::util::Locale_Builder setLanguageTag(jstring arg0);
		java::util::Locale_Builder setLocale(java::util::Locale arg0);
		java::util::Locale_Builder setRegion(jstring arg0);
		java::util::Locale_Builder setScript(jstring arg0);
		java::util::Locale_Builder setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		java::util::Locale_Builder setVariant(jstring arg0);
	};
} // namespace java::util

