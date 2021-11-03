#pragma once

#include "../../../../JObject.hpp"
#include "./Shape.hpp"

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
	class Shape;
}

namespace android::graphics::drawable::shapes
{
	class RectShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RectShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::Shape(className, sig, std::forward<Ts>(agv)...) {}
		RectShape(QJniObject obj);
		
		// Constructors
		RectShape();
		
		// Methods
		android::graphics::drawable::shapes::RectShape clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jboolean equals(jobject arg0);
		void getOutline(android::graphics::Outline arg0);
		jint hashCode();
	};
} // namespace android::graphics::drawable::shapes

