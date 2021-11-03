#pragma once

#include "../../../../JObject.hpp"

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
class JObject;

namespace android::graphics::drawable::shapes
{
	class Shape : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Shape(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Shape(QJniObject obj);
		
		// Constructors
		Shape();
		
		// Methods
		android::graphics::drawable::shapes::Shape clone();
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1);
		jfloat getHeight();
		void getOutline(android::graphics::Outline arg0);
		jfloat getWidth();
		jboolean hasAlpha();
		void resize(jfloat arg0, jfloat arg1);
	};
} // namespace android::graphics::drawable::shapes

