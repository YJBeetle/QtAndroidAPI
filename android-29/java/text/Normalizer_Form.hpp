#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::text
{
	class Normalizer_Form : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NFC();
		static QAndroidJniObject NFD();
		static QAndroidJniObject NFKC();
		static QAndroidJniObject NFKD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	QAndroidJniObject Normalizer_Form::NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFKC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	QAndroidJniObject Normalizer_Form::NFKD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	
	// Constructors
	void Normalizer_Form::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.Normalizer$Form",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Normalizer_Form::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"valueOf",
			"(Ljava/lang/String;)Ljava/text/Normalizer$Form;",
			arg0
		);
	}
	QAndroidJniObject Normalizer_Form::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"valueOf",
			"(Ljava/lang/String;)Ljava/text/Normalizer$Form;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Normalizer_Form::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"values",
			"()[Ljava/text/Normalizer$Form;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class Normalizer_Form : public __jni_impl::java::text::Normalizer_Form
	{
	public:
		Normalizer_Form(QAndroidJniObject obj) { __thiz = obj; }
		Normalizer_Form()
		{
			__constructor();
		}
	};
} // namespace java::text

