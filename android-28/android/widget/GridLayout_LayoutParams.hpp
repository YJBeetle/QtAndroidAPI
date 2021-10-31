#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

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
	class GridLayout_Spec;
}

namespace android::widget
{
	class GridLayout_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		android::widget::GridLayout_Spec columnSpec();
		android::widget::GridLayout_Spec rowSpec();
		
		// QJniObject forward
		template<typename ...Ts> explicit GridLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_LayoutParams(QJniObject obj);
		
		// Constructors
		GridLayout_LayoutParams();
		GridLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		GridLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		GridLayout_LayoutParams(android::widget::GridLayout_LayoutParams &arg0);
		GridLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		GridLayout_LayoutParams(android::widget::GridLayout_Spec arg0, android::widget::GridLayout_Spec arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void setGravity(jint arg0);
	};
} // namespace android::widget

