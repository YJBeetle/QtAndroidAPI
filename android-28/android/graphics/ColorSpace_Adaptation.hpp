#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class ColorSpace_Adaptation : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::ColorSpace_Adaptation BRADFORD();
		static android::graphics::ColorSpace_Adaptation CIECAT02();
		static android::graphics::ColorSpace_Adaptation VON_KRIES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Adaptation(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Adaptation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_Adaptation valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

