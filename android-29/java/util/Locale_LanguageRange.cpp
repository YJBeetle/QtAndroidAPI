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
	
	Locale_LanguageRange::Locale_LanguageRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Locale_LanguageRange::Locale_LanguageRange(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Locale_LanguageRange::Locale_LanguageRange(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Locale_LanguageRange::Locale_LanguageRange(jstring &arg0, jdouble &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	Locale_LanguageRange::Locale_LanguageRange(const QString &arg0, jdouble &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Locale_LanguageRange::mapEquivalents(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"mapEquivalents",
			"(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Locale_LanguageRange::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject Locale_LanguageRange::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Locale_LanguageRange::parse(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Locale_LanguageRange::parse(const QString &arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean Locale_LanguageRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Locale_LanguageRange::getRange()
	{
		return __thiz.callObjectMethod(
			"getRange",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Locale_LanguageRange::getWeight()
	{
		return __thiz.callMethod<jdouble>(
			"getWeight",
			"()D"
		);
	}
	jint Locale_LanguageRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Locale_LanguageRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

