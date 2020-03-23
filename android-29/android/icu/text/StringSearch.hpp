#pragma once

#ifndef ANDROID_ICU_TEXT_STRINGSEARCH
#define ANDROID_ICU_TEXT_STRINGSEARCH

#include "SearchIterator.hpp"

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
	class RuleBasedCollator;
}
namespace __jni_impl::android::icu::text
{
	class BreakIterator;
}

namespace __jni_impl::android::icu::text
{
	class StringSearch : public __jni_impl::android::icu::text::SearchIterator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::util::ULocale arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2, __jni_impl::android::icu::text::BreakIterator arg3);
		
		// Methods
		void setTarget(__jni_impl::__JniBaseClass arg0);
		void reset();
		jint getIndex();
		void setIndex(jint arg0);
		jboolean isCanonical();
		void setPattern(jstring arg0);
		QAndroidJniObject getPattern();
		QAndroidJniObject getCollator();
		void setCollator(__jni_impl::android::icu::text::RuleBasedCollator arg0);
		void setCanonical(jboolean arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "RuleBasedCollator.hpp"
#include "BreakIterator.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void StringSearch::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void StringSearch::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void StringSearch::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void StringSearch::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void StringSearch::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2, __jni_impl::android::icu::text::BreakIterator arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	
	// Methods
	void StringSearch::setTarget(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object());
	}
	void StringSearch::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	jint StringSearch::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	void StringSearch::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0);
	}
	jboolean StringSearch::isCanonical()
	{
		return __thiz.callMethod<jboolean>(
			"isCanonical",
			"()Z");
	}
	void StringSearch::setPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject StringSearch::getPattern()
	{
		return __thiz.callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StringSearch::getCollator()
	{
		return __thiz.callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;");
	}
	void StringSearch::setCollator(__jni_impl::android::icu::text::RuleBasedCollator arg0)
	{
		__thiz.callMethod<void>(
			"setCollator",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.__jniObject().object());
	}
	void StringSearch::setCanonical(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanonical",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class StringSearch : public __jni_impl::android::icu::text::StringSearch
	{
	public:
		StringSearch(QAndroidJniObject obj) { __thiz = obj; }
		StringSearch(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StringSearch(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::util::ULocale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		StringSearch(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		StringSearch(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		StringSearch(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::icu::text::RuleBasedCollator arg2, __jni_impl::android::icu::text::BreakIterator arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_STRINGSEARCH

