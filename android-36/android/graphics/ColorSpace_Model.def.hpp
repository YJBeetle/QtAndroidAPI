#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class ColorSpace_Model : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::ColorSpace_Model CMYK();
		static android::graphics::ColorSpace_Model LAB();
		static android::graphics::ColorSpace_Model RGB();
		static android::graphics::ColorSpace_Model XYZ();
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpace_Model(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Model(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_Model valueOf(JString arg0);
		static JArray values();
		jint getComponentCount() const;
	};
} // namespace android::graphics

