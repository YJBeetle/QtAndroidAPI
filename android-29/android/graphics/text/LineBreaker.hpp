#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_LINEBREAKER
#define ANDROID_GRAPHICS_TEXT_LINEBREAKER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::text
{
	class LineBreaker_Result;
}
namespace __jni_impl::android::graphics::text
{
	class MeasuredText;
}
namespace __jni_impl::android::graphics::text
{
	class LineBreaker_ParagraphConstraints;
}

namespace __jni_impl::android::graphics::text
{
	class LineBreaker : public __JniBaseClass
	{
	public:
		// Fields
		static jint BREAK_STRATEGY_BALANCED();
		static jint BREAK_STRATEGY_HIGH_QUALITY();
		static jint BREAK_STRATEGY_SIMPLE();
		static jint HYPHENATION_FREQUENCY_FULL();
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject computeLineBreaks(__jni_impl::android::graphics::text::MeasuredText arg0, __jni_impl::android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2);
	};
} // namespace __jni_impl::android::graphics::text

#include "LineBreaker_Result.hpp"
#include "MeasuredText.hpp"
#include "LineBreaker_ParagraphConstraints.hpp"

namespace __jni_impl::android::graphics::text
{
	// Fields
	jint LineBreaker::BREAK_STRATEGY_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_BALANCED");
	}
	jint LineBreaker::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_HIGH_QUALITY");
	}
	jint LineBreaker::BREAK_STRATEGY_SIMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"BREAK_STRATEGY_SIMPLE");
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_FULL");
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NONE");
	}
	jint LineBreaker::HYPHENATION_FREQUENCY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"HYPHENATION_FREQUENCY_NORMAL");
	}
	jint LineBreaker::JUSTIFICATION_MODE_INTER_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_INTER_WORD");
	}
	jint LineBreaker::JUSTIFICATION_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.text.LineBreaker",
			"JUSTIFICATION_MODE_NONE");
	}
	
	// Constructors
	void LineBreaker::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LineBreaker::computeLineBreaks(__jni_impl::android::graphics::text::MeasuredText arg0, __jni_impl::android::graphics::text::LineBreaker_ParagraphConstraints arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"computeLineBreaks",
			"(Landroid/graphics/text/MeasuredText;Landroid/graphics/text/LineBreaker$ParagraphConstraints;I)Landroid/graphics/text/LineBreaker$Result;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class LineBreaker : public __jni_impl::android::graphics::text::LineBreaker
	{
	public:
		LineBreaker(QAndroidJniObject obj) { __thiz = obj; }
		LineBreaker()
		{
			__constructor();
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_LINEBREAKER

