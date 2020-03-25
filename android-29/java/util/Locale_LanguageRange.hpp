#pragma once

#ifndef JAVA_UTIL_LOCALE_LANGUAGERANGE
#define JAVA_UTIL_LOCALE_LANGUAGERANGE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Locale_LanguageRange : public __JniBaseClass
	{
	public:
		// Fields
		static jdouble MAX_WEIGHT();
		static jdouble MIN_WEIGHT();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jdouble arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject parse(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject parse(jstring arg0);
		jdouble getWeight();
		QAndroidJniObject getRange();
		static QAndroidJniObject mapEquivalents(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	jdouble Locale_LanguageRange::MAX_WEIGHT()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MAX_WEIGHT");
	}
	jdouble Locale_LanguageRange::MIN_WEIGHT()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.util.Locale$LanguageRange",
			"MIN_WEIGHT");
	}
	
	// Constructors
	void Locale_LanguageRange::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Locale_LanguageRange::__constructor(jstring arg0, jdouble arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale$LanguageRange",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean Locale_LanguageRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Locale_LanguageRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Locale_LanguageRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Locale_LanguageRange::parse(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Locale_LanguageRange::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0);
	}
	jdouble Locale_LanguageRange::getWeight()
	{
		return __thiz.callMethod<jdouble>(
			"getWeight",
			"()D");
	}
	QAndroidJniObject Locale_LanguageRange::getRange()
	{
		return __thiz.callObjectMethod(
			"getRange",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Locale_LanguageRange::mapEquivalents(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$LanguageRange",
			"mapEquivalents",
			"(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Locale_LanguageRange : public __jni_impl::java::util::Locale_LanguageRange
	{
	public:
		Locale_LanguageRange(QAndroidJniObject obj) { __thiz = obj; }
		Locale_LanguageRange(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Locale_LanguageRange(jstring arg0, jdouble arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LOCALE_LANGUAGERANGE

