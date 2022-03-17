#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Formatter_BigDecimalLayoutForm.def.hpp"

namespace java::util
{
	// Fields
	inline java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::DECIMAL_FLOAT()
	{
		return getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"DECIMAL_FLOAT",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	inline java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::SCIENTIFIC()
	{
		return getStaticObjectField(
			"java.util.Formatter$BigDecimalLayoutForm",
			"SCIENTIFIC",
			"Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::Formatter_BigDecimalLayoutForm Formatter_BigDecimalLayoutForm::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;",
			arg0.object<jstring>()
		);
	}
	inline JArray Formatter_BigDecimalLayoutForm::values()
	{
		return callStaticObjectMethod(
			"java.util.Formatter$BigDecimalLayoutForm",
			"values",
			"()[Ljava/util/Formatter$BigDecimalLayoutForm;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Enum.hpp"

