#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./Shape.hpp"
#include "./RectShape.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class RectF;
}
namespace android::graphics::drawable::shapes
{
	class RectShape;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}

namespace android::graphics::drawable::shapes
{
	class RoundRectShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RoundRectShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::RectShape(className, sig, std::forward<Ts>(agv)...) {}
		RoundRectShape(QJniObject obj);
		
		// Constructors
		RoundRectShape(jfloatArray arg0, android::graphics::RectF arg1, jfloatArray arg2);
		
		// Methods
		android::graphics::drawable::shapes::RoundRectShape clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(android::graphics::Outline arg0);
		jint hashCode();
	};
} // namespace android::graphics::drawable::shapes

