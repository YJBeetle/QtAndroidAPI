#include "./IDNA_Error.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject IDNA_Error::BIDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"BIDI",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::CONTEXTJ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTJ",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::CONTEXTO_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_DIGITS",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::CONTEXTO_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"CONTEXTO_PUNCTUATION",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::DISALLOWED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DISALLOWED",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::DOMAIN_NAME_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"DOMAIN_NAME_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::EMPTY_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"EMPTY_LABEL",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::HYPHEN_3_4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"HYPHEN_3_4",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::INVALID_ACE_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"INVALID_ACE_LABEL",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::LABEL_HAS_DOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_HAS_DOT",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::LABEL_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LABEL_TOO_LONG",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::LEADING_COMBINING_MARK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_COMBINING_MARK",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::LEADING_HYPHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"LEADING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::PUNYCODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"PUNYCODE",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	QAndroidJniObject IDNA_Error::TRAILING_HYPHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.IDNA$Error",
			"TRAILING_HYPHEN",
			"Landroid/icu/text/IDNA$Error;"
		);
	}
	
	// QAndroidJniObject forward
	IDNA_Error::IDNA_Error(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject IDNA_Error::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/IDNA$Error;",
			arg0
		);
	}
	jarray IDNA_Error::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA$Error",
			"values",
			"()[Landroid/icu/text/IDNA$Error;"
		).object<jarray>();
	}
} // namespace android::icu::text

