#pragma once

#ifndef ANDROID_ICU_TEXT_IDNA
#define ANDROID_ICU_TEXT_IDNA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::android::icu::text
{
	class IDNA_Info;
}

namespace __jni_impl::android::icu::text
{
	class IDNA : public __JniBaseClass
	{
	public:
		// Fields
		static jint CHECK_BIDI();
		static jint CHECK_CONTEXTJ();
		static jint CHECK_CONTEXTO();
		static jint DEFAULT();
		static jint NONTRANSITIONAL_TO_ASCII();
		static jint NONTRANSITIONAL_TO_UNICODE();
		static jint USE_STD3_RULES();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getUTS46Instance(jint arg0);
		QAndroidJniObject labelToASCII(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2);
		QAndroidJniObject labelToUnicode(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2);
		QAndroidJniObject nameToASCII(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2);
		QAndroidJniObject nameToUnicode(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/lang/StringBuilder.hpp"
#include "IDNA_Info.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint IDNA::CHECK_BIDI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_BIDI");
	}
	jint IDNA::CHECK_CONTEXTJ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTJ");
	}
	jint IDNA::CHECK_CONTEXTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTO");
	}
	jint IDNA::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"DEFAULT");
	}
	jint IDNA::NONTRANSITIONAL_TO_ASCII()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_ASCII");
	}
	jint IDNA::NONTRANSITIONAL_TO_UNICODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_UNICODE");
	}
	jint IDNA::USE_STD3_RULES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"USE_STD3_RULES");
	}
	
	// Constructors
	void IDNA::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.IDNA",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IDNA::getUTS46Instance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA",
			"getUTS46Instance",
			"(I)Landroid/icu/text/IDNA;",
			arg0);
	}
	QAndroidJniObject IDNA::labelToASCII(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"labelToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject IDNA::labelToUnicode(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"labelToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject IDNA::nameToASCII(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"nameToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject IDNA::nameToUnicode(jstring arg0, __jni_impl::java::lang::StringBuilder arg1, __jni_impl::android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"nameToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class IDNA : public __jni_impl::android::icu::text::IDNA
	{
	public:
		IDNA(QAndroidJniObject obj) { __thiz = obj; }
		IDNA()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_IDNA

