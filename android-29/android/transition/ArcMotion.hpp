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
	class ArcMotion : public android::transition::PathMotion
	{
	public:
		// Fields
		
		ArcMotion(QAndroidJniObject obj);
		// Constructors
		ArcMotion();
		ArcMotion(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jfloat getMaximumAngle();
		jfloat getMinimumHorizontalAngle();
		jfloat getMinimumVerticalAngle();
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setMaximumAngle(jfloat arg0);
		void setMinimumHorizontalAngle(jfloat arg0);
		void setMinimumVerticalAngle(jfloat arg0);
	};
} // namespace android::transition

