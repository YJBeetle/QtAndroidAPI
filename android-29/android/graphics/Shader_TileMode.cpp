#include "./Shader_TileMode.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Shader_TileMode::CLAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"CLAMP",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject Shader_TileMode::MIRROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"MIRROR",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject Shader_TileMode::REPEAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"REPEAT",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	
	Shader_TileMode::Shader_TileMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Shader_TileMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;",
			arg0
		);
	}
	jarray Shader_TileMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"values",
			"()[Landroid/graphics/Shader$TileMode;"
		).object<jarray>();
	}
} // namespace android::graphics

