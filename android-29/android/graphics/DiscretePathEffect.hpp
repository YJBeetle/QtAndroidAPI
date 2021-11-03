#pragma once

#include "./PathEffect.hpp"

namespace android::graphics
{
	class DiscretePathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscretePathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		DiscretePathEffect(QJniObject obj);
		
		// Constructors
		DiscretePathEffect(jfloat arg0, jfloat arg1);
		
		// Methods
	};
} // namespace android::graphics

