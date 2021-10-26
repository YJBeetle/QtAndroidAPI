#pragma once

#ifndef ANDROID_ICU_TEXT_NUMBERINGSYSTEM
#define ANDROID_ICU_TEXT_NUMBERINGSYSTEM

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
	class NumberingSystem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LATIN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		static QAndroidJniObject getInstance(jint arg0, jboolean arg1, jstring arg2);
		static QAndroidJniObject getInstance(jint arg0, jboolean arg1, const QString &arg2);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstanceByName(jstring arg0);
		static QAndroidJniObject getInstanceByName(const QString &arg0);
		static jarray getAvailableNames();
		static jboolean isValidDigitString(jstring arg0);
		static jboolean isValidDigitString(const QString &arg0);
		jint getRadix();
		jboolean isAlgorithmic();
		jstring getDescription();
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject NumberingSystem::LATIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.NumberingSystem",
			"LATIN",
			"Landroid/icu/text/NumberingSystem;"
		);
	}
	
	// Constructors
	void NumberingSystem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.NumberingSystem",
			"()V"
		);
	}
	
	// Methods
	jstring NumberingSystem::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NumberingSystem::getInstance(jint arg0, jboolean arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(jint arg0, jboolean arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberingSystem::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberingSystem::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"()Landroid/icu/text/NumberingSystem;"
		);
	}
	QAndroidJniObject NumberingSystem::getInstanceByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0
		);
	}
	QAndroidJniObject NumberingSystem::getInstanceByName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray NumberingSystem::getAvailableNames()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getAvailableNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean NumberingSystem::isValidDigitString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean NumberingSystem::isValidDigitString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint NumberingSystem::getRadix()
	{
		return __thiz.callMethod<jint>(
			"getRadix",
			"()I"
		);
	}
	jboolean NumberingSystem::isAlgorithmic()
	{
		return __thiz.callMethod<jboolean>(
			"isAlgorithmic",
			"()Z"
		);
	}
	jstring NumberingSystem::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class NumberingSystem : public __jni_impl::android::icu::text::NumberingSystem
	{
	public:
		NumberingSystem(QAndroidJniObject obj) { __thiz = obj; }
		NumberingSystem()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NUMBERINGSYSTEM

