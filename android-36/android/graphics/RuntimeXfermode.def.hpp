#pragma once

#include "./Xfermode.def.hpp"

class JFloatArray;
class JIntArray;
namespace android::graphics
{
	class Color;
}
namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics
{
	class Shader;
}
class JString;

namespace android::graphics
{
	class RuntimeXfermode : public android::graphics::Xfermode
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RuntimeXfermode(const char *className, const char *sig, Ts...agv) : android::graphics::Xfermode(className, sig, std::forward<Ts>(agv)...) {}
		RuntimeXfermode(QJniObject obj) : android::graphics::Xfermode(obj) {}
		
		// Constructors
		RuntimeXfermode(JString arg0);
		
		// Methods
		void setColorUniform(JString arg0, android::graphics::Color arg1) const;
		void setColorUniform(JString arg0, jint arg1) const;
		void setColorUniform(JString arg0, jlong arg1) const;
		void setFloatUniform(JString arg0, JFloatArray arg1) const;
		void setFloatUniform(JString arg0, jfloat arg1) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const;
		void setInputColorFilter(JString arg0, android::graphics::ColorFilter arg1) const;
		void setInputShader(JString arg0, android::graphics::Shader arg1) const;
		void setInputXfermode(JString arg0, android::graphics::RuntimeXfermode arg1) const;
		void setIntUniform(JString arg0, JIntArray arg1) const;
		void setIntUniform(JString arg0, jint arg1) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
	};
} // namespace android::graphics

