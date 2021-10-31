#include "./Type_CubemapFace.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::NEGATIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	android::renderscript::Type_CubemapFace Type_CubemapFace::POSITVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	
	// QAndroidJniObject forward
	Type_CubemapFace::Type_CubemapFace(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Type_CubemapFace Type_CubemapFace::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			arg0
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

