#include "../content/Context.hpp"
#include "../graphics/Path.hpp"
#include "./PatternPathMotion.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	PatternPathMotion::PatternPathMotion(QAndroidJniObject obj) : android::transition::PathMotion(obj) {}
	
	// Constructors
	PatternPathMotion::PatternPathMotion()
		: android::transition::PathMotion(
			"android.transition.PatternPathMotion",
			"()V"
		) {}
	PatternPathMotion::PatternPathMotion(android::graphics::Path arg0)
		: android::transition::PathMotion(
			"android.transition.PatternPathMotion",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		) {}
	PatternPathMotion::PatternPathMotion(android::content::Context arg0, JObject arg1)
		: android::transition::PathMotion(
			"android.transition.PatternPathMotion",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::graphics::Path PatternPathMotion::getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	android::graphics::Path PatternPathMotion::getPatternPath() const
	{
		return callObjectMethod(
			"getPatternPath",
			"()Landroid/graphics/Path;"
		);
	}
	void PatternPathMotion::setPatternPath(android::graphics::Path arg0) const
	{
		callMethod<void>(
			"setPatternPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
} // namespace android::transition

