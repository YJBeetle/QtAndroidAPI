#include "../content/Context.hpp"
#include "../graphics/Path.hpp"
#include "./PatternPathMotion.hpp"

namespace android::transition
{
	// Fields
	
	PatternPathMotion::PatternPathMotion(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PatternPathMotion::PatternPathMotion()
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"()V"
		);
	}
	PatternPathMotion::PatternPathMotion(android::graphics::Path &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	PatternPathMotion::PatternPathMotion(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.PatternPathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PatternPathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(FFFF)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject PatternPathMotion::getPatternPath()
	{
		return __thiz.callObjectMethod(
			"getPatternPath",
			"()Landroid/graphics/Path;"
		);
	}
	void PatternPathMotion::setPatternPath(android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"setPatternPath",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition

