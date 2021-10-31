#include "./TracingConfig.hpp"

namespace android::webkit
{
	// Fields
	jint TracingConfig::CATEGORIES_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ALL"
		);
	}
	jint TracingConfig::CATEGORIES_ANDROID_WEBVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ANDROID_WEBVIEW"
		);
	}
	jint TracingConfig::CATEGORIES_FRAME_VIEWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_FRAME_VIEWER"
		);
	}
	jint TracingConfig::CATEGORIES_INPUT_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_INPUT_LATENCY"
		);
	}
	jint TracingConfig::CATEGORIES_JAVASCRIPT_AND_RENDERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_JAVASCRIPT_AND_RENDERING"
		);
	}
	jint TracingConfig::CATEGORIES_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_NONE"
		);
	}
	jint TracingConfig::CATEGORIES_RENDERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_RENDERING"
		);
	}
	jint TracingConfig::CATEGORIES_WEB_DEVELOPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_WEB_DEVELOPER"
		);
	}
	jint TracingConfig::RECORD_CONTINUOUSLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_CONTINUOUSLY"
		);
	}
	jint TracingConfig::RECORD_UNTIL_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_UNTIL_FULL"
		);
	}
	
	// QAndroidJniObject forward
	TracingConfig::TracingConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass TracingConfig::getCustomIncludedCategories()
	{
		return callObjectMethod(
			"getCustomIncludedCategories",
			"()Ljava/util/List;"
		);
	}
	jint TracingConfig::getPredefinedCategories()
	{
		return callMethod<jint>(
			"getPredefinedCategories",
			"()I"
		);
	}
	jint TracingConfig::getTracingMode()
	{
		return callMethod<jint>(
			"getTracingMode",
			"()I"
		);
	}
} // namespace android::webkit

