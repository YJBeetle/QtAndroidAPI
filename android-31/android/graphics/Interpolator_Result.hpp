#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Interpolator_Result : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Interpolator_Result FREEZE_END();
		static android::graphics::Interpolator_Result FREEZE_START();
		static android::graphics::Interpolator_Result NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Interpolator_Result(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Interpolator_Result(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Interpolator_Result valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

