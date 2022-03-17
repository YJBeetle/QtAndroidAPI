#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::renderscript
{
	class Allocation_MipmapControl : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Allocation_MipmapControl MIPMAP_FULL();
		static android::renderscript::Allocation_MipmapControl MIPMAP_NONE();
		static android::renderscript::Allocation_MipmapControl MIPMAP_ON_SYNC_TO_TEXTURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Allocation_MipmapControl(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Allocation_MipmapControl(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::Allocation_MipmapControl valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

