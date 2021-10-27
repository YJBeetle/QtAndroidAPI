#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
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
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jstring format(jobjectArray arg0);
		jstring format(__jni_impl::__JniBaseClass arg0);
		jstring getPatternForNumItems(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"

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
	QAndroidJniObject ListFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"()Landroid/icu/text/ListFormatter;"
		);
	}
	QAndroidJniObject ListFormatter::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ListFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ListFormatter::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ListFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/ListFormatter;",
			arg0.__jniObject().object()
		);
	}
	jstring ListFormatter::format(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"([Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ListFormatter::format(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Collection;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ListFormatter::getPatternForNumItems(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPatternForNumItems",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
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

