#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Allocation_MipmapControl : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Allocation_MipmapControl MIPMAP_FULL();
		static android::renderscript::Allocation_MipmapControl MIPMAP_NONE();
		static android::renderscript::Allocation_MipmapControl MIPMAP_ON_SYNC_TO_TEXTURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Allocation_MipmapControl(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Allocation_MipmapControl(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Allocation_MipmapControl valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

