#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberFormatter_UnitWidth : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_UnitWidth FULL_NAME();
		static android::icu::number::NumberFormatter_UnitWidth HIDDEN();
		static android::icu::number::NumberFormatter_UnitWidth ISO_CODE();
		static android::icu::number::NumberFormatter_UnitWidth NARROW();
		static android::icu::number::NumberFormatter_UnitWidth SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormatter_UnitWidth(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_UnitWidth(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_UnitWidth valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

