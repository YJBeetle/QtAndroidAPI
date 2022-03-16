#pragma once

#include "./LinearLayout_LayoutParams.def.hpp"

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
	class TableLayout_LayoutParams : public android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TableLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		TableLayout_LayoutParams(QJniObject obj) : android::widget::LinearLayout_LayoutParams(obj) {}
		
		// Constructors
		TableLayout_LayoutParams();
		TableLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		TableLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		TableLayout_LayoutParams(android::content::Context arg0, JObject arg1);
		TableLayout_LayoutParams(jint arg0, jint arg1);
		TableLayout_LayoutParams(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::widget

