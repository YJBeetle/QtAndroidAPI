#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Locale_LanguageRange.hpp"

namespace java::util
{
	// Fields
	jdouble Locale_LanguageRange::MAX_WEIGHT()
	{
		return getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MAX_WEIGHT"
		);
	}
	jdouble Locale_LanguageRange::MIN_WEIGHT()
	{
		return getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MIN_WEIGHT"
		);
	}
	
	// QJniObject forward
	Locale_LanguageRange::Locale_LanguageRange(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Locale_LanguageRange::Locale_LanguageRange(JString arg0)
		: JObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Locale_LanguageRange::Locale_LanguageRange(JString arg0, jdouble arg1)
		: JObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	JObject Locale_LanguageRange::mapEquivalents(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"mapEquivalents",
			"(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Locale_LanguageRange::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	JObject Locale_LanguageRange::parse(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean Locale_LanguageRange::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Locale_LanguageRange::getRange()
	{
		return callObjectMethod(
			"getRange",
			"()Ljava/lang/String;"
		);
	}
	jdouble Locale_LanguageRange::getWeight()
	{
		return callMethod<jdouble>(
			"getWeight",
			"()D"
		);
	}
	jint Locale_LanguageRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Locale_LanguageRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

