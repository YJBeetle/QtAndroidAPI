#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PathEffect.hpp"


namespace android::graphics
{
	class DashPathEffect : public android::graphics::PathEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DashPathEffect(const char *className, const char *sig, Ts...agv) : android::graphics::PathEffect(className, sig, std::forward<Ts>(agv)...) {}
		DashPathEffect(QJniObject obj);
		
		// Constructors
		DashPathEffect(jfloatArray arg0, jfloat arg1);
		
		// Methods
	};
} // namespace android::graphics

