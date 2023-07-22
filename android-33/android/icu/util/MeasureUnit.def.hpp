#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class MeasureUnit_Complexity;
}
namespace android::icu::util
{
	class TimeUnit;
}
class JObject;
class JString;

namespace android::icu::util
{
	class MeasureUnit : public JObject
	{
	public:
		// Fields
		static android::icu::util::MeasureUnit ACRE();
		static android::icu::util::MeasureUnit ACRE_FOOT();
		static android::icu::util::MeasureUnit AMPERE();
		static android::icu::util::MeasureUnit ARC_MINUTE();
		static android::icu::util::MeasureUnit ARC_SECOND();
		static android::icu::util::MeasureUnit ASTRONOMICAL_UNIT();
		static android::icu::util::MeasureUnit ATMOSPHERE();
		static android::icu::util::MeasureUnit BIT();
		static android::icu::util::MeasureUnit BUSHEL();
		static android::icu::util::MeasureUnit BYTE();
		static android::icu::util::MeasureUnit CALORIE();
		static android::icu::util::MeasureUnit CANDELA();
		static android::icu::util::MeasureUnit CARAT();
		static android::icu::util::MeasureUnit CELSIUS();
		static android::icu::util::MeasureUnit CENTILITER();
		static android::icu::util::MeasureUnit CENTIMETER();
		static android::icu::util::MeasureUnit CENTURY();
		static android::icu::util::MeasureUnit CUBIC_CENTIMETER();
		static android::icu::util::MeasureUnit CUBIC_FOOT();
		static android::icu::util::MeasureUnit CUBIC_INCH();
		static android::icu::util::MeasureUnit CUBIC_KILOMETER();
		static android::icu::util::MeasureUnit CUBIC_METER();
		static android::icu::util::MeasureUnit CUBIC_MILE();
		static android::icu::util::MeasureUnit CUBIC_YARD();
		static android::icu::util::MeasureUnit CUP();
		static android::icu::util::MeasureUnit CUP_METRIC();
		static android::icu::util::TimeUnit DAY();
		static android::icu::util::MeasureUnit DECADE();
		static android::icu::util::MeasureUnit DECILITER();
		static android::icu::util::MeasureUnit DECIMETER();
		static android::icu::util::MeasureUnit DEGREE();
		static android::icu::util::MeasureUnit DOT();
		static android::icu::util::MeasureUnit DOT_PER_CENTIMETER();
		static android::icu::util::MeasureUnit DOT_PER_INCH();
		static android::icu::util::MeasureUnit EM();
		static android::icu::util::MeasureUnit FAHRENHEIT();
		static android::icu::util::MeasureUnit FATHOM();
		static android::icu::util::MeasureUnit FLUID_OUNCE();
		static android::icu::util::MeasureUnit FOODCALORIE();
		static android::icu::util::MeasureUnit FOOT();
		static android::icu::util::MeasureUnit FURLONG();
		static android::icu::util::MeasureUnit GALLON();
		static android::icu::util::MeasureUnit GALLON_IMPERIAL();
		static android::icu::util::MeasureUnit GENERIC_TEMPERATURE();
		static android::icu::util::MeasureUnit GIGABIT();
		static android::icu::util::MeasureUnit GIGABYTE();
		static android::icu::util::MeasureUnit GIGAHERTZ();
		static android::icu::util::MeasureUnit GIGAWATT();
		static android::icu::util::MeasureUnit GRAM();
		static android::icu::util::MeasureUnit G_FORCE();
		static android::icu::util::MeasureUnit HECTARE();
		static android::icu::util::MeasureUnit HECTOLITER();
		static android::icu::util::MeasureUnit HECTOPASCAL();
		static android::icu::util::MeasureUnit HERTZ();
		static android::icu::util::MeasureUnit HORSEPOWER();
		static android::icu::util::TimeUnit HOUR();
		static android::icu::util::MeasureUnit INCH();
		static android::icu::util::MeasureUnit INCH_HG();
		static android::icu::util::MeasureUnit JOULE();
		static android::icu::util::MeasureUnit KARAT();
		static android::icu::util::MeasureUnit KELVIN();
		static android::icu::util::MeasureUnit KILOBIT();
		static android::icu::util::MeasureUnit KILOBYTE();
		static android::icu::util::MeasureUnit KILOCALORIE();
		static android::icu::util::MeasureUnit KILOGRAM();
		static android::icu::util::MeasureUnit KILOHERTZ();
		static android::icu::util::MeasureUnit KILOJOULE();
		static android::icu::util::MeasureUnit KILOMETER();
		static android::icu::util::MeasureUnit KILOMETER_PER_HOUR();
		static android::icu::util::MeasureUnit KILOWATT();
		static android::icu::util::MeasureUnit KILOWATT_HOUR();
		static android::icu::util::MeasureUnit KNOT();
		static android::icu::util::MeasureUnit LIGHT_YEAR();
		static android::icu::util::MeasureUnit LITER();
		static android::icu::util::MeasureUnit LITER_PER_100KILOMETERS();
		static android::icu::util::MeasureUnit LITER_PER_KILOMETER();
		static android::icu::util::MeasureUnit LUMEN();
		static android::icu::util::MeasureUnit LUX();
		static android::icu::util::MeasureUnit MEGABIT();
		static android::icu::util::MeasureUnit MEGABYTE();
		static android::icu::util::MeasureUnit MEGAHERTZ();
		static android::icu::util::MeasureUnit MEGALITER();
		static android::icu::util::MeasureUnit MEGAPIXEL();
		static android::icu::util::MeasureUnit MEGAWATT();
		static android::icu::util::MeasureUnit METER();
		static android::icu::util::MeasureUnit METER_PER_SECOND();
		static android::icu::util::MeasureUnit METER_PER_SECOND_SQUARED();
		static android::icu::util::MeasureUnit METRIC_TON();
		static android::icu::util::MeasureUnit MICROGRAM();
		static android::icu::util::MeasureUnit MICROMETER();
		static android::icu::util::MeasureUnit MICROSECOND();
		static android::icu::util::MeasureUnit MILE();
		static android::icu::util::MeasureUnit MILE_PER_GALLON();
		static android::icu::util::MeasureUnit MILE_PER_GALLON_IMPERIAL();
		static android::icu::util::MeasureUnit MILE_PER_HOUR();
		static android::icu::util::MeasureUnit MILE_SCANDINAVIAN();
		static android::icu::util::MeasureUnit MILLIAMPERE();
		static android::icu::util::MeasureUnit MILLIBAR();
		static android::icu::util::MeasureUnit MILLIGRAM();
		static android::icu::util::MeasureUnit MILLIGRAM_PER_DECILITER();
		static android::icu::util::MeasureUnit MILLILITER();
		static android::icu::util::MeasureUnit MILLIMETER();
		static android::icu::util::MeasureUnit MILLIMETER_OF_MERCURY();
		static android::icu::util::MeasureUnit MILLIMOLE_PER_LITER();
		static android::icu::util::MeasureUnit MILLISECOND();
		static android::icu::util::MeasureUnit MILLIWATT();
		static android::icu::util::TimeUnit MINUTE();
		static android::icu::util::TimeUnit MONTH();
		static android::icu::util::MeasureUnit NANOMETER();
		static android::icu::util::MeasureUnit NANOSECOND();
		static android::icu::util::MeasureUnit NAUTICAL_MILE();
		static android::icu::util::MeasureUnit OHM();
		static android::icu::util::MeasureUnit OUNCE();
		static android::icu::util::MeasureUnit OUNCE_TROY();
		static android::icu::util::MeasureUnit PARSEC();
		static android::icu::util::MeasureUnit PART_PER_MILLION();
		static android::icu::util::MeasureUnit PERCENT();
		static android::icu::util::MeasureUnit PERMILLE();
		static android::icu::util::MeasureUnit PETABYTE();
		static android::icu::util::MeasureUnit PICOMETER();
		static android::icu::util::MeasureUnit PINT();
		static android::icu::util::MeasureUnit PINT_METRIC();
		static android::icu::util::MeasureUnit PIXEL();
		static android::icu::util::MeasureUnit PIXEL_PER_CENTIMETER();
		static android::icu::util::MeasureUnit PIXEL_PER_INCH();
		static android::icu::util::MeasureUnit POINT();
		static android::icu::util::MeasureUnit POUND();
		static android::icu::util::MeasureUnit POUND_PER_SQUARE_INCH();
		static android::icu::util::MeasureUnit QUART();
		static android::icu::util::MeasureUnit RADIAN();
		static android::icu::util::MeasureUnit REVOLUTION_ANGLE();
		static android::icu::util::TimeUnit SECOND();
		static android::icu::util::MeasureUnit SQUARE_CENTIMETER();
		static android::icu::util::MeasureUnit SQUARE_FOOT();
		static android::icu::util::MeasureUnit SQUARE_INCH();
		static android::icu::util::MeasureUnit SQUARE_KILOMETER();
		static android::icu::util::MeasureUnit SQUARE_METER();
		static android::icu::util::MeasureUnit SQUARE_MILE();
		static android::icu::util::MeasureUnit SQUARE_YARD();
		static android::icu::util::MeasureUnit STONE();
		static android::icu::util::MeasureUnit TABLESPOON();
		static android::icu::util::MeasureUnit TEASPOON();
		static android::icu::util::MeasureUnit TERABIT();
		static android::icu::util::MeasureUnit TERABYTE();
		static android::icu::util::MeasureUnit TON();
		static android::icu::util::MeasureUnit VOLT();
		static android::icu::util::MeasureUnit WATT();
		static android::icu::util::TimeUnit WEEK();
		static android::icu::util::MeasureUnit YARD();
		static android::icu::util::TimeUnit YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MeasureUnit(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeasureUnit(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::MeasureUnit forIdentifier(JString arg0);
		static JObject getAvailable();
		static JObject getAvailable(JString arg0);
		static JObject getAvailableTypes();
		jboolean equals(JObject arg0) const;
		android::icu::util::MeasureUnit_Complexity getComplexity() const;
		jint getDimensionality() const;
		JString getIdentifier() const;
		JString getSubtype() const;
		JString getType() const;
		jint hashCode() const;
		android::icu::util::MeasureUnit product(android::icu::util::MeasureUnit arg0) const;
		android::icu::util::MeasureUnit reciprocal() const;
		JObject splitToSingleUnits() const;
		JString toString() const;
		android::icu::util::MeasureUnit withDimensionality(jint arg0) const;
	};
} // namespace android::icu::util

