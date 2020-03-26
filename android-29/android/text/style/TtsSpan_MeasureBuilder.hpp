#pragma once

#ifndef ANDROID_TEXT_STYLE_TTSSPAN_MEASUREBUILDER
#define ANDROID_TEXT_STYLE_TTSSPAN_MEASUREBUILDER

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_MeasureBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setIntegerPart(jlong arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(jlong arg0);
		QAndroidJniObject setNumerator(jstring arg0);
		QAndroidJniObject setNumerator(jlong arg0);
		QAndroidJniObject setDenominator(jstring arg0);
		QAndroidJniObject setDenominator(jlong arg0);
		QAndroidJniObject setUnit(jstring arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_MeasureBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$MeasureBuilder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TtsSpan_MeasureBuilder::setIntegerPart(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setIntegerPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setFractionalPart(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumber(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumerator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setNumerator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setNumerator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setDenominator(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setDenominator(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDenominator",
			"(J)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_MeasureBuilder::setUnit(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUnit",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$MeasureBuilder;",
			arg0
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_MeasureBuilder : public __jni_impl::android::text::style::TtsSpan_MeasureBuilder
	{
	public:
		TtsSpan_MeasureBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_MeasureBuilder()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_TTSSPAN_MEASUREBUILDER

