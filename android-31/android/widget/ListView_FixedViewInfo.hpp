#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}
namespace android::widget
{
	class ListView;
}

namespace android::widget
{
	class ListView_FixedViewInfo : public JObject
	{
	public:
		// Fields
		jobject data();
		jboolean isSelectable();
		android::view::View view();
		
		// QJniObject forward
		template<typename ...Ts> explicit ListView_FixedViewInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ListView_FixedViewInfo(QJniObject obj);
		
		// Constructors
		ListView_FixedViewInfo(android::widget::ListView arg0);
		
		// Methods
	};
} // namespace android::widget

