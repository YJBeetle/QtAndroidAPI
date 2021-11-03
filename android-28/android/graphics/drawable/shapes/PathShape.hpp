#pragma once

#include "../../../../JObject.hpp"
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

namespace android::graphics::drawable::shapes
{
	class PathShape : public android::graphics::drawable::shapes::Shape
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathShape(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::shapes::Shape(className, sig, std::forward<Ts>(agv)...) {}
		PathShape(QJniObject obj);
		
		// Constructors
		PathShape(android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		android::graphics::drawable::shapes::PathShape clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
	};
} // namespace android::graphics::drawable::shapes

