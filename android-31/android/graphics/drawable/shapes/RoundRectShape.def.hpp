#pragma once

#include "./RectShape.def.hpp"

class JFloatArray;
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
class JObject;

namespace android::graphics::drawable::shapes
{
	class RoundRectShape : public android::graphics::drawable::shapes::RectShape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RoundRectShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::RectShape(className, sig, std::forward<Ts>(agv)...) {}
		RoundRectShape(QJniObject obj) : android::graphics::drawable::shapes::RectShape(obj) {}
		
		// Constructors
		RoundRectShape(JFloatArray arg0, android::graphics::RectF arg1, JFloatArray arg2);
		
		// Methods
		android::graphics::drawable::shapes::RoundRectShape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		jboolean equals(JObject arg0) const;
		void getOutline(android::graphics::Outline arg0) const;
		jint hashCode() const;
	};
} // namespace android::graphics::drawable::shapes

