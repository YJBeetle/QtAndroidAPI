#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class Currency_CurrencyUsage : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::Currency_CurrencyUsage CASH();
		static android::icu::util::Currency_CurrencyUsage STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Currency_CurrencyUsage(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Currency_CurrencyUsage(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::Currency_CurrencyUsage valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

