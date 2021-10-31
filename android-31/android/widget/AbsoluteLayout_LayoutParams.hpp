#pragma once

#include "../../__JniBaseClass.hpp"
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
	class AbsoluteLayout_LayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint x();
		jint y();
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsoluteLayout_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		AbsoluteLayout_LayoutParams(QJniObject obj);
		
		// Constructors
		AbsoluteLayout_LayoutParams(android::view::ViewGroup_LayoutParams arg0);
		AbsoluteLayout_LayoutParams(android::content::Context arg0, __JniBaseClass arg1);
		AbsoluteLayout_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jstring debug(jstring arg0);
	};
} // namespace android::widget

