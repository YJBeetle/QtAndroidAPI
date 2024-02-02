#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_TrailingZeroDisplay : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_TrailingZeroDisplay AUTO();
		static android::icu::number::NumberFormatter_TrailingZeroDisplay HIDE_IF_WHOLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatter_TrailingZeroDisplay(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_TrailingZeroDisplay(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_TrailingZeroDisplay valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

