#include "./Matrix_ScaleToFit.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Matrix_ScaleToFit::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"CENTER",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"END",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::FILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"FILL",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"START",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	
	Matrix_ScaleToFit::Matrix_ScaleToFit(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Matrix_ScaleToFit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			arg0
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Matrix_ScaleToFit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"values",
			"()[Landroid/graphics/Matrix$ScaleToFit;"
		).object<jarray>();
	}
} // namespace android::graphics

