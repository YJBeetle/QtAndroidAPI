#pragma once

#ifndef ANDROID_TEXT_LAYOUT
#define ANDROID_TEXT_LAYOUT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::text
{
	class Layout_Alignment;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::text
{
	class Layout_Directions;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::text
{
	class Layout : public __JniBaseClass
	{
	public:
		// Fields
		static jint BREAK_STRATEGY_BALANCED();
		static jint BREAK_STRATEGY_HIGH_QUALITY();
		static jint BREAK_STRATEGY_SIMPLE();
		static jfloat DEFAULT_LINESPACING_ADDITION();
		static jfloat DEFAULT_LINESPACING_MULTIPLIER();
		static jint DIR_LEFT_TO_RIGHT();
		static jint DIR_RIGHT_TO_LEFT();
		static jint HYPHENATION_FREQUENCY_FULL();
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getText();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Paint arg2, jint arg3);
		jint getWidth();
		jint getHeight();
		jint getLineCount();
		jint getLineTop(jint arg0);
		jint getLineDescent(jint arg0);
		jint getLineStart(jint arg0);
		jint getParagraphDirection(jint arg0);
		jboolean getLineContainsTab(jint arg0);
		jfloat getLineMax(jint arg0);
		jfloat getLineWidth(jint arg0);
		QAndroidJniObject getLineDirections(jint arg0);
		jint getTopPadding();
		jint getBottomPadding();
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		static jfloat getDesiredWidth(jstring arg0, __jni_impl::android::text::TextPaint arg1);
		static jfloat getDesiredWidth(const QString &arg0, __jni_impl::android::text::TextPaint arg1);
		static jfloat getDesiredWidth(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3);
		static jfloat getDesiredWidth(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3);
		QAndroidJniObject getPaint();
		void increaseWidthTo(jint arg0);
		QAndroidJniObject getAlignment();
		jfloat getSpacingMultiplier();
		jfloat getSpacingAdd();
		jint getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1);
		jboolean isRtlCharAt(jint arg0);
		jfloat getPrimaryHorizontal(jint arg0);
		jfloat getSecondaryHorizontal(jint arg0);
		jfloat getLineLeft(jint arg0);
		jfloat getLineRight(jint arg0);
		jint getLineForVertical(jint arg0);
		jint getLineForOffset(jint arg0);
		jint getOffsetForHorizontal(jint arg0, jfloat arg1);
		jint getLineEnd(jint arg0);
		jint getLineVisibleEnd(jint arg0);
		jint getLineBottom(jint arg0);
		jint getLineBaseline(jint arg0);
		jint getLineAscent(jint arg0);
		jint getOffsetToLeftOf(jint arg0);
		jint getOffsetToRightOf(jint arg0);
		void getCursorPath(jint arg0, __jni_impl::android::graphics::Path arg1, jstring arg2);
		void getCursorPath(jint arg0, __jni_impl::android::graphics::Path arg1, const QString &arg2);
		void getSelectionPath(jint arg0, jint arg1, __jni_impl::android::graphics::Path arg2);
		QAndroidJniObject getParagraphAlignment(jint arg0);
		jint getParagraphLeft(jint arg0);
		jint getParagraphRight(jint arg0);
	};
} // namespace __jni_impl::android::text

