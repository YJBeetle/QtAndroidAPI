#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class MeasureUnit_Complexity : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::MeasureUnit_Complexity COMPOUND();
		static android::icu::util::MeasureUnit_Complexity MIXED();
		static android::icu::util::MeasureUnit_Complexity SINGLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MeasureUnit_Complexity(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MeasureUnit_Complexity(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::MeasureUnit_Complexity valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

