#pragma once

#include "./PathEffect.def.hpp"

namespace android::graphics
{
	class PathEffect;
}

namespace android::graphics
{
	class SumPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SumPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		SumPathEffect(QJniObject obj) : android::graphics::PathEffect(obj) {}
		
		// Constructors
		SumPathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1);
		
		// Methods
	};
} // namespace android::graphics

