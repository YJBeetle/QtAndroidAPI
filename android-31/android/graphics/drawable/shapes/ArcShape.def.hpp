#pragma once

#include "./RectShape.def.hpp"

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
namespace android::graphics::drawable::shapes
{
	class RectShape;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}
class JObject;

namespace android::graphics::drawable::shapes
{
	class ArcShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArcShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::RectShape(className, sig, std::forward<Ts>(agv)...) {}
		ArcShape(QJniObject obj) : android::graphics::drawable::shapes::RectShape(obj) {}
		
		// Constructors
		ArcShape(jfloat arg0, jfloat arg1);
		
		// Methods
		android::graphics::drawable::shapes::ArcShape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		jboolean equals(JObject arg0) const;
		void getOutline(android::graphics::Outline arg0) const;
		jfloat getStartAngle() const;
		jfloat getSweepAngle() const;
		jint hashCode() const;
	};
} // namespace android::graphics::drawable::shapes

