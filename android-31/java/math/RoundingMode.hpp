#pragma once

#include "../../JObject.hpp"
#include "../lang/Enum.hpp"


namespace java::math
{
	class RoundingMode : public java::lang::Enum
	{
	public:
		// Fields
		static java::math::RoundingMode CEILING();
		static java::math::RoundingMode DOWN();
		static java::math::RoundingMode FLOOR();
		static java::math::RoundingMode HALF_DOWN();
		static java::math::RoundingMode HALF_EVEN();
		static java::math::RoundingMode HALF_UP();
		static java::math::RoundingMode UNNECESSARY();
		static java::math::RoundingMode UP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RoundingMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RoundingMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::math::RoundingMode valueOf(jint arg0);
		static java::math::RoundingMode valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::math

