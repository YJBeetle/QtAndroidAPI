#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class DisplayMetrics;
}
class JString;
class JString;

namespace android::util
{
	class TypedValue : public JObject
	{
	public:
		// Fields
		static jint COMPLEX_MANTISSA_MASK();
		static jint COMPLEX_MANTISSA_SHIFT();
		static jint COMPLEX_RADIX_0p23();
		static jint COMPLEX_RADIX_16p7();
		static jint COMPLEX_RADIX_23p0();
		static jint COMPLEX_RADIX_8p15();
		static jint COMPLEX_RADIX_MASK();
		static jint COMPLEX_RADIX_SHIFT();
		static jint COMPLEX_UNIT_DIP();
		static jint COMPLEX_UNIT_FRACTION();
		static jint COMPLEX_UNIT_FRACTION_PARENT();
		static jint COMPLEX_UNIT_IN();
		static jint COMPLEX_UNIT_MASK();
		static jint COMPLEX_UNIT_MM();
		static jint COMPLEX_UNIT_PT();
		static jint COMPLEX_UNIT_PX();
		static jint COMPLEX_UNIT_SHIFT();
		static jint COMPLEX_UNIT_SP();
		static jint DATA_NULL_EMPTY();
		static jint DATA_NULL_UNDEFINED();
		static jint DENSITY_DEFAULT();
		static jint DENSITY_NONE();
		static jint TYPE_ATTRIBUTE();
		static jint TYPE_DIMENSION();
		static jint TYPE_FIRST_COLOR_INT();
		static jint TYPE_FIRST_INT();
		static jint TYPE_FLOAT();
		static jint TYPE_FRACTION();
		static jint TYPE_INT_BOOLEAN();
		static jint TYPE_INT_COLOR_ARGB4();
		static jint TYPE_INT_COLOR_ARGB8();
		static jint TYPE_INT_COLOR_RGB4();
		static jint TYPE_INT_COLOR_RGB8();
		static jint TYPE_INT_DEC();
		static jint TYPE_INT_HEX();
		static jint TYPE_LAST_COLOR_INT();
		static jint TYPE_LAST_INT();
		static jint TYPE_NULL();
		static jint TYPE_REFERENCE();
		static jint TYPE_STRING();
		jint assetCookie();
		jint changingConfigurations();
		jint data();
		jint density();
		jint resourceId();
		JString string();
		jint type();
		
		// QJniObject forward
		template<typename ...Ts> explicit TypedValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypedValue(QJniObject obj);
		
		// Constructors
		TypedValue();
		
		// Methods
		static jfloat applyDimension(jint arg0, jfloat arg1, android::util::DisplayMetrics arg2);
		static JString coerceToString(jint arg0, jint arg1);
		static jfloat complexToDimension(jint arg0, android::util::DisplayMetrics arg1);
		static jint complexToDimensionPixelOffset(jint arg0, android::util::DisplayMetrics arg1);
		static jint complexToDimensionPixelSize(jint arg0, android::util::DisplayMetrics arg1);
		static jfloat complexToFloat(jint arg0);
		static jfloat complexToFraction(jint arg0, jfloat arg1, jfloat arg2);
		JString coerceToString() const;
		jint getComplexUnit() const;
		jfloat getDimension(android::util::DisplayMetrics arg0) const;
		jfloat getFloat() const;
		jfloat getFraction(jfloat arg0, jfloat arg1) const;
		void setTo(android::util::TypedValue arg0) const;
		JString toString() const;
	};
} // namespace android::util

