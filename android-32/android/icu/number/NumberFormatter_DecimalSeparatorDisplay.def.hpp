#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_DecimalSeparatorDisplay : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay ALWAYS();
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay AUTO();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatter_DecimalSeparatorDisplay(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_DecimalSeparatorDisplay(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

