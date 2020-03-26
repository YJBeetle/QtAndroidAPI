#pragma once

#ifndef ANDROID_UTIL_PATTERNS
#define ANDROID_UTIL_PATTERNS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::java::util::regex
{
	class Matcher;
}

namespace __jni_impl::android::util
{
	class Patterns : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DOMAIN_NAME();
		static QAndroidJniObject EMAIL_ADDRESS();
		static jstring GOOD_IRI_CHAR();
		static QAndroidJniObject IP_ADDRESS();
		static QAndroidJniObject PHONE();
		static QAndroidJniObject TOP_LEVEL_DOMAIN();
		static jstring TOP_LEVEL_DOMAIN_STR();
		static jstring TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL();
		static QAndroidJniObject WEB_URL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring concatGroups(__jni_impl::java::util::regex::Matcher arg0);
		static jstring digitsAndPlusOnly(__jni_impl::java::util::regex::Matcher arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/util/regex/Pattern.hpp"
#include "../../java/util/regex/Matcher.hpp"

namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject Patterns::DOMAIN_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"DOMAIN_NAME",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::EMAIL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"EMAIL_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	jstring Patterns::GOOD_IRI_CHAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"GOOD_IRI_CHAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Patterns::IP_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"IP_ADDRESS",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"PHONE",
			"Ljava/util/regex/Pattern;"
		);
	}
	QAndroidJniObject Patterns::TOP_LEVEL_DOMAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN",
			"Ljava/util/regex/Pattern;"
		);
	}
	jstring Patterns::TOP_LEVEL_DOMAIN_STR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Patterns::TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Patterns::WEB_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Patterns",
			"WEB_URL",
			"Ljava/util/regex/Pattern;"
		);
	}
	
	// Constructors
	void Patterns::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Patterns",
			"(V)V");
	}
	
	// Methods
	jstring Patterns::concatGroups(__jni_impl::java::util::regex::Matcher arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Patterns",
			"concatGroups",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Patterns::digitsAndPlusOnly(__jni_impl::java::util::regex::Matcher arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Patterns",
			"digitsAndPlusOnly",
			"(Ljava/util/regex/Matcher;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Patterns : public __jni_impl::android::util::Patterns
	{
	public:
		Patterns(QAndroidJniObject obj) { __thiz = obj; }
		Patterns()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_PATTERNS

