#include "../content/Context.hpp"
#include "../graphics/Path.hpp"
#include "./PathMotion.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	PathMotion::PathMotion(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PathMotion::PathMotion()
		: __JniBaseClass(
			"android.transition.PathMotion",
			"()V"
		) {}
	PathMotion::PathMotion(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.transition.PathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject PathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callObjectMethod(
			"getPath",
			"(FFFF)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::transition

