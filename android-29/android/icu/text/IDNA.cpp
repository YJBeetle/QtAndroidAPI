#include "./IDNA_Info.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "./IDNA.hpp"

namespace android::icu::text
{
	// Fields
	jint IDNA::CHECK_BIDI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_BIDI"
		);
	}
	jint IDNA::CHECK_CONTEXTJ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTJ"
		);
	}
	jint IDNA::CHECK_CONTEXTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"CHECK_CONTEXTO"
		);
	}
	jint IDNA::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"DEFAULT"
		);
	}
	jint IDNA::NONTRANSITIONAL_TO_ASCII()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_ASCII"
		);
	}
	jint IDNA::NONTRANSITIONAL_TO_UNICODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"NONTRANSITIONAL_TO_UNICODE"
		);
	}
	jint IDNA::USE_STD3_RULES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.IDNA",
			"USE_STD3_RULES"
		);
	}
	
	IDNA::IDNA(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject IDNA::getUTS46Instance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.IDNA",
			"getUTS46Instance",
			"(I)Landroid/icu/text/IDNA;",
			arg0
		);
	}
	QAndroidJniObject IDNA::labelToASCII(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"labelToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject IDNA::labelToUnicode(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"labelToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject IDNA::nameToASCII(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"nameToASCII",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject IDNA::nameToUnicode(jstring arg0, java::lang::StringBuilder arg1, android::icu::text::IDNA_Info arg2)
	{
		return __thiz.callObjectMethod(
			"nameToUnicode",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::icu::text

