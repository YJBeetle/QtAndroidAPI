#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Shader_TileMode.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Shader_TileMode Shader_TileMode::CLAMP()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"CLAMP",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode Shader_TileMode::MIRROR()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"MIRROR",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode Shader_TileMode::REPEAT()
	{
		return getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"REPEAT",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	
	// QJniObject forward
	Shader_TileMode::Shader_TileMode(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Shader_TileMode Shader_TileMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;",
			arg0.object<jstring>()
		);
	}
	JArray Shader_TileMode::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"values",
			"()[Landroid/graphics/Shader$TileMode;"
		);
	}
} // namespace android::graphics

