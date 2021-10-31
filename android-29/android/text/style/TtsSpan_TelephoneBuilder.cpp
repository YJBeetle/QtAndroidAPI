#include "./TtsSpan_TelephoneBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"()V"
		);
	}
	TtsSpan_TelephoneBuilder::TtsSpan_TelephoneBuilder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TelephoneBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TelephoneBuilder::setCountryCode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCountryCode",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setExtension(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setExtension",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TelephoneBuilder::setNumberParts(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumberParts",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TelephoneBuilder;",
			arg0
		);
	}
} // namespace android::text::style

