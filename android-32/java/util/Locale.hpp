#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Locale_Category.def.hpp"
#include "./Locale_FilteringMode.def.hpp"
#include "./Optional.def.hpp"
#include "./Locale.def.hpp"

namespace java::util
{
	// Fields
	inline java::util::Locale Locale::CANADA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CANADA",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::CANADA_FRENCH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CANADA_FRENCH",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::CHINA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CHINA",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"CHINESE",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::ENGLISH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ENGLISH",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::FRANCE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"FRANCE",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::FRENCH()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"FRENCH",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::GERMAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"GERMAN",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::GERMANY()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"GERMANY",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::ITALIAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ITALIAN",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::ITALY()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ITALY",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::JAPAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"JAPAN",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::JAPANESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"JAPANESE",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::KOREA()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"KOREA",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::KOREAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"KOREAN",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::PRC()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"PRC",
			"Ljava/util/Locale;"
		);
	}
	inline jchar Locale::PRIVATE_USE_EXTENSION()
	{
		return getStaticField<jchar>(
			"java.util.Locale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	inline java::util::Locale Locale::ROOT()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"ROOT",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::SIMPLIFIED_CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"SIMPLIFIED_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::TAIWAN()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"TAIWAN",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::TRADITIONAL_CHINESE()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"TRADITIONAL_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::UK()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"UK",
			"Ljava/util/Locale;"
		);
	}
	inline jchar Locale::UNICODE_LOCALE_EXTENSION()
	{
		return getStaticField<jchar>(
			"java.util.Locale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	inline java::util::Locale Locale::US()
	{
		return getStaticObjectField(
			"java.util.Locale",
			"US",
			"Ljava/util/Locale;"
		);
	}
	
	// Constructors
	inline Locale::Locale(JString arg0)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Locale::Locale(JString arg0, JString arg1)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline Locale::Locale(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JObject Locale::filter(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Locale::filter(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2)
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
	inline JObject Locale::filterTags(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Locale::filterTags(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2)
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
	inline java::util::Locale Locale::forLanguageTag(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"forLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jstring>()
		);
	}
	inline JArray Locale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::getDefault()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"()Ljava/util/Locale;"
		);
	}
	inline java::util::Locale Locale::getDefault(java::util::Locale_Category arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"(Ljava/util/Locale$Category;)Ljava/util/Locale;",
			arg0.object()
		);
	}
	inline JArray Locale::getISOCountries()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		);
	}
	inline JObject Locale::getISOCountries(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline JArray Locale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		);
	}
	inline java::util::Locale Locale::lookup(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookup",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString Locale::lookupTag(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookupTag",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::util::Locale Locale::of(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"of",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jstring>()
		);
	}
	inline java::util::Locale Locale::of(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"of",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::util::Locale Locale::of(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"of",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Locale;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void Locale::setDefault(java::util::Locale arg0)
	{
		callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void Locale::setDefault(java::util::Locale_Category arg0, java::util::Locale arg1)
	{
		callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale$Category;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Locale::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Locale::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Locale::getCountry() const
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayCountry() const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayCountry(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Locale::getDisplayLanguage() const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayLanguage(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Locale::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Locale::getDisplayScript() const
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayScript(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Locale::getDisplayVariant() const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getDisplayVariant(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Locale::getExtension(jchar arg0) const
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject Locale::getExtensionKeys() const
	{
		return callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	inline JString Locale::getISO3Country() const
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getISO3Language() const
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::getScript() const
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Locale::getUnicodeLocaleAttributes() const
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject Locale::getUnicodeLocaleKeys() const
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	inline JString Locale::getUnicodeLocaleType(JString arg0) const
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Locale::getVariant() const
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Locale::hasExtensions() const
	{
		return callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	inline jint Locale::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::util::Locale Locale::stripExtensions() const
	{
		return callObjectMethod(
			"stripExtensions",
			"()Ljava/util/Locale;"
		);
	}
	inline JString Locale::toLanguageTag() const
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString Locale::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
