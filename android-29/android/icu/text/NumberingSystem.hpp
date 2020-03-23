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
		QAndroidJniObject getName();
		static QAndroidJniObject getInstance(jint arg0, jboolean arg1, jstring arg2);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance();
		QAndroidJniObject getDescription();
		static QAndroidJniObject getInstanceByName(jstring arg0);
		static QAndroidJniObject getAvailableNames();
		static jboolean isValidDigitString(jstring arg0);
		jint getRadix();
		jboolean isAlgorithmic();
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
			"Landroid/icu/text/NumberingSystem;");
	}
	
	// Constructors
	void NumberingSystem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.NumberingSystem",
			"()V");
	}
	
	// Methods
	QAndroidJniObject NumberingSystem::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject NumberingSystem::getInstance(jint arg0, jboolean arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject NumberingSystem::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberingSystem::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberingSystem::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstance",
			"()Landroid/icu/text/NumberingSystem;");
	}
	QAndroidJniObject NumberingSystem::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject NumberingSystem::getInstanceByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getInstanceByName",
			"(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;",
			arg0);
	}
	QAndroidJniObject NumberingSystem::getAvailableNames()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberingSystem",
			"getAvailableNames",
			"()[Ljava/lang/String;");
	}
	jboolean NumberingSystem::isValidDigitString(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.text.NumberingSystem",
			"isValidDigitString",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint NumberingSystem::getRadix()
	{
		return __thiz.callMethod<jint>(
			"getRadix",
			"()I");
	}
	jboolean NumberingSystem::isAlgorithmic()
	{
		return __thiz.callMethod<jboolean>(
			"isAlgorithmic",
			"()Z");
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

