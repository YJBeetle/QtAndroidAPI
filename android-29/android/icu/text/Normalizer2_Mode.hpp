#pragma once

#ifndef ANDROID_ICU_TEXT_NORMALIZER2_MODE
#define ANDROID_ICU_TEXT_NORMALIZER2_MODE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class Normalizer2_Mode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject COMPOSE();
		static QAndroidJniObject COMPOSE_CONTIGUOUS();
		static QAndroidJniObject DECOMPOSE();
		static QAndroidJniObject FCD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject Normalizer2_Mode::COMPOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::COMPOSE_CONTIGUOUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE_CONTIGUOUS",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::DECOMPOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"DECOMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::FCD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"FCD",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	
	// Constructors
	void Normalizer2_Mode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Normalizer2$Mode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Normalizer2_Mode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;",
			arg0
		);
	}
	QAndroidJniObject Normalizer2_Mode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Normalizer2_Mode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"values",
			"()[Landroid/icu/text/Normalizer2$Mode;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Normalizer2_Mode : public __jni_impl::android::icu::text::Normalizer2_Mode
	{
	public:
		Normalizer2_Mode(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer2_Mode()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NORMALIZER2_MODE

