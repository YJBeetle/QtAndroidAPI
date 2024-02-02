#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::util
{
	class Locale_Category;
}
namespace java::util
{
	class Locale_FilteringMode;
}
namespace java::util
{
	class Locale_IsoCountryCode;
}
namespace java::util
{
	class Optional;
}

namespace java::util
{
	class Locale : public JObject
	{
	public:
		// Fields
		static java::util::Locale CANADA();
		static java::util::Locale CANADA_FRENCH();
		static java::util::Locale CHINA();
		static java::util::Locale CHINESE();
		static java::util::Locale ENGLISH();
		static java::util::Locale FRANCE();
		static java::util::Locale FRENCH();
		static java::util::Locale GERMAN();
		static java::util::Locale GERMANY();
		static java::util::Locale ITALIAN();
		static java::util::Locale ITALY();
		static java::util::Locale JAPAN();
		static java::util::Locale JAPANESE();
		static java::util::Locale KOREA();
		static java::util::Locale KOREAN();
		static java::util::Locale PRC();
		static jchar PRIVATE_USE_EXTENSION();
		static java::util::Locale ROOT();
		static java::util::Locale SIMPLIFIED_CHINESE();
		static java::util::Locale TAIWAN();
		static java::util::Locale TRADITIONAL_CHINESE();
		static java::util::Locale UK();
		static jchar UNICODE_LOCALE_EXTENSION();
		static java::util::Locale US();
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Locale(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Locale(JString arg0);
		Locale(JString arg0, JString arg1);
		Locale(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static JObject filter(JObject arg0, JObject arg1);
		static JObject filter(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2);
		static JObject filterTags(JObject arg0, JObject arg1);
		static JObject filterTags(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2);
		static java::util::Locale forLanguageTag(JString arg0);
		static JArray getAvailableLocales();
		static java::util::Locale getDefault();
		static java::util::Locale getDefault(java::util::Locale_Category arg0);
		static JArray getISOCountries();
		static JObject getISOCountries(java::util::Locale_IsoCountryCode arg0);
		static JArray getISOLanguages();
		static java::util::Locale lookup(JObject arg0, JObject arg1);
		static JString lookupTag(JObject arg0, JObject arg1);
		static java::util::Locale of(JString arg0);
		static java::util::Locale of(JString arg0, JString arg1);
		static java::util::Locale of(JString arg0, JString arg1, JString arg2);
		static void setDefault(java::util::Locale arg0);
		static void setDefault(java::util::Locale_Category arg0, java::util::Locale arg1);
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		JString getCountry() const;
		JString getDisplayCountry() const;
		JString getDisplayCountry(java::util::Locale arg0) const;
		JString getDisplayLanguage() const;
		JString getDisplayLanguage(java::util::Locale arg0) const;
		JString getDisplayName() const;
		JString getDisplayName(java::util::Locale arg0) const;
		JString getDisplayScript() const;
		JString getDisplayScript(java::util::Locale arg0) const;
		JString getDisplayVariant() const;
		JString getDisplayVariant(java::util::Locale arg0) const;
		JString getExtension(jchar arg0) const;
		JObject getExtensionKeys() const;
		JString getISO3Country() const;
		JString getISO3Language() const;
		JString getLanguage() const;
		JString getScript() const;
		JObject getUnicodeLocaleAttributes() const;
		JObject getUnicodeLocaleKeys() const;
		JString getUnicodeLocaleType(JString arg0) const;
		JString getVariant() const;
		jboolean hasExtensions() const;
		jint hashCode() const;
		java::util::Locale stripExtensions() const;
		JString toLanguageTag() const;
		JString toString() const;
	};
} // namespace java::util

