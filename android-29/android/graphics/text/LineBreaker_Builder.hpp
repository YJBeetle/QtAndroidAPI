#pragma once

#ifndef ANDROID_GRAPHICS_TEXT_LINEBREAKER_BUILDER
#define ANDROID_GRAPHICS_TEXT_LINEBREAKER_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::text
{
	class LineBreaker;
}

namespace __jni_impl::android::graphics::text
{
	class LineBreaker_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setJustificationMode(jint arg0);
		QAndroidJniObject setIndents(jintArray arg0);
	};
} // namespace __jni_impl::android::graphics::text

#include "LineBreaker.hpp"

namespace __jni_impl::android::graphics::text
{
	// Fields
	
	// Constructors
	void LineBreaker_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LineBreaker_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	QAndroidJniObject LineBreaker_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setJustificationMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setIndents(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::text

namespace android::graphics::text
{
	class LineBreaker_Builder : public __jni_impl::android::graphics::text::LineBreaker_Builder
	{
	public:
		LineBreaker_Builder(QAndroidJniObject obj) { __thiz = obj; }
		LineBreaker_Builder()
		{
			__constructor();
		}
	};
} // namespace android::graphics::text

#endif // ANDROID_GRAPHICS_TEXT_LINEBREAKER_BUILDER

