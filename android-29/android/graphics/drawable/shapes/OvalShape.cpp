#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./RectShape.hpp"
#include "./Shape.hpp"
#include "./OvalShape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	OvalShape::OvalShape(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OvalShape::OvalShape()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.shapes.OvalShape",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject OvalShape::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/OvalShape;"
		);
	}
	void OvalShape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void OvalShape::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable::shapes

