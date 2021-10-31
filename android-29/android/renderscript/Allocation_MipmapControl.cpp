#include "./Allocation_MipmapControl.hpp"

namespace android::renderscript
{
	// Fields
	QAndroidJniObject Allocation_MipmapControl::MIPMAP_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_FULL",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	QAndroidJniObject Allocation_MipmapControl::MIPMAP_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_NONE",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	QAndroidJniObject Allocation_MipmapControl::MIPMAP_ON_SYNC_TO_TEXTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_ON_SYNC_TO_TEXTURE",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	
	Allocation_MipmapControl::Allocation_MipmapControl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Allocation_MipmapControl::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Allocation$MipmapControl;",
			arg0
		);
	}
	jarray Allocation_MipmapControl::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"values",
			"()[Landroid/renderscript/Allocation$MipmapControl;"
		).object<jarray>();
	}
} // namespace android::renderscript

