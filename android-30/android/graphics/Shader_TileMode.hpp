#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Shader_TileMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Shader_TileMode CLAMP();
		static android::graphics::Shader_TileMode MIRROR();
		static android::graphics::Shader_TileMode REPEAT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Shader_TileMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Shader_TileMode(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Shader_TileMode valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

