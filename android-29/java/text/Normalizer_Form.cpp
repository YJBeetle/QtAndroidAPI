#include "./Normalizer_Form.hpp"

namespace java::text
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
	
	// QAndroidJniObject forward
	Normalizer_Form::Normalizer_Form(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
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
	jarray Normalizer_Form::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"values",
			"()[Ljava/text/Normalizer$Form;"
		).object<jarray>();
	}
} // namespace java::text

