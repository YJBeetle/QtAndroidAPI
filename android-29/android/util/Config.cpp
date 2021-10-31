#include "./Config.hpp"

namespace android::util
{
	// Fields
	jboolean Config::DEBUG()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"DEBUG"
		);
	}
	jboolean Config::LOGD()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"LOGD"
		);
	}
	jboolean Config::LOGV()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"LOGV"
		);
	}
	jboolean Config::PROFILE()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"PROFILE"
		);
	}
	jboolean Config::RELEASE()
	{
		return QAndroidJniObject::getStaticField<jboolean>(
			"android.util.Config",
			"RELEASE"
		);
	}
	
	// QAndroidJniObject forward
	Config::Config(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

