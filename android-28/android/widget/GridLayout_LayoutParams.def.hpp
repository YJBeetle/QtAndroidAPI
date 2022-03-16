#pragma once

#include "../view/ViewGroup_MarginLayoutParams.def.hpp"

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
class JObject;

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
		GridLayout_LayoutParams(QJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
		
		// Constructors
		GridLayout_LayoutParams();
		GridLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		GridLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		GridLayout_LayoutParams(android::widget::GridLayout_LayoutParams &arg0);
		GridLayout_LayoutParams(android::content::Context arg0, JObject arg1);
		GridLayout_LayoutParams(android::widget::GridLayout_Spec arg0, android::widget::GridLayout_Spec arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		void setGravity(jint arg0) const;
	};
} // namespace android::widget

