#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewAnimationUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewAnimationUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewAnimationUtils(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::animation::Animator createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4);
	};
} // namespace android::view

