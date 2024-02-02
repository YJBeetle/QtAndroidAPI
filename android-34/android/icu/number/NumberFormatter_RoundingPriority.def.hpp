#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_RoundingPriority : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_RoundingPriority RELAXED();
		static android::icu::number::NumberFormatter_RoundingPriority STRICT();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatter_RoundingPriority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_RoundingPriority(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_RoundingPriority valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

