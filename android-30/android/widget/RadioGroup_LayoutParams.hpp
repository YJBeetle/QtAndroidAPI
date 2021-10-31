#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
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
	class RadioGroup_LayoutParams : public android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RadioGroup_LayoutParams(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		RadioGroup_LayoutParams(QJniObject obj);
		
		// Constructors
		RadioGroup_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		RadioGroup_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		RadioGroup_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		RadioGroup_LayoutParams(jint arg0, jint arg1);
		RadioGroup_LayoutParams(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::widget

