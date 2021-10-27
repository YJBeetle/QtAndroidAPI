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

namespace android::app
{
	class ActionBar_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jint gravity();
		
		ActionBar_LayoutParams(QAndroidJniObject obj);
		// Constructors
		ActionBar_LayoutParams(android::app::ActionBar_LayoutParams &arg0);
		ActionBar_LayoutParams(android::view::ViewGroup_LayoutParams &arg0);
		ActionBar_LayoutParams(jint &arg0);
		ActionBar_LayoutParams(android::content::Context &arg0, __JniBaseClass &arg1);
		ActionBar_LayoutParams(jint &arg0, jint &arg1);
		ActionBar_LayoutParams(jint &arg0, jint &arg1, jint &arg2);
		ActionBar_LayoutParams() = default;
		
		// Methods
	};
} // namespace android::app

