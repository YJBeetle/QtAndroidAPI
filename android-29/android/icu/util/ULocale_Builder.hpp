#pragma once

#ifndef ANDROID_ICU_UTIL_ULOCALE_BUILDER
#define ANDROID_ICU_UTIL_ULOCALE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}

namespace __jni_impl::android::icu::util
{
	class ULocale_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clear();
		QAndroidJniObject build();
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLocale(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject clearExtensions();
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setScript(jstring arg0);
		QAndroidJniObject setRegion(jstring arg0);
		QAndroidJniObject setVariant(jstring arg0);
		QAndroidJniObject addUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject removeUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		QAndroidJniObject setExtension(jchar arg0, jstring arg1);
	};
} // namespace __jni_impl::android::icu::util

#include "ULocale.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void ULocale_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ULocale_Builder::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	QAndroidJniObject ULocale_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale_Builder::setLanguageTag(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::setLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ULocale_Builder::clearExtensions()
	{
		return __thiz.callObjectMethod(
			"clearExtensions",
			"()Landroid/icu/util/ULocale$Builder;"
		);
	}
	QAndroidJniObject ULocale_Builder::setLanguage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLanguage",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::setScript(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setScript",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::setRegion(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setRegion",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::setVariant(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setVariant",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::addUnicodeLocaleAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::removeUnicodeLocaleAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeUnicodeLocaleAttribute",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0
		);
	}
	QAndroidJniObject ULocale_Builder::setUnicodeLocaleKeyword(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setUnicodeLocaleKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ULocale_Builder::setExtension(jchar arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(CLjava/lang/String;)Landroid/icu/util/ULocale$Builder;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ULocale_Builder : public __jni_impl::android::icu::util::ULocale_Builder
	{
	public:
		ULocale_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ULocale_Builder()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_ULOCALE_BUILDER

