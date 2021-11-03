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

namespace android::app
{
	class ActionBar_LayoutParams : public android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jint gravity();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionBar_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_MarginLayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		ActionBar_LayoutParams(QJniObject obj);
		
		// Constructors
		ActionBar_LayoutParams(android::app::ActionBar_LayoutParams &arg0);
		ActionBar_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		ActionBar_LayoutParams(jint arg0);
		ActionBar_LayoutParams(android::content::Context arg0, JObject arg1);
		ActionBar_LayoutParams(jint arg0, jint arg1);
		ActionBar_LayoutParams(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace android::app

