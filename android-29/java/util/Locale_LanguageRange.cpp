#include "./Locale_LanguageRange.hpp"

namespace java::util
{
	// Fields
	jdouble Locale_LanguageRange::MAX_WEIGHT()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MAX_WEIGHT"
		);
	}
	jdouble Locale_LanguageRange::MIN_WEIGHT()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MIN_WEIGHT"
		);
	}
	
	// QAndroidJniObject forward
	Locale_LanguageRange::Locale_LanguageRange(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Locale_LanguageRange::Locale_LanguageRange(jstring arg0)
		: __JniBaseClass(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Locale_LanguageRange::Locale_LanguageRange(jstring arg0, jdouble arg1)
		: __JniBaseClass(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		) {}
	
	// Methods
	__JniBaseClass Locale_LanguageRange::mapEquivalents(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"mapEquivalents",
			"(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Locale_LanguageRange::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass Locale_LanguageRange::parse(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	jboolean Locale_LanguageRange::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Locale_LanguageRange::getRange()
	{
		return callObjectMethod(
			"getRange",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring Locale_LanguageRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

