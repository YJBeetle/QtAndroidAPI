#pragma once

#include "./R_mipmap.def.hpp"

namespace android
{
	// Fields
	inline jint R_mipmap::sym_def_app_icon()
	{
		return getStaticField<jint>(
			"android.R$mipmap",
			"sym_def_app_icon"
		);
	}
	
	// Constructors
	inline R_mipmap::R_mipmap()
		: JObject(
			"android.R$mipmap",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

