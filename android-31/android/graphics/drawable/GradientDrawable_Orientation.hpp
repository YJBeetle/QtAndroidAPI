#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics::drawable
{
	class GradientDrawable_Orientation : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::drawable::GradientDrawable_Orientation BL_TR();
		static android::graphics::drawable::GradientDrawable_Orientation BOTTOM_TOP();
		static android::graphics::drawable::GradientDrawable_Orientation BR_TL();
		static android::graphics::drawable::GradientDrawable_Orientation LEFT_RIGHT();
		static android::graphics::drawable::GradientDrawable_Orientation RIGHT_LEFT();
		static android::graphics::drawable::GradientDrawable_Orientation TL_BR();
		static android::graphics::drawable::GradientDrawable_Orientation TOP_BOTTOM();
		static android::graphics::drawable::GradientDrawable_Orientation TR_BL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GradientDrawable_Orientation(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		GradientDrawable_Orientation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::drawable::GradientDrawable_Orientation valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics::drawable

