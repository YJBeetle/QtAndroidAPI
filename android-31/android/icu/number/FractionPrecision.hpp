#pragma once

#include "./Precision.hpp"

namespace android::icu::number
{
	class Precision;
}

namespace android::icu::number
{
	class FractionPrecision : public android::icu::number::Precision
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FractionPrecision(const char *className, const char *sig, Ts...agv) : android::icu::number::Precision(className, sig, std::forward<Ts>(agv)...) {}
		FractionPrecision(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::Precision withMaxDigits(jint arg0) const;
		android::icu::number::Precision withMinDigits(jint arg0) const;
	};
} // namespace android::icu::number

