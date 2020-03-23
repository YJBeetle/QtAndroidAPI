#pragma once

#ifndef ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES
#define ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class LocaleDisplayNames_DialectHandling;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext_Type;
}

namespace __jni_impl::android::icu::text
{
	class LocaleDisplayNames : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::LocaleDisplayNames_DialectHandling arg1);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, jarray arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, jarray arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getLocale();
		QAndroidJniObject getDialectHandling();
		QAndroidJniObject localeDisplayName(jstring arg0);
		QAndroidJniObject localeDisplayName(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject localeDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject languageDisplayName(jstring arg0);
		QAndroidJniObject scriptDisplayName(jint arg0);
		QAndroidJniObject scriptDisplayName(jstring arg0);
		QAndroidJniObject regionDisplayName(jstring arg0);
		QAndroidJniObject variantDisplayName(jstring arg0);
		QAndroidJniObject keyDisplayName(jstring arg0);
		QAndroidJniObject keyValueDisplayName(jstring arg0, jstring arg1);
		QAndroidJniObject getUiList(__jni_impl::__JniBaseClass arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject getUiListCompareWholeItems(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "LocaleDisplayNames_DialectHandling.hpp"
#include "../../../java/util/Locale.hpp"
#include "DisplayContext.hpp"
#include "DisplayContext_Type.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void LocaleDisplayNames::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.LocaleDisplayNames",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LocaleDisplayNames::getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::LocaleDisplayNames_DialectHandling arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::getInstance(__jni_impl::android::icu::util::ULocale arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject LocaleDisplayNames::getInstance(__jni_impl::java::util::Locale arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject LocaleDisplayNames::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0)
	{
		return __thiz.callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject LocaleDisplayNames::getDialectHandling()
	{
		return __thiz.callObjectMethod(
			"getDialectHandling",
			"()Landroid/icu/text/LocaleDisplayNames$DialectHandling;");
	}
	QAndroidJniObject LocaleDisplayNames::localeDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"localeDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::localeDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"localeDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::localeDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"localeDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::languageDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"languageDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::scriptDisplayName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"scriptDisplayName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::scriptDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"scriptDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::regionDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"regionDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::variantDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"variantDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::keyDisplayName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"keyDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject LocaleDisplayNames::keyValueDisplayName(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"keyValueDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject LocaleDisplayNames::getUiList(__jni_impl::__JniBaseClass arg0, jboolean arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"getUiList",
			"(Ljava/util/Set;ZLjava/util/Comparator;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject LocaleDisplayNames::getUiListCompareWholeItems(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getUiListCompareWholeItems",
			"(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class LocaleDisplayNames : public __jni_impl::android::icu::text::LocaleDisplayNames
	{
	public:
		LocaleDisplayNames(QAndroidJniObject obj) { __thiz = obj; }
		LocaleDisplayNames()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_LOCALEDISPLAYNAMES

