#pragma once

#ifndef ANDROID_ICU_TEXT_LISTFORMATTER
#define ANDROID_ICU_TEXT_LISTFORMATTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}

namespace __jni_impl::android::icu::text
{
	class ListFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject format(jobjectArray arg0);
		QAndroidJniObject format(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getPatternForNumItems(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void ListFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.ListFormatter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ListFormatter::format(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ListFormatter::format(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Collection;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ListFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"()Landroid/icu/text/ListFormatter;");
	}
	QAndroidJniObject ListFormatter::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ListFormatter::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ListFormatter;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ListFormatter::getPatternForNumItems(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPatternForNumItems",
			"(I)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class ListFormatter : public __jni_impl::android::icu::text::ListFormatter
	{
	public:
		ListFormatter(QAndroidJniObject obj) { __thiz = obj; }
		ListFormatter()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_LISTFORMATTER

