#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Allocation_MipmapControl : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MIPMAP_FULL();
		static QAndroidJniObject MIPMAP_NONE();
		static QAndroidJniObject MIPMAP_ON_SYNC_TO_TEXTURE();
		
		Allocation_MipmapControl(QAndroidJniObject obj);
		// Constructors
		Allocation_MipmapControl() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

