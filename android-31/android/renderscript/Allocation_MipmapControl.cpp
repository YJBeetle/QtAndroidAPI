#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Allocation_MipmapControl.hpp"

namespace android::renderscript
{
	// Fields
	android::renderscript::Allocation_MipmapControl Allocation_MipmapControl::MIPMAP_FULL()
	{
		return getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_FULL",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	android::renderscript::Allocation_MipmapControl Allocation_MipmapControl::MIPMAP_NONE()
	{
		return getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_NONE",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	android::renderscript::Allocation_MipmapControl Allocation_MipmapControl::MIPMAP_ON_SYNC_TO_TEXTURE()
	{
		return getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_ON_SYNC_TO_TEXTURE",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	
	// Constructors
	
	// Methods
	android::renderscript::Allocation_MipmapControl Allocation_MipmapControl::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Allocation$MipmapControl;",
			arg0.object<jstring>()
		);
	}
	JArray Allocation_MipmapControl::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"values",
			"()[Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
} // namespace android::renderscript

