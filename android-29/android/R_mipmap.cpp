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
	
	// QAndroidJniObject forward
	R_mipmap::R_mipmap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_mipmap::R_mipmap()
		: JObject(
			"android.R$mipmap",
			"()V"
		) {}
	
	// Methods
} // namespace android

