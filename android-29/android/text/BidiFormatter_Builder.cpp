#include "./BidiFormatter.hpp"
#include "../../java/util/Locale.hpp"
#include "./BidiFormatter_Builder.hpp"

namespace android::text
{
	// Fields
	
	BidiFormatter_Builder::BidiFormatter_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BidiFormatter_Builder::BidiFormatter_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"()V"
		);
	}
	BidiFormatter_Builder::BidiFormatter_Builder(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.BidiFormatter$Builder",
			"(Z)V",
			arg0
		);
	}
	BidiFormatter_Builder::BidiFormatter_Builder(java::util::Locale arg0)
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
	QAndroidJniObject BidiFormatter_Builder::setTextDirectionHeuristic(__JniBaseClass arg0)
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
} // namespace android::text

