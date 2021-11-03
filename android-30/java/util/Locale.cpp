#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Locale_Category.hpp"
#include "./Locale_FilteringMode.hpp"
#include "./Optional.hpp"
#include "./Locale.hpp"

namespace java::util
{
	// Fields
	java::util::Locale Locale::CANADA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CANADA",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::CANADA_FRENCH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CANADA_FRENCH",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::CHINA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CHINA",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CHINESE",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::ENGLISH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ENGLISH",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::FRANCE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"FRANCE",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::FRENCH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"FRENCH",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::GERMAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"GERMAN",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::GERMANY()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"GERMANY",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::ITALIAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ITALIAN",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::ITALY()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ITALY",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::JAPAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"JAPAN",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::JAPANESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"JAPANESE",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::KOREA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"KOREA",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::KOREAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"KOREAN",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::PRC()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"PRC",
			"Ljava/util/Locale;"
		);
	}
	jchar Locale::PRIVATE_USE_EXTENSION()
	{
		return getStaticField<jchar>(
			"java.util.Locale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	java::util::Locale Locale::ROOT()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ROOT",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::SIMPLIFIED_CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"SIMPLIFIED_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::TAIWAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"TAIWAN",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::TRADITIONAL_CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"TRADITIONAL_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::UK()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"UK",
			"Ljava/util/Locale;"
		);
	}
	jchar Locale::UNICODE_LOCALE_EXTENSION()
	{
		return getStaticField<jchar>(
			"java.util.Locale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	java::util::Locale Locale::US()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"US",
			"Ljava/util/Locale;"
		);
	}
	
	// QJniObject forward
	Locale::Locale(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Locale::Locale(JString arg0)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Locale::Locale(JString arg0, JString arg1)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	Locale::Locale(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JObject Locale::filter(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Locale::filter(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject Locale::filterTags(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Locale::filterTags(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::Locale Locale::forLanguageTag(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"forLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jstring>()
		);
	}
	JArray Locale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::getDefault()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"()Ljava/util/Locale;"
		);
	}
	java::util::Locale Locale::getDefault(java::util::Locale_Category arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"(Ljava/util/Locale$Category;)Ljava/util/Locale;",
			arg0.object()
		);
	}
	JArray Locale::getISOCountries()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		);
	}
	JObject Locale::getISOCountries(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JArray Locale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		);
	}
	java::util::Locale Locale::lookup(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookup",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;",
			arg0.object(),
			arg1.object()
		);
	}
	JString Locale::lookupTag(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookupTag",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	void Locale::setDefault(java::util::Locale arg0)
	{
		callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void Locale::setDefault(java::util::Locale_Category arg0, java::util::Locale arg1)
	{
		callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale$Category;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Locale::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Locale::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Locale::getCountry() const
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayCountry() const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayCountry(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Locale::getDisplayLanguage() const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayLanguage(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Locale::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Locale::getDisplayScript() const
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayScript(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Locale::getDisplayVariant() const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getDisplayVariant(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Locale::getExtension(jchar arg0) const
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	JObject Locale::getExtensionKeys() const
	{
		return callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	JString Locale::getISO3Country() const
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getISO3Language() const
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::getScript() const
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		);
	}
	JObject Locale::getUnicodeLocaleAttributes() const
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	JObject Locale::getUnicodeLocaleKeys() const
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	JString Locale::getUnicodeLocaleType(JString arg0) const
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Locale::getVariant() const
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	jboolean Locale::hasExtensions() const
	{
		return callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	jint Locale::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::util::Locale Locale::stripExtensions() const
	{
		return callObjectMethod(
			"stripExtensions",
			"()Ljava/util/Locale;"
		);
	}
	JString Locale::toLanguageTag() const
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	JString Locale::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

