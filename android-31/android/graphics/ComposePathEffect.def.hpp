#pragma once

#include "./PathEffect.def.hpp"

namespace android::graphics
{
	class PathEffect;
}

namespace android::graphics
{
	class ComposePathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ComposePathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		ComposePathEffect(QJniObject obj) : android::graphics::PathEffect(obj) {}
		
		// Constructors
		ComposePathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1);
		
		// Methods
	};
} // namespace android::graphics

