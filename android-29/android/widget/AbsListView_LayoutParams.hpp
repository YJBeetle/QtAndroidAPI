#pragma once

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
	class AbsListView_LayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsListView_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		AbsListView_LayoutParams(QJniObject obj);
		
		// Constructors
		AbsListView_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		AbsListView_LayoutParams(android::content::Context arg0, JObject arg1);
		AbsListView_LayoutParams(jint arg0, jint arg1);
		AbsListView_LayoutParams(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace android::widget

