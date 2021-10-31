#include "./Formatter_BigDecimalLayoutForm.hpp"

namespace java::util
{
	// Fields
	QAndroidJniObject Formatter_BigDecimalLayoutForm::DECIMAL_FLOAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"DECIMAL_FLOAT",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	QAndroidJniObject Formatter_BigDecimalLayoutForm::SCIENTIFIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"SCIENTIFIC",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	
	// QAndroidJniObject forward
	Formatter_BigDecimalLayoutForm::Formatter_BigDecimalLayoutForm(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Formatter_BigDecimalLayoutForm::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;",
			arg0
		);
	}
	jarray Formatter_BigDecimalLayoutForm::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"values",
			"()[Ljava/util/Formatter$BigDecimalLayoutForm;"
		).object<jarray>();
	}
} // namespace java::util

