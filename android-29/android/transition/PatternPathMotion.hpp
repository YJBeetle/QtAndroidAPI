#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathMotion.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Path;
}

namespace android::transition
{
	class PatternPathMotion : public android::transition::PathMotion
	{
	public:
		// Fields
		
		PatternPathMotion(QAndroidJniObject obj);
		// Constructors
		PatternPathMotion();
		PatternPathMotion(android::graphics::Path &arg0);
		PatternPathMotion(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		QAndroidJniObject getPatternPath();
		void setPatternPath(android::graphics::Path arg0);
	};
} // namespace android::transition

