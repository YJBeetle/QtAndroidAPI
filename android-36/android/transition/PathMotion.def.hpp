#pragma once

#include "../../JObject.hpp"

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
	class PathMotion : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PathMotion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PathMotion(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PathMotion();
		PathMotion(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::graphics::Path getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
	};
} // namespace android::transition

