#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Formatter_BigDecimalLayoutForm.hpp"

namespace java::util
{
	// Fields
	java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::DECIMAL_FLOAT()
	{
		return getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"DECIMAL_FLOAT",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::SCIENTIFIC()
	{
		return getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"SCIENTIFIC",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	
	// QJniObject forward
	Formatter_BigDecimalLayoutForm::Formatter_BigDecimalLayoutForm(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;",
			arg0.object<jstring>()
		);
	}
	JArray Formatter_BigDecimalLayoutForm::values()
	{
		return callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"values",
			"()[Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
} // namespace java::util

