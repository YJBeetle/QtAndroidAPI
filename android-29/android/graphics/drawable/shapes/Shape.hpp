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
		android::graphics::drawable::shapes::Shape clone() const;
		void draw(android::graphics::Canvas arg0, android::graphics::Paint arg1) const;
		jboolean equals(JObject arg0) const;
		jfloat getHeight() const;
		void getOutline(android::graphics::Outline arg0) const;
		jfloat getWidth() const;
		jboolean hasAlpha() const;
		jint hashCode() const;
		void resize(jfloat arg0, jfloat arg1) const;
	};
} // namespace android::graphics::drawable::shapes

