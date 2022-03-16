#pragma once

#include "./PathEffect.def.hpp"

namespace android::graphics
{
	class CornerPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CornerPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		CornerPathEffect(QJniObject obj) : android::graphics::PathEffect(obj) {}
		
		// Constructors
		CornerPathEffect(jfloat arg0);
		
		// Methods
	};
} // namespace android::graphics

