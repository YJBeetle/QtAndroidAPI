#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::widget
{
	class Gallery_LayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		
		Gallery_LayoutParams(QAndroidJniObject obj);
		// Constructors
		Gallery_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		Gallery_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		Gallery_LayoutParams(jint arg0, jint arg1);
		Gallery_LayoutParams() = default;
		
		// Methods
	};
} // namespace android::widget

