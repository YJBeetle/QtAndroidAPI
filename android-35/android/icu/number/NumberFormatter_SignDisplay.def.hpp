#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_SignDisplay : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_SignDisplay ACCOUNTING();
		static android::icu::number::NumberFormatter_SignDisplay ACCOUNTING_ALWAYS();
		static android::icu::number::NumberFormatter_SignDisplay ACCOUNTING_EXCEPT_ZERO();
		static android::icu::number::NumberFormatter_SignDisplay ACCOUNTING_NEGATIVE();
		static android::icu::number::NumberFormatter_SignDisplay ALWAYS();
		static android::icu::number::NumberFormatter_SignDisplay AUTO();
		static android::icu::number::NumberFormatter_SignDisplay EXCEPT_ZERO();
		static android::icu::number::NumberFormatter_SignDisplay NEGATIVE();
		static android::icu::number::NumberFormatter_SignDisplay NEVER();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatter_SignDisplay(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_SignDisplay(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_SignDisplay valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

