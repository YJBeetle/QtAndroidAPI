#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_BUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::text::style
{
	class TtsSpan;
}

namespace __jni_impl::android::text::style
{
	class TtsSpan_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setStringArgument(jstring arg0, jstring arg1);
		QAndroidJniObject setIntArgument(jstring arg0, jint arg1);
		QAndroidJniObject setLongArgument(jstring arg0, jlong arg1);
	};
} // namespace __jni_impl::android::text::style

#include "TtsSpan.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$Builder",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/style/TtsSpan;"
		);
	}
	QAndroidJniObject TtsSpan_Builder::setStringArgument(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setStringArgument",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TtsSpan_Builder::setIntArgument(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setIntArgument",
			"(Ljava/lang/String;I)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TtsSpan_Builder::setLongArgument(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setLongArgument",
			"(Ljava/lang/String;J)Landroid/text/style/TtsSpan$Builder;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_Builder : public __jni_impl::android::text::style::TtsSpan_Builder
	{
	public:
		TtsSpan_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_BUILDER

