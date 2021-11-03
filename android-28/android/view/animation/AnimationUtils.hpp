#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::animation
{
	class LayoutAnimationController;
}

namespace android::view::animation
{
	class AnimationUtils : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimationUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AnimationUtils(QJniObject obj);
		
		// Constructors
		AnimationUtils();
		
		// Methods
		static jlong currentAnimationTimeMillis();
		static android::view::animation::Animation loadAnimation(android::content::Context arg0, jint arg1);
		static JObject loadInterpolator(android::content::Context arg0, jint arg1);
		static android::view::animation::LayoutAnimationController loadLayoutAnimation(android::content::Context arg0, jint arg1);
		static android::view::animation::Animation makeInAnimation(android::content::Context arg0, jboolean arg1);
		static android::view::animation::Animation makeInChildBottomAnimation(android::content::Context arg0);
		static android::view::animation::Animation makeOutAnimation(android::content::Context arg0, jboolean arg1);
	};
} // namespace android::view::animation

