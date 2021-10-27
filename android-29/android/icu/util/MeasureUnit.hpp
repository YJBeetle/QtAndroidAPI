#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class TimeUnit;
}

namespace android::icu::util
{
	class MeasureUnit : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACRE();
		static QAndroidJniObject ACRE_FOOT();
		static QAndroidJniObject AMPERE();
		static QAndroidJniObject ARC_MINUTE();
		static QAndroidJniObject ARC_SECOND();
		static QAndroidJniObject ASTRONOMICAL_UNIT();
		static QAndroidJniObject BIT();
		static QAndroidJniObject BUSHEL();
		static QAndroidJniObject BYTE();
		static QAndroidJniObject CALORIE();
		static QAndroidJniObject CARAT();
		static QAndroidJniObject CELSIUS();
		static QAndroidJniObject CENTILITER();
		static QAndroidJniObject CENTIMETER();
		static QAndroidJniObject CENTURY();
		static QAndroidJniObject CUBIC_CENTIMETER();
		static QAndroidJniObject CUBIC_FOOT();
		static QAndroidJniObject CUBIC_INCH();
		static QAndroidJniObject CUBIC_KILOMETER();
		static QAndroidJniObject CUBIC_METER();
		static QAndroidJniObject CUBIC_MILE();
		static QAndroidJniObject CUBIC_YARD();
		static QAndroidJniObject CUP();
		static QAndroidJniObject CUP_METRIC();
		static QAndroidJniObject DAY();
		static QAndroidJniObject DECILITER();
		static QAndroidJniObject DECIMETER();
		static QAndroidJniObject DEGREE();
		static QAndroidJniObject FAHRENHEIT();
		static QAndroidJniObject FATHOM();
		static QAndroidJniObject FLUID_OUNCE();
		static QAndroidJniObject FOODCALORIE();
		static QAndroidJniObject FOOT();
		static QAndroidJniObject FURLONG();
		static QAndroidJniObject GALLON();
		static QAndroidJniObject GALLON_IMPERIAL();
		static QAndroidJniObject GENERIC_TEMPERATURE();
		static QAndroidJniObject GIGABIT();
		static QAndroidJniObject GIGABYTE();
		static QAndroidJniObject GIGAHERTZ();
		static QAndroidJniObject GIGAWATT();
		static QAndroidJniObject GRAM();
		static QAndroidJniObject G_FORCE();
		static QAndroidJniObject HECTARE();
		static QAndroidJniObject HECTOLITER();
		static QAndroidJniObject HECTOPASCAL();
		static QAndroidJniObject HERTZ();
		static QAndroidJniObject HORSEPOWER();
		static QAndroidJniObject HOUR();
		static QAndroidJniObject INCH();
		static QAndroidJniObject INCH_HG();
		static QAndroidJniObject JOULE();
		static QAndroidJniObject KARAT();
		static QAndroidJniObject KELVIN();
		static QAndroidJniObject KILOBIT();
		static QAndroidJniObject KILOBYTE();
		static QAndroidJniObject KILOCALORIE();
		static QAndroidJniObject KILOGRAM();
		static QAndroidJniObject KILOHERTZ();
		static QAndroidJniObject KILOJOULE();
		static QAndroidJniObject KILOMETER();
		static QAndroidJniObject KILOMETER_PER_HOUR();
		static QAndroidJniObject KILOWATT();
		static QAndroidJniObject KILOWATT_HOUR();
		static QAndroidJniObject KNOT();
		static QAndroidJniObject LIGHT_YEAR();
		static QAndroidJniObject LITER();
		static QAndroidJniObject LITER_PER_100KILOMETERS();
		static QAndroidJniObject LITER_PER_KILOMETER();
		static QAndroidJniObject LUX();
		static QAndroidJniObject MEGABIT();
		static QAndroidJniObject MEGABYTE();
		static QAndroidJniObject MEGAHERTZ();
		static QAndroidJniObject MEGALITER();
		static QAndroidJniObject MEGAWATT();
		static QAndroidJniObject METER();
		static QAndroidJniObject METER_PER_SECOND();
		static QAndroidJniObject METER_PER_SECOND_SQUARED();
		static QAndroidJniObject METRIC_TON();
		static QAndroidJniObject MICROGRAM();
		static QAndroidJniObject MICROMETER();
		static QAndroidJniObject MICROSECOND();
		static QAndroidJniObject MILE();
		static QAndroidJniObject MILE_PER_GALLON();
		static QAndroidJniObject MILE_PER_GALLON_IMPERIAL();
		static QAndroidJniObject MILE_PER_HOUR();
		static QAndroidJniObject MILE_SCANDINAVIAN();
		static QAndroidJniObject MILLIAMPERE();
		static QAndroidJniObject MILLIBAR();
		static QAndroidJniObject MILLIGRAM();
		static QAndroidJniObject MILLIGRAM_PER_DECILITER();
		static QAndroidJniObject MILLILITER();
		static QAndroidJniObject MILLIMETER();
		static QAndroidJniObject MILLIMETER_OF_MERCURY();
		static QAndroidJniObject MILLIMOLE_PER_LITER();
		static QAndroidJniObject MILLISECOND();
		static QAndroidJniObject MILLIWATT();
		static QAndroidJniObject MINUTE();
		static QAndroidJniObject MONTH();
		static QAndroidJniObject NANOMETER();
		static QAndroidJniObject NANOSECOND();
		static QAndroidJniObject NAUTICAL_MILE();
		static QAndroidJniObject OHM();
		static QAndroidJniObject OUNCE();
		static QAndroidJniObject OUNCE_TROY();
		static QAndroidJniObject PARSEC();
		static QAndroidJniObject PART_PER_MILLION();
		static QAndroidJniObject PICOMETER();
		static QAndroidJniObject PINT();
		static QAndroidJniObject PINT_METRIC();
		static QAndroidJniObject POINT();
		static QAndroidJniObject POUND();
		static QAndroidJniObject POUND_PER_SQUARE_INCH();
		static QAndroidJniObject QUART();
		static QAndroidJniObject RADIAN();
		static QAndroidJniObject REVOLUTION_ANGLE();
		static QAndroidJniObject SECOND();
		static QAndroidJniObject SQUARE_CENTIMETER();
		static QAndroidJniObject SQUARE_FOOT();
		static QAndroidJniObject SQUARE_INCH();
		static QAndroidJniObject SQUARE_KILOMETER();
		static QAndroidJniObject SQUARE_METER();
		static QAndroidJniObject SQUARE_MILE();
		static QAndroidJniObject SQUARE_YARD();
		static QAndroidJniObject STONE();
		static QAndroidJniObject TABLESPOON();
		static QAndroidJniObject TEASPOON();
		static QAndroidJniObject TERABIT();
		static QAndroidJniObject TERABYTE();
		static QAndroidJniObject TON();
		static QAndroidJniObject VOLT();
		static QAndroidJniObject WATT();
		static QAndroidJniObject WEEK();
		static QAndroidJniObject YARD();
		static QAndroidJniObject YEAR();
		
		MeasureUnit(QAndroidJniObject obj);
		// Constructors
		MeasureUnit() = default;
		
		// Methods
		static QAndroidJniObject getAvailable();
		static QAndroidJniObject getAvailable(jstring arg0);
		static QAndroidJniObject getAvailable(const QString &arg0);
		static QAndroidJniObject getAvailableTypes();
		jboolean equals(jobject arg0);
		jstring getSubtype();
		jstring getType();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

