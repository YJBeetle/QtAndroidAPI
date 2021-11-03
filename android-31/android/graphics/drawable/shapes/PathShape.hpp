#pragma once

#include "./Shape.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics::drawable::shapes
{
	class Shape;
}
class JObject;

namespace android::graphics::drawable::shapes
{
	class PathShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::Shape(className, sig, std::forward<Ts>(agv)...) {}
		PathShape(QAndroidJniObject obj);
		
		// Constructors
		PathShape(android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		android::graphics::drawable::shapes::PathShape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::graphics::drawable::shapes

