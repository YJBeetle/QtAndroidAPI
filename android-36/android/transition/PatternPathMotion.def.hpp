#pragma once

#include "./PathMotion.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit PatternPathMotion(const char *className, const char *sig, Ts...agv) : android::transition::PathMotion(className, sig, std::forward<Ts>(agv)...) {}
		PatternPathMotion(QJniObject obj) : android::transition::PathMotion(obj) {}
		
		// Constructors
		PatternPathMotion();
		PatternPathMotion(android::graphics::Path arg0);
		PatternPathMotion(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::graphics::Path getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		android::graphics::Path getPatternPath() const;
		void setPatternPath(android::graphics::Path arg0) const;
	};
} // namespace android::transition

