#pragma once

#include "./Shape.def.hpp"

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
class JObject;

namespace android::graphics::drawable::shapes
{
	class RectShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RectShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::Shape(className, sig, std::forward<Ts>(agv)...) {}
		RectShape(QJniObject obj) : android::graphics::drawable::shapes::Shape(obj) {}
		
		// Constructors
		RectShape();
		
		// Methods
		android::graphics::drawable::shapes::RectShape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		jboolean equals(JObject arg0) const;
		void getOutline(android::graphics::Outline arg0) const;
		jint hashCode() const;
	};
} // namespace android::graphics::drawable::shapes

