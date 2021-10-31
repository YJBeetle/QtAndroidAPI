#include "./Config.hpp"

namespace android::util
{
	// Fields
	jboolean Config::DEBUG()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"DEBUG"
		);
	}
	jboolean Config::LOGD()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"LOGD"
		);
	}
	jboolean Config::LOGV()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"LOGV"
		);
	}
	jboolean Config::PROFILE()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"PROFILE"
		);
	}
	jboolean Config::RELEASE()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"RELEASE"
		);
	}
	
	// QJniObject forward
	Config::Config(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

