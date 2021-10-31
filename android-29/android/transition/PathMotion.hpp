#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PathMotion : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathMotion(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PathMotion(QAndroidJniObject obj);
		
		// Constructors
		PathMotion();
		PathMotion(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
	};
} // namespace android::transition

