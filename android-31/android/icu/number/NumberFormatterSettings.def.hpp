#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class IntegerWidth;
}
namespace android::icu::number
{
	class Notation;
}
namespace android::icu::number
{
	class NumberFormatter_DecimalSeparatorDisplay;
}
namespace android::icu::number
{
	class NumberFormatter_GroupingStrategy;
}
namespace android::icu::number
{
	class NumberFormatter_SignDisplay;
}
namespace android::icu::number
{
	class NumberFormatter_UnitWidth;
}
namespace android::icu::number
{
	class Precision;
}
namespace android::icu::number
{
	class Scale;
}
namespace android::icu::text
{
	class DecimalFormatSymbols;
}
namespace android::icu::text
{
	class NumberingSystem;
}
namespace android::icu::util
{
	class MeasureUnit;
}
class JObject;
namespace java::math
{
	class RoundingMode;
}

namespace android::icu::number
{
	class NumberFormatterSettings : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormatterSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatterSettings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::number::NumberFormatterSettings decimal(android::icu::number::NumberFormatter_DecimalSeparatorDisplay arg0) const;
		jboolean equals(JObject arg0) const;
		android::icu::number::NumberFormatterSettings grouping(android::icu::number::NumberFormatter_GroupingStrategy arg0) const;
		jint hashCode() const;
		android::icu::number::NumberFormatterSettings integerWidth(android::icu::number::IntegerWidth arg0) const;
		android::icu::number::NumberFormatterSettings notation(android::icu::number::Notation arg0) const;
		android::icu::number::NumberFormatterSettings perUnit(android::icu::util::MeasureUnit arg0) const;
		android::icu::number::NumberFormatterSettings precision(android::icu::number::Precision arg0) const;
		android::icu::number::NumberFormatterSettings roundingMode(java::math::RoundingMode arg0) const;
		android::icu::number::NumberFormatterSettings scale(android::icu::number::Scale arg0) const;
		android::icu::number::NumberFormatterSettings sign(android::icu::number::NumberFormatter_SignDisplay arg0) const;
		android::icu::number::NumberFormatterSettings symbols(android::icu::text::DecimalFormatSymbols arg0) const;
		android::icu::number::NumberFormatterSettings symbols(android::icu::text::NumberingSystem arg0) const;
		android::icu::number::NumberFormatterSettings unit(android::icu::util::MeasureUnit arg0) const;
		android::icu::number::NumberFormatterSettings unitWidth(android::icu::number::NumberFormatter_UnitWidth arg0) const;
	};
} // namespace android::icu::number

