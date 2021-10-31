#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpace_RenderIntent(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_RenderIntent(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_RenderIntent valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

