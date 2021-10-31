#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
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
	Locale::Locale(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Locale::Locale(jstring arg0)
		: __JniBaseClass(
			"java.util.Locale",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Locale::Locale(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	Locale::Locale(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	__JniBaseClass Locale::filter(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Locale::filter(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2)
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
	__JniBaseClass Locale::filterTags(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Locale::filterTags(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2)
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
	java::util::Locale Locale::forLanguageTag(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"forLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			arg0
		);
	}
	jarray Locale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	jarray Locale::getISOCountries()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	__JniBaseClass Locale::getISOCountries(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;",
			arg0.object()
		);
	}
	jarray Locale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	java::util::Locale Locale::lookup(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookup",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring Locale::lookupTag(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale",
			"lookupTag",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
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
	jobject Locale::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Locale::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Locale::getCountry()
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayCountry()
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayCountry(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Locale::getDisplayLanguage()
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayLanguage(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Locale::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Locale::getDisplayScript()
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayScript(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Locale::getDisplayVariant()
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayVariant(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Locale::getExtension(jchar arg0)
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass Locale::getExtensionKeys()
	{
		return callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring Locale::getISO3Country()
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getISO3Language()
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getScript()
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Locale::getUnicodeLocaleAttributes()
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass Locale::getUnicodeLocaleKeys()
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring Locale::getUnicodeLocaleType(jstring arg0)
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Locale::getVariant()
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Locale::hasExtensions()
	{
		return callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	jint Locale::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::util::Locale Locale::stripExtensions()
	{
		return callObjectMethod(
			"stripExtensions",
			"()Ljava/util/Locale;"
		);
	}
	jstring Locale::toLanguageTag()
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

