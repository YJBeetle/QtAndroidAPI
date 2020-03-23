#pragma once

#ifndef ANDROID_ICU_TEXT_TRANSLITERATOR
#define ANDROID_ICU_TEXT_TRANSLITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class UnicodeFilter;
}
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
	class Transliterator_Position;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}

namespace __jni_impl::android::icu::text
{
	class Transliterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint FORWARD();
		static jint REVERSE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jint arg1);
		void setFilter(__jni_impl::android::icu::text::UnicodeFilter arg0);
		QAndroidJniObject getFilter();
		QAndroidJniObject getID();
		static QAndroidJniObject getDisplayName(jstring arg0);
		static QAndroidJniObject getDisplayName(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getAvailableIDs();
		QAndroidJniObject getElements();
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jstring arg2);
		jint transliterate(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		void transliterate(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject transliterate(jstring arg0);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jint arg2);
		void finishTransliteration(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1);
		void filteredTransliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jboolean arg2);
		jint getMaximumContextLength();
		static QAndroidJniObject createFromRules(jstring arg0, jstring arg1, jint arg2);
		QAndroidJniObject toRules(jboolean arg0);
		QAndroidJniObject getSourceSet();
		QAndroidJniObject getTargetSet();
		QAndroidJniObject getInverse();
		static QAndroidJniObject getAvailableSources();
		static QAndroidJniObject getAvailableTargets(jstring arg0);
		static QAndroidJniObject getAvailableVariants(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "UnicodeFilter.hpp"
#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"
#include "Transliterator_Position.hpp"
#include "UnicodeSet.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint Transliterator::FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Transliterator",
			"FORWARD");
	}
	jint Transliterator::REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Transliterator",
			"REVERSE");
	}
	
	// Constructors
	void Transliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Transliterator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			arg0);
	}
	QAndroidJniObject Transliterator::getInstance(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1);
	}
	void Transliterator::setFilter(__jni_impl::android::icu::text::UnicodeFilter arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Landroid/icu/text/UnicodeFilter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Transliterator::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/icu/text/UnicodeFilter;");
	}
	QAndroidJniObject Transliterator::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Transliterator::getDisplayName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Transliterator::getDisplayName(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Transliterator::getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Transliterator::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableIDs",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Transliterator::getElements()
	{
		return __thiz.callObjectMethod(
			"getElements",
			"()[Landroid/icu/text/Transliterator;");
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jint Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Transliterator::transliterate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Transliterator::finishTransliteration(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1)
	{
		__thiz.callMethod<void>(
			"finishTransliteration",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Transliterator::filteredTransliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"filteredTransliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jint Transliterator::getMaximumContextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaximumContextLength",
			"()I");
	}
	QAndroidJniObject Transliterator::createFromRules(jstring arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"createFromRules",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Transliterator::toRules(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toRules",
			"(Z)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Transliterator::getSourceSet()
	{
		return __thiz.callObjectMethod(
			"getSourceSet",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject Transliterator::getTargetSet()
	{
		return __thiz.callObjectMethod(
			"getTargetSet",
			"()Landroid/icu/text/UnicodeSet;");
	}
	QAndroidJniObject Transliterator::getInverse()
	{
		return __thiz.callObjectMethod(
			"getInverse",
			"()Landroid/icu/text/Transliterator;");
	}
	QAndroidJniObject Transliterator::getAvailableSources()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableSources",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Transliterator::getAvailableTargets(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0);
	}
	QAndroidJniObject Transliterator::getAvailableVariants(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Transliterator : public __jni_impl::android::icu::text::Transliterator
	{
	public:
		Transliterator(QAndroidJniObject obj) { __thiz = obj; }
		Transliterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_TRANSLITERATOR

