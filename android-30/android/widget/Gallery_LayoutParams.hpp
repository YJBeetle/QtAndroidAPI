#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Gallery_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		Gallery_LayoutParams(QAndroidJniObject obj);
		
		// Constructors
		Gallery_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		Gallery_LayoutParams(android::content::Context arg0, JObject arg1);
		Gallery_LayoutParams(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::widget

