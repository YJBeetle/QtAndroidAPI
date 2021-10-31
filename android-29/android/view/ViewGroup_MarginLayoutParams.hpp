#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ViewGroup_LayoutParams.hpp"

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
	class ViewGroup_MarginLayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint bottomMargin();
		jint leftMargin();
		jint rightMargin();
		jint topMargin();
		
		ViewGroup_MarginLayoutParams(QAndroidJniObject obj);
		// Constructors
		ViewGroup_MarginLayoutParams(android::view::ViewGroup_LayoutParams arg0);
		ViewGroup_MarginLayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0);
		ViewGroup_MarginLayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		ViewGroup_MarginLayoutParams(jint arg0, jint arg1);
		ViewGroup_MarginLayoutParams() = default;
		
		// Methods
		jint getLayoutDirection();
		jint getMarginEnd();
		jint getMarginStart();
		jboolean isMarginRelative();
		void resolveLayoutDirection(jint arg0);
		void setLayoutDirection(jint arg0);
		void setMarginEnd(jint arg0);
		void setMarginStart(jint arg0);
		void setMargins(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::view

