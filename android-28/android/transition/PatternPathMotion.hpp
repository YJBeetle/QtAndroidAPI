#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PatternPathMotion(const char *className, const char *sig, Ts...agv) : android::transition::PathMotion(className, sig, std::forward<Ts>(agv)...) {}
		PatternPathMotion(QAndroidJniObject obj);
		
		// Constructors
		PatternPathMotion();
		PatternPathMotion(android::graphics::Path arg0);
		PatternPathMotion(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::graphics::Path getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		android::graphics::Path getPatternPath();
		void setPatternPath(android::graphics::Path arg0);
	};
} // namespace android::transition

