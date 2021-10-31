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
	
	// QJniObject forward
	Allocation_MipmapControl::Allocation_MipmapControl(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Allocation_MipmapControl Allocation_MipmapControl::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Allocation$MipmapControl;",
			arg0
		);
	}
	jarray Allocation_MipmapControl::values()
	{
		return callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"values",
			"()[Landroid/renderscript/Allocation$MipmapControl;"
		).object<jarray>();
	}
} // namespace android::renderscript

