#pragma once

#ifndef ANDROID_TEXT_BORINGLAYOUT_METRICS
#define ANDROID_TEXT_BORINGLAYOUT_METRICS

#include "../../__JniBaseClass.hpp"
#include "../graphics/Paint_FontMetricsInt.hpp"


namespace __jni_impl::android::text
{
	class BoringLayout_Metrics : public __jni_impl::android::graphics::Paint_FontMetricsInt
	{
	public:
		// Fields
		jint width();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	jint BoringLayout_Metrics::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	
	// Constructors
	void BoringLayout_Metrics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout$Metrics",
			"()V");
	}
	
	// Methods
	jstring BoringLayout_Metrics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class BoringLayout_Metrics : public __jni_impl::android::text::BoringLayout_Metrics
	{
	public:
		BoringLayout_Metrics(QAndroidJniObject obj) { __thiz = obj; }
		BoringLayout_Metrics()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_BORINGLAYOUT_METRICS

