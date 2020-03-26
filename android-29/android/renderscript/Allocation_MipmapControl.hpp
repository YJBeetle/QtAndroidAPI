#pragma once

#ifndef ANDROID_RENDERSCRIPT_ALLOCATION_MIPMAPCONTROL
#define ANDROID_RENDERSCRIPT_ALLOCATION_MIPMAPCONTROL

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class Allocation_MipmapControl : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MIPMAP_NONE();
		static QAndroidJniObject MIPMAP_FULL();
		static QAndroidJniObject MIPMAP_ON_SYNC_TO_TEXTURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject Allocation_MipmapControl::MIPMAP_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_NONE",
			"Landroid/renderscript/Allocation$MipmapControl;"
		);
	}
	QAndroidJniObject Allocation_MipmapControl::MIPMAP_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Allocation$MipmapControl",
			"MIPMAP_FULL",
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
	
	// Constructors
	void Allocation_MipmapControl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Allocation$MipmapControl",
			"(V)V");
	}
	
	// Methods
	jarray Allocation_MipmapControl::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"values",
			"()[Landroid/renderscript/Allocation$MipmapControl;"
		).object<jarray>();
	}
	QAndroidJniObject Allocation_MipmapControl::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation$MipmapControl",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Allocation$MipmapControl;",
			arg0
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Allocation_MipmapControl : public __jni_impl::android::renderscript::Allocation_MipmapControl
	{
	public:
		Allocation_MipmapControl(QAndroidJniObject obj) { __thiz = obj; }
		Allocation_MipmapControl()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ALLOCATION_MIPMAPCONTROL

