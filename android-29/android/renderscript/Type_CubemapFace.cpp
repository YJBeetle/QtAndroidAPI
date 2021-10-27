#include "./Type_CubemapFace.hpp"

namespace android::renderscript
{
	// Fields
	QAndroidJniObject Type_CubemapFace::NEGATIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::NEGATIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::NEGATIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	
	Type_CubemapFace::Type_CubemapFace(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Type_CubemapFace::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			arg0
		);
	}
	QAndroidJniObject Type_CubemapFace::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Type_CubemapFace::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"values",
			"()[Landroid/renderscript/Type$CubemapFace;"
		).object<jarray>();
	}
} // namespace android::renderscript

