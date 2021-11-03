#pragma once

#include "../../JObject.hpp"
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
	class TableRow_LayoutParams : public android::widget::LinearLayout_LayoutParams
	{
	public:
		// Fields
		jint column();
		jint span();
		
		// QJniObject forward
		template<typename ...Ts> explicit TableRow_LayoutParams(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		TableRow_LayoutParams(QJniObject obj);
		
		// Constructors
		TableRow_LayoutParams();
		TableRow_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		TableRow_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		TableRow_LayoutParams(jint arg0);
		TableRow_LayoutParams(android::content::Context arg0, JObject arg1);
		TableRow_LayoutParams(jint arg0, jint arg1);
		TableRow_LayoutParams(jint arg0, jint arg1, jfloat arg2);
		
		// Methods
	};
} // namespace android::widget

