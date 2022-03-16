#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class ColorSpace_RenderIntent : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::ColorSpace_RenderIntent ABSOLUTE();
		static android::graphics::ColorSpace_RenderIntent PERCEPTUAL();
		static android::graphics::ColorSpace_RenderIntent RELATIVE();
		static android::graphics::ColorSpace_RenderIntent SATURATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_RenderIntent(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_RenderIntent(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_RenderIntent valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

