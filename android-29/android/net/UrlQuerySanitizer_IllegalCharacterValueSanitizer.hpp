#pragma once

#ifndef ANDROID_NET_URLQUERYSANITIZER_ILLEGALCHARACTERVALUESANITIZER
#define ANDROID_NET_URLQUERYSANITIZER_ILLEGALCHARACTERVALUESANITIZER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class UrlQuerySanitizer_IllegalCharacterValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL();
		static jint ALL_BUT_NUL_LEGAL();
		static jint ALL_BUT_WHITESPACE_LEGAL();
		static jint ALL_ILLEGAL();
		static jint ALL_OK();
		static jint ALL_WHITESPACE_OK();
		static jint AMP_AND_SPACE_LEGAL();
		static jint AMP_LEGAL();
		static jint AMP_OK();
		static jint DQUOTE_OK();
		static jint GT_OK();
		static jint LT_OK();
		static jint NON_7_BIT_ASCII_OK();
		static jint NUL_OK();
		static jint OTHER_WHITESPACE_OK();
		static jint PCT_OK();
		static jint SCRIPT_URL_OK();
		static jint SPACE_LEGAL();
		static jint SPACE_OK();
		static jint SQUOTE_OK();
		static jint URL_AND_SPACE_LEGAL();
		static jint URL_LEGAL();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jstring sanitize(jstring arg0);
		jstring sanitize(const QString &arg0);
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_NUL_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_NUL_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_BUT_WHITESPACE_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_BUT_WHITESPACE_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_ILLEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_ILLEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::ALL_WHITESPACE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"ALL_WHITESPACE_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_AND_SPACE_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_AND_SPACE_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::AMP_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"AMP_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::DQUOTE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"DQUOTE_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::GT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"GT_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::LT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"LT_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::NON_7_BIT_ASCII_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"NON_7_BIT_ASCII_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::NUL_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"NUL_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::OTHER_WHITESPACE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"OTHER_WHITESPACE_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::PCT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"PCT_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SCRIPT_URL_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SCRIPT_URL_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SPACE_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SPACE_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SPACE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SPACE_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::SQUOTE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"SQUOTE_OK"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::URL_AND_SPACE_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"URL_AND_SPACE_LEGAL"
		);
	}
	jint UrlQuerySanitizer_IllegalCharacterValueSanitizer::URL_LEGAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"URL_LEGAL"
		);
	}
	
	// Constructors
	void UrlQuerySanitizer_IllegalCharacterValueSanitizer::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer$IllegalCharacterValueSanitizer",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring UrlQuerySanitizer_IllegalCharacterValueSanitizer::sanitize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"sanitize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UrlQuerySanitizer_IllegalCharacterValueSanitizer::sanitize(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"sanitize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class UrlQuerySanitizer_IllegalCharacterValueSanitizer : public __jni_impl::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer
	{
	public:
		UrlQuerySanitizer_IllegalCharacterValueSanitizer(QAndroidJniObject obj) { __thiz = obj; }
		UrlQuerySanitizer_IllegalCharacterValueSanitizer(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_URLQUERYSANITIZER_ILLEGALCHARACTERVALUESANITIZER

