#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class Transliterator_Position;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeFilter;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}
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
	class Transliterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint FORWARD();
		static jint REVERSE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createFromRules(jstring arg0, jstring arg1, jint arg2);
		static QAndroidJniObject createFromRules(const QString &arg0, const QString &arg1, jint arg2);
		static QAndroidJniObject getAvailableIDs();
		static QAndroidJniObject getAvailableSources();
		static QAndroidJniObject getAvailableTargets(jstring arg0);
		static QAndroidJniObject getAvailableTargets(const QString &arg0);
		static QAndroidJniObject getAvailableVariants(jstring arg0, jstring arg1);
		static QAndroidJniObject getAvailableVariants(const QString &arg0, const QString &arg1);
		static jstring getDisplayName(jstring arg0);
		static jstring getDisplayName(const QString &arg0);
		static jstring getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayName(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayName(jstring arg0, __jni_impl::java::util::Locale arg1);
		static jstring getDisplayName(const QString &arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jint arg1);
		static QAndroidJniObject getInstance(const QString &arg0, jint arg1);
		void filteredTransliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jboolean arg2);
		void finishTransliteration(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1);
		jarray getElements();
		QAndroidJniObject getFilter();
		jstring getID();
		QAndroidJniObject getInverse();
		jint getMaximumContextLength();
		QAndroidJniObject getSourceSet();
		QAndroidJniObject getTargetSet();
		void setFilter(__jni_impl::android::icu::text::UnicodeFilter arg0);
		jstring toRules(jboolean arg0);
		jint transliterate(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		jstring transliterate(jstring arg0);
		jstring transliterate(const QString &arg0);
		void transliterate(__jni_impl::__JniBaseClass arg0);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jint arg2);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jstring arg2);
		void transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, const QString &arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "./Transliterator_Position.hpp"
#include "./UnicodeFilter.hpp"
#include "./UnicodeSet.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint Transliterator::FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Transliterator",
			"FORWARD"
		);
	}
	jint Transliterator::REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Transliterator",
			"REVERSE"
		);
	}
	
	// Constructors
	void Transliterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Transliterator::createFromRules(jstring arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"createFromRules",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Transliterator::createFromRules(const QString &arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"createFromRules",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Transliterator::getAvailableIDs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableIDs",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Transliterator::getAvailableSources()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableSources",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject Transliterator::getAvailableTargets(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject Transliterator::getAvailableTargets(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableTargets",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Transliterator::getAvailableVariants(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transliterator::getAvailableVariants(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getAvailableVariants",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Transliterator::getDisplayName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Transliterator::getDisplayName(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Transliterator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			arg0
		);
	}
	QAndroidJniObject Transliterator::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/Transliterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Transliterator::getInstance(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Transliterator::getInstance(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Transliterator",
			"getInstance",
			"(Ljava/lang/String;I)Landroid/icu/text/Transliterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Transliterator::filteredTransliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"filteredTransliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Transliterator::finishTransliteration(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1)
	{
		__thiz.callMethod<void>(
			"finishTransliteration",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jarray Transliterator::getElements()
	{
		return __thiz.callObjectMethod(
			"getElements",
			"()[Landroid/icu/text/Transliterator;"
		).object<jarray>();
	}
	QAndroidJniObject Transliterator::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/icu/text/UnicodeFilter;"
		);
	}
	jstring Transliterator::getID()
	{
		return __thiz.callObjectMethod(
			"getID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Transliterator::getInverse()
	{
		return __thiz.callObjectMethod(
			"getInverse",
			"()Landroid/icu/text/Transliterator;"
		);
	}
	jint Transliterator::getMaximumContextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaximumContextLength",
			"()I"
		);
	}
	QAndroidJniObject Transliterator::getSourceSet()
	{
		return __thiz.callObjectMethod(
			"getSourceSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	QAndroidJniObject Transliterator::getTargetSet()
	{
		return __thiz.callObjectMethod(
			"getTargetSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	void Transliterator::setFilter(__jni_impl::android::icu::text::UnicodeFilter arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Landroid/icu/text/UnicodeFilter;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Transliterator::toRules(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toRules",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring Transliterator::transliterate(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Transliterator::transliterate(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"transliterate",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;)V",
			arg0.__jniObject().object()
		);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Transliterator::transliterate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::icu::text::Transliterator_Position arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"transliterate",
			"(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
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

