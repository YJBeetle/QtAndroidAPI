#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Shader;
}

namespace android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShapeDrawable_ShaderFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShapeDrawable_ShaderFactory(QAndroidJniObject obj);
		
		// Constructors
		ShapeDrawable_ShaderFactory();
		
		// Methods
		android::graphics::Shader resize(jint arg0, jint arg1);
	};
} // namespace android::graphics::drawable

