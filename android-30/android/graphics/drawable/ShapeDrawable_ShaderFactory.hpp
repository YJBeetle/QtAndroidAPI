#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Shader;
}

namespace android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ShapeDrawable_ShaderFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ShapeDrawable_ShaderFactory(QJniObject obj);
		
		// Constructors
		ShapeDrawable_ShaderFactory();
		
		// Methods
		android::graphics::Shader resize(jint arg0, jint arg1);
	};
} // namespace android::graphics::drawable

