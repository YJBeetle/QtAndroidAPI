#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace android::widget
{
	class FrameLayout_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		static jint UNSPECIFIED_GRAVITY();
		jint gravity();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FrameLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		FrameLayout_LayoutParams(QAndroidJniObject obj);
		
		// Constructors
		FrameLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		FrameLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		FrameLayout_LayoutParams(android::widget::FrameLayout_LayoutParams &arg0);
		FrameLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		FrameLayout_LayoutParams(jint arg0, jint arg1);
		FrameLayout_LayoutParams(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace android::widget

