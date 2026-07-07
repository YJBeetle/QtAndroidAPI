#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class AnimatorSet;
}

namespace android::animation
{
	class AnimatorSet_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatorSet_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorSet_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::animation::AnimatorSet_Builder after(android::animation::Animator arg0) const;
		android::animation::AnimatorSet_Builder after(jlong arg0) const;
		android::animation::AnimatorSet_Builder before(android::animation::Animator arg0) const;
		android::animation::AnimatorSet_Builder with(android::animation::Animator arg0) const;
	};
} // namespace android::animation

