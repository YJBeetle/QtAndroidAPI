#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SumPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		SumPathEffect(QAndroidJniObject obj);
		
		// Constructors
		SumPathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1);
		
		// Methods
	};
} // namespace android::graphics

