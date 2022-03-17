#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class PorterDuff_Mode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::PorterDuff_Mode ADD();
		static android::graphics::PorterDuff_Mode CLEAR();
		static android::graphics::PorterDuff_Mode DARKEN();
		static android::graphics::PorterDuff_Mode DST();
		static android::graphics::PorterDuff_Mode DST_ATOP();
		static android::graphics::PorterDuff_Mode DST_IN();
		static android::graphics::PorterDuff_Mode DST_OUT();
		static android::graphics::PorterDuff_Mode DST_OVER();
		static android::graphics::PorterDuff_Mode LIGHTEN();
		static android::graphics::PorterDuff_Mode MULTIPLY();
		static android::graphics::PorterDuff_Mode OVERLAY();
		static android::graphics::PorterDuff_Mode SCREEN();
		static android::graphics::PorterDuff_Mode SRC();
		static android::graphics::PorterDuff_Mode SRC_ATOP();
		static android::graphics::PorterDuff_Mode SRC_IN();
		static android::graphics::PorterDuff_Mode SRC_OUT();
		static android::graphics::PorterDuff_Mode SRC_OVER();
		static android::graphics::PorterDuff_Mode XOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuff_Mode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuff_Mode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::PorterDuff_Mode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

