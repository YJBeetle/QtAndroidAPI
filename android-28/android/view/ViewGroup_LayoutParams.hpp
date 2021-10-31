#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters;
}

namespace android::view
{
	class ViewGroup_LayoutParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint FILL_PARENT();
		static jint MATCH_PARENT();
		static jint WRAP_CONTENT();
		jint height();
		android::view::animation::LayoutAnimationController_AnimationParameters layoutAnimationParameters();
		jint width();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewGroup_LayoutParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewGroup_LayoutParams(QAndroidJniObject obj);
		
		// Constructors
		ViewGroup_LayoutParams(android::view::ViewGroup_LayoutParams &arg0);
		ViewGroup_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		ViewGroup_LayoutParams(jint arg0, jint arg1);
		
		// Methods
		void resolveLayoutDirection(jint arg0);
	};
} // namespace android::view

