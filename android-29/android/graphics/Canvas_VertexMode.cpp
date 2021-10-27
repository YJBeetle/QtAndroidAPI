#include "./Canvas_VertexMode.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Canvas_VertexMode::TRIANGLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLES",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	QAndroidJniObject Canvas_VertexMode::TRIANGLE_FAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_FAN",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	QAndroidJniObject Canvas_VertexMode::TRIANGLE_STRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_STRIP",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	
	Canvas_VertexMode::Canvas_VertexMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Canvas_VertexMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			arg0
		);
	}
	QAndroidJniObject Canvas_VertexMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Canvas_VertexMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"values",
			"()[Landroid/graphics/Canvas$VertexMode;"
		).object<jarray>();
	}
} // namespace android::graphics

