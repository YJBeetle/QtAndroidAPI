#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Shader_TileMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Shader_TileMode CLAMP();
		static android::graphics::Shader_TileMode MIRROR();
		static android::graphics::Shader_TileMode REPEAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Shader_TileMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Shader_TileMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Shader_TileMode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

