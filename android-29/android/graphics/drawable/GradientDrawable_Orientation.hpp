#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::graphics::drawable
{
	class GradientDrawable_Orientation : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BL_TR();
		static QAndroidJniObject BOTTOM_TOP();
		static QAndroidJniObject BR_TL();
		static QAndroidJniObject LEFT_RIGHT();
		static QAndroidJniObject RIGHT_LEFT();
		static QAndroidJniObject TL_BR();
		static QAndroidJniObject TOP_BOTTOM();
		static QAndroidJniObject TR_BL();
		
		GradientDrawable_Orientation(QAndroidJniObject obj);
		// Constructors
		GradientDrawable_Orientation() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics::drawable

