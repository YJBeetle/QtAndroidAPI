#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class BidiFormatter;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text
{
	class BidiFormatter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setTextDirectionHeuristic(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject stereoReset(jboolean arg0);
	};
} // namespace __jni_impl::android::text

#include "BidiFormatter.hpp"
#include "../../java/util/Locale.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void BidiFormatter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"()V"
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
	void BidiFormatter_Builder::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject BidiFormatter_Builder::setTextDirectionHeuristic(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirectionHeuristic",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/BidiFormatter$Builder;",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::android::text

namespace android::text
{
	class BidiFormatter_Builder : public __jni_impl::android::text::BidiFormatter_Builder
	{
	public:
		BidiFormatter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BidiFormatter_Builder()
		{
			__constructor();
		}
		BidiFormatter_Builder(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		BidiFormatter_Builder(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

