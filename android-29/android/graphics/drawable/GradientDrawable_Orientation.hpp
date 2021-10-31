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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GradientDrawable_Orientation(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		GradientDrawable_Orientation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics::drawable

