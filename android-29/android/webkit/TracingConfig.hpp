#pragma once

#ifndef ANDROID_WEBKIT_TRACINGCONFIG
#define ANDROID_WEBKIT_TRACINGCONFIG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class TracingConfig : public __JniBaseClass
	{
	public:
		// Fields
		static jint CATEGORIES_ALL();
		static jint CATEGORIES_ANDROID_WEBVIEW();
		static jint CATEGORIES_FRAME_VIEWER();
		static jint CATEGORIES_INPUT_LATENCY();
		static jint CATEGORIES_JAVASCRIPT_AND_RENDERING();
		static jint CATEGORIES_NONE();
		static jint CATEGORIES_RENDERING();
		static jint CATEGORIES_WEB_DEVELOPER();
		static jint RECORD_CONTINUOUSLY();
		static jint RECORD_UNTIL_FULL();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getPredefinedCategories();
		QAndroidJniObject getCustomIncludedCategories();
		jint getTracingMode();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	jint TracingConfig::CATEGORIES_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ALL");
	}
	jint TracingConfig::CATEGORIES_ANDROID_WEBVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ANDROID_WEBVIEW");
	}
	jint TracingConfig::CATEGORIES_FRAME_VIEWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_FRAME_VIEWER");
	}
	jint TracingConfig::CATEGORIES_INPUT_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_INPUT_LATENCY");
	}
	jint TracingConfig::CATEGORIES_JAVASCRIPT_AND_RENDERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_JAVASCRIPT_AND_RENDERING");
	}
	jint TracingConfig::CATEGORIES_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_NONE");
	}
	jint TracingConfig::CATEGORIES_RENDERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_RENDERING");
	}
	jint TracingConfig::CATEGORIES_WEB_DEVELOPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_WEB_DEVELOPER");
	}
	jint TracingConfig::RECORD_CONTINUOUSLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_CONTINUOUSLY");
	}
	jint TracingConfig::RECORD_UNTIL_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_UNTIL_FULL");
	}
	
	// Constructors
	void TracingConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.TracingConfig",
			"(V)V");
	}
	
	// Methods
	jint TracingConfig::getPredefinedCategories()
	{
		return __thiz.callMethod<jint>(
			"getPredefinedCategories",
			"()I");
	}
	QAndroidJniObject TracingConfig::getCustomIncludedCategories()
	{
		return __thiz.callObjectMethod(
			"getCustomIncludedCategories",
			"()Ljava/util/List;");
	}
	jint TracingConfig::getTracingMode()
	{
		return __thiz.callMethod<jint>(
			"getTracingMode",
			"()I");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class TracingConfig : public __jni_impl::android::webkit::TracingConfig
	{
	public:
		TracingConfig(QAndroidJniObject obj) { __thiz = obj; }
		TracingConfig()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_TRACINGCONFIG

