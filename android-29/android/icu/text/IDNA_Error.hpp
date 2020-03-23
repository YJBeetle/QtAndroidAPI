#pragma once

#ifndef ANDROID_ICU_TEXT_IDNA_ERROR
#define ANDROID_ICU_TEXT_IDNA_ERROR

#include "../../../java/lang/Enum.hpp"


namespace __jni_impl::android::icu::text
{
	class IDNA_Error : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EMPTY_LABEL();
		static QAndroidJniObject LABEL_TOO_LONG();
		static QAndroidJniObject DOMAIN_NAME_TOO_LONG();
		static QAndroidJniObject LEADING_HYPHEN();
		static QAndroidJniObject TRAILING_HYPHEN();
		static QAndroidJniObject HYPHEN_3_4();
		static QAndroidJniObject LEADING_COMBINING_MARK();
		static QAndroidJniObject DISALLOWED();
		static QAndroidJniObject PUNYCODE();
		static QAndroidJniObject LABEL_HAS_DOT();
		static QAndroidJniObject INVALID_ACE_LABEL();
		static QAndroidJniObject BIDI();
		static QAndroidJniObject CONTEXTJ();
		static QAndroidJniObject CONTEXTO_PUNCTUATION();
		static QAndroidJniObject CONTEXTO_DIGITS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject IDNA_Error::EMPTY_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"EMPTY_LABEL",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::LABEL_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::DOMAIN_NAME_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DOMAIN_NAME_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::LEADING_HYPHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::TRAILING_HYPHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"TRAILING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::HYPHEN_3_4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"HYPHEN_3_4",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::LEADING_COMBINING_MARK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_COMBINING_MARK",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::DISALLOWED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DISALLOWED",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::PUNYCODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"PUNYCODE",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::LABEL_HAS_DOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_HAS_DOT",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::INVALID_ACE_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"INVALID_ACE_LABEL",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::BIDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"BIDI",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::CONTEXTJ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTJ",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::CONTEXTO_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_PUNCTUATION",
			"Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::CONTEXTO_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_DIGITS",
			"Landroid/icu/text/IDNA$Error;");
	}
	
	// Constructors
	void IDNA_Error::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.IDNA$Error",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IDNA_Error::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"values",
			"()[Landroid/icu/text/IDNA$Error;");
	}
	QAndroidJniObject IDNA_Error::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/IDNA$Error;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class IDNA_Error : public __jni_impl::android::icu::text::IDNA_Error
	{
	public:
		IDNA_Error(QAndroidJniObject obj) { __thiz = obj; }
		IDNA_Error()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_IDNA_ERROR

