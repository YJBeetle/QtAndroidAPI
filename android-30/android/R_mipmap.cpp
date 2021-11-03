#include "./R_mipmap.hpp"

namespace android
{
	// Fields
	jint R_mipmap::sym_def_app_icon()
	{
		return getStaticField<jint>(
			"android.R$mipmap",
			"sym_def_app_icon"
		);
	}
	
	// QJniObject forward
	R_mipmap::R_mipmap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_mipmap::R_mipmap()
		: JObject(
			"android.R$mipmap",
			"()V"
		) {}
	
	// Methods
} // namespace android

