#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ArcMotion(const char *className, const char *sig, Ts...agv) : android::transition::PathMotion(className, sig, std::forward<Ts>(agv)...) {}
		ArcMotion(QJniObject obj);
		
		// Constructors
		ArcMotion();
		ArcMotion(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getMaximumAngle() const;
		jfloat getMinimumHorizontalAngle() const;
		jfloat getMinimumVerticalAngle() const;
		android::graphics::Path getPath(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setMaximumAngle(jfloat arg0) const;
		void setMinimumHorizontalAngle(jfloat arg0) const;
		void setMinimumVerticalAngle(jfloat arg0) const;
	};
} // namespace android::transition

