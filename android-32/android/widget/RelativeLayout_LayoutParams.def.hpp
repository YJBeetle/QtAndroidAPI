#pragma once

#include "../view/ViewGroup_MarginLayoutParams.def.hpp"

class JIntArray;
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
class JString;

namespace android::widget
{
	class RelativeLayout_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jboolean alignWithParent();
		
		// QJniObject forward
		template<typename ...Ts> explicit RelativeLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		RelativeLayout_LayoutParams(QJniObject obj) : android::view::ViewGroup_MarginLayoutParams(obj) {}
		
		// Constructors
		RelativeLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		RelativeLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		RelativeLayout_LayoutParams(android::widget::RelativeLayout_LayoutParams &arg0);
		RelativeLayout_LayoutParams(android::content::Context arg0, JObject arg1);
		RelativeLayout_LayoutParams(jint arg0, jint arg1);
		
		// Methods
		void addRule(jint arg0) const;
		void addRule(jint arg0, jint arg1) const;
		JString debug(JString arg0) const;
		jint getRule(jint arg0) const;
		JIntArray getRules() const;
		void removeRule(jint arg0) const;
		void resolveLayoutDirection(jint arg0) const;
	};
} // namespace android::widget

