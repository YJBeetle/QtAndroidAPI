#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class BlendMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::BlendMode CLEAR();
		static android::graphics::BlendMode COLOR();
		static android::graphics::BlendMode COLOR_BURN();
		static android::graphics::BlendMode COLOR_DODGE();
		static android::graphics::BlendMode DARKEN();
		static android::graphics::BlendMode DIFFERENCE();
		static android::graphics::BlendMode DST();
		static android::graphics::BlendMode DST_ATOP();
		static android::graphics::BlendMode DST_IN();
		static android::graphics::BlendMode DST_OUT();
		static android::graphics::BlendMode DST_OVER();
		static android::graphics::BlendMode EXCLUSION();
		static android::graphics::BlendMode HARD_LIGHT();
		static android::graphics::BlendMode HUE();
		static android::graphics::BlendMode LIGHTEN();
		static android::graphics::BlendMode LUMINOSITY();
		static android::graphics::BlendMode MODULATE();
		static android::graphics::BlendMode MULTIPLY();
		static android::graphics::BlendMode OVERLAY();
		static android::graphics::BlendMode PLUS();
		static android::graphics::BlendMode SATURATION();
		static android::graphics::BlendMode SCREEN();
		static android::graphics::BlendMode SOFT_LIGHT();
		static android::graphics::BlendMode SRC();
		static android::graphics::BlendMode SRC_ATOP();
		static android::graphics::BlendMode SRC_IN();
		static android::graphics::BlendMode SRC_OUT();
		static android::graphics::BlendMode SRC_OVER();
		static android::graphics::BlendMode XOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlendMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		BlendMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::BlendMode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

