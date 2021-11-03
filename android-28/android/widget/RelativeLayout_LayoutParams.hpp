#pragma once

#include "../../JObject.hpp"
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
	class RelativeLayout_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jboolean alignWithParent();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		RelativeLayout_LayoutParams(QAndroidJniObject obj);
		
		// Constructors
		RelativeLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		RelativeLayout_LayoutParams(android::view::ViewGroup_MarginLayoutParams arg0);
		RelativeLayout_LayoutParams(android::widget::RelativeLayout_LayoutParams &arg0);
		RelativeLayout_LayoutParams(android::content::Context arg0, JObject arg1);
		RelativeLayout_LayoutParams(jint arg0, jint arg1);
		
		// Methods
		void addRule(jint arg0);
		void addRule(jint arg0, jint arg1);
		jstring debug(jstring arg0);
		jint getRule(jint arg0);
		jintArray getRules();
		void removeRule(jint arg0);
		void resolveLayoutDirection(jint arg0);
	};
} // namespace android::widget

