#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text
{
	class PrecomputedText_Params : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		QAndroidJniObject getTextDirection();
		QAndroidJniObject getTextPaint();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::text

#include "./TextPaint.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void PrecomputedText_Params::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText$Params",
			"(V)V");
	}
	
	// Methods
	jboolean PrecomputedText_Params::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrecomputedText_Params::getBreakStrategy()
	{
		return __thiz.callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint PrecomputedText_Params::getHyphenationFrequency()
	{
		return __thiz.callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	QAndroidJniObject PrecomputedText_Params::getTextDirection()
	{
		return __thiz.callObjectMethod(
			"getTextDirection",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	QAndroidJniObject PrecomputedText_Params::getTextPaint()
	{
		return __thiz.callObjectMethod(
			"getTextPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint PrecomputedText_Params::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrecomputedText_Params::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class PrecomputedText_Params : public __jni_impl::android::text::PrecomputedText_Params
	{
	public:
		PrecomputedText_Params(QAndroidJniObject obj) { __thiz = obj; }
		PrecomputedText_Params()
		{
			__constructor();
		}
	};
} // namespace android::text