#include "TextPaint.hpp"
#include "Layout_Alignment.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/Paint.hpp"
#include "Layout_Directions.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::text
{
	// Fields
	jint Layout::BREAK_STRATEGY_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_BALANCED"
		);
	}
	jint Layout::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_HIGH_QUALITY"
		);
	}
	jint Layout::BREAK_STRATEGY_SIMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_SIMPLE"
		);
	}
	jfloat Layout::DEFAULT_LINESPACING_ADDITION()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_ADDITION"
		);
	}
	jfloat Layout::DEFAULT_LINESPACING_MULTIPLIER()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_MULTIPLIER"
		);
	}
	jint Layout::DIR_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"DIR_LEFT_TO_RIGHT"
		);
	}
	jint Layout::DIR_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"DIR_RIGHT_TO_LEFT"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_FULL"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NONE"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NORMAL"
		);
	}
	jint Layout::JUSTIFICATION_MODE_INTER_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_INTER_WORD"
		);
	}
	jint Layout::JUSTIFICATION_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_NONE"
		);
	}
	
	// Constructors
	void Layout::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Layout",
			"(V)V");
	}
	
	// Methods
	jstring Layout::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Layout::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Layout::draw(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Paint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint Layout::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Layout::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Layout::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint Layout::getLineTop(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint Layout::getParagraphDirection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jboolean Layout::getLineContainsTab(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jfloat Layout::getLineMax(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineMax",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getLineWidth(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject Layout::getLineDirections(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jint Layout::getTopPadding()
	{
		return __thiz.callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	jint Layout::getBottomPadding()
	{
		return __thiz.callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint Layout::getEllipsisCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint Layout::getEllipsisStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint Layout::getEllipsizedWidth()
	{
		return __thiz.callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jfloat Layout::getDesiredWidth(jstring arg0, __jni_impl::android::text::TextPaint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jfloat Layout::getDesiredWidth(const QString &arg0, __jni_impl::android::text::TextPaint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jfloat Layout::getDesiredWidth(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jfloat Layout::getDesiredWidth(const QString &arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Layout::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	void Layout::increaseWidthTo(jint arg0)
	{
		__thiz.callMethod<void>(
			"increaseWidthTo",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Layout::getAlignment()
	{
		return __thiz.callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	jfloat Layout::getSpacingMultiplier()
	{
		return __thiz.callMethod<jfloat>(
			"getSpacingMultiplier",
			"()F"
		);
	}
	jfloat Layout::getSpacingAdd()
	{
		return __thiz.callMethod<jfloat>(
			"getSpacingAdd",
			"()F"
		);
	}
	jint Layout::getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Layout::isRtlCharAt(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRtlCharAt",
			"(I)Z",
			arg0
		);
	}
	jfloat Layout::getPrimaryHorizontal(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getPrimaryHorizontal",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getSecondaryHorizontal(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getSecondaryHorizontal",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getLineLeft(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineLeft",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getLineRight(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineRight",
			"(I)F",
			arg0
		);
	}
	jint Layout::getLineForVertical(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineForOffset(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineForOffset",
			"(I)I",
			arg0
		);
	}
	jint Layout::getOffsetForHorizontal(jint arg0, jfloat arg1)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForHorizontal",
			"(IF)I",
			arg0,
			arg1
		);
	}
	jint Layout::getLineEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineEnd",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineVisibleEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineVisibleEnd",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineBottom(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineBottom",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineBaseline(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineBaseline",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineAscent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineAscent",
			"(I)I",
			arg0
		);
	}
	jint Layout::getOffsetToLeftOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffsetToLeftOf",
			"(I)I",
			arg0
		);
	}
	jint Layout::getOffsetToRightOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffsetToRightOf",
			"(I)I",
			arg0
		);
	}
	void Layout::getCursorPath(jint arg0, __jni_impl::android::graphics::Path arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"getCursorPath",
			"(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Layout::getCursorPath(jint arg0, __jni_impl::android::graphics::Path arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"getCursorPath",
			"(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Layout::getSelectionPath(jint arg0, jint arg1, __jni_impl::android::graphics::Path arg2)
	{
		__thiz.callMethod<void>(
			"getSelectionPath",
			"(IILandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Layout::getParagraphAlignment(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getParagraphAlignment",
			"(I)Landroid/text/Layout$Alignment;",
			arg0
		);
	}
	jint Layout::getParagraphLeft(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphLeft",
			"(I)I",
			arg0
		);
	}
	jint Layout::getParagraphRight(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphRight",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Layout : public __jni_impl::android::text::Layout
	{
	public:
		Layout(QAndroidJniObject obj) { __thiz = obj; }
		Layout()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_LAYOUT

