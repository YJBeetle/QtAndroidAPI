#pragma once

#ifndef ANDROID_TEXT_BIDIFORMATTER_BUILDER
#define ANDROID_TEXT_BIDIFORMATTER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::text
{
	class BidiFormatter;
}

namespace __jni_impl::android::text
{
	class BidiFormatter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(jboolean arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject stereoReset(jboolean arg0);
		QAndroidJniObject setTextDirectionHeuristic(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::text

#include "../../java/util/Locale.hpp"
#include "BidiFormatter.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void BidiFormatter_Builder::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void BidiFormatter_Builder::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"(Z)V",
			arg0
		);
	}
	void BidiFormatter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BidiFormatter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/BidiFormatter;"
		);
	}
	QAndroidJniObject BidiFormatter_Builder::stereoReset(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"stereoReset",
			"(Z)Landroid/text/BidiFormatter$Builder;",
			arg0
		);
	}
	QAndroidJniObject BidiFormatter_Builder::setTextDirectionHeuristic(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirectionHeuristic",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/BidiFormatter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class BidiFormatter_Builder : public __jni_impl::android::text::BidiFormatter_Builder
	{
	public:
		BidiFormatter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BidiFormatter_Builder(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		BidiFormatter_Builder(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		BidiFormatter_Builder()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_BIDIFORMATTER_BUILDER

