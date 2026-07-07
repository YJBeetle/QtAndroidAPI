#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class MeasureUnit_MeasurePrefix : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::MeasureUnit_MeasurePrefix ATTO();
		static android::icu::util::MeasureUnit_MeasurePrefix CENTI();
		static android::icu::util::MeasureUnit_MeasurePrefix DECI();
		static android::icu::util::MeasureUnit_MeasurePrefix DEKA();
		static android::icu::util::MeasureUnit_MeasurePrefix EXA();
		static android::icu::util::MeasureUnit_MeasurePrefix EXBI();
		static android::icu::util::MeasureUnit_MeasurePrefix FEMTO();
		static android::icu::util::MeasureUnit_MeasurePrefix GIBI();
		static android::icu::util::MeasureUnit_MeasurePrefix GIGA();
		static android::icu::util::MeasureUnit_MeasurePrefix HECTO();
		static android::icu::util::MeasureUnit_MeasurePrefix KIBI();
		static android::icu::util::MeasureUnit_MeasurePrefix KILO();
		static android::icu::util::MeasureUnit_MeasurePrefix MEBI();
		static android::icu::util::MeasureUnit_MeasurePrefix MEGA();
		static android::icu::util::MeasureUnit_MeasurePrefix MICRO();
		static android::icu::util::MeasureUnit_MeasurePrefix MILLI();
		static android::icu::util::MeasureUnit_MeasurePrefix NANO();
		static android::icu::util::MeasureUnit_MeasurePrefix ONE();
		static android::icu::util::MeasureUnit_MeasurePrefix PEBI();
		static android::icu::util::MeasureUnit_MeasurePrefix PETA();
		static android::icu::util::MeasureUnit_MeasurePrefix PICO();
		static android::icu::util::MeasureUnit_MeasurePrefix TEBI();
		static android::icu::util::MeasureUnit_MeasurePrefix TERA();
		static android::icu::util::MeasureUnit_MeasurePrefix YOBI();
		static android::icu::util::MeasureUnit_MeasurePrefix YOCTO();
		static android::icu::util::MeasureUnit_MeasurePrefix YOTTA();
		static android::icu::util::MeasureUnit_MeasurePrefix ZEBI();
		static android::icu::util::MeasureUnit_MeasurePrefix ZEPTO();
		static android::icu::util::MeasureUnit_MeasurePrefix ZETTA();
		
		// QJniObject forward
		template<typename ...Ts> explicit MeasureUnit_MeasurePrefix(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MeasureUnit_MeasurePrefix(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::MeasureUnit_MeasurePrefix valueOf(JString arg0);
		static JArray values();
		jint getBase() const;
		jint getPower() const;
	};
} // namespace android::icu::util

