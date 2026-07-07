#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
namespace android::graphics
{
	class Color;
}
namespace android::graphics
{
	class MeshSpecification;
}
namespace android::graphics
{
	class RectF;
}
class JString;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ShortBuffer;
}

namespace android::graphics
{
	class Mesh : public JObject
	{
	public:
		// Fields
		static jint TRIANGLES();
		static jint TRIANGLE_STRIP();
		
		// QJniObject forward
		template<typename ...Ts> explicit Mesh(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Mesh(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Mesh(android::graphics::MeshSpecification arg0, jint arg1, java::nio::Buffer arg2, jint arg3, android::graphics::RectF arg4);
		Mesh(android::graphics::MeshSpecification arg0, jint arg1, java::nio::Buffer arg2, jint arg3, java::nio::ShortBuffer arg4, android::graphics::RectF arg5);
		
		// Methods
		void setColorUniform(JString arg0, android::graphics::Color arg1) const;
		void setColorUniform(JString arg0, jint arg1) const;
		void setColorUniform(JString arg0, jlong arg1) const;
		void setFloatUniform(JString arg0, JFloatArray arg1) const;
		void setFloatUniform(JString arg0, jfloat arg1) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const;
		void setIntUniform(JString arg0, JIntArray arg1) const;
		void setIntUniform(JString arg0, jint arg1) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
	};
} // namespace android::graphics

