#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseExpandableListAdapter.hpp"
#include "./CursorTreeAdapter.hpp"
#include "./ResourceCursorTreeAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class ImageView;
}
namespace android::widget
{
	class TextView;
}

namespace android::widget
{
	class SimpleCursorTreeAdapter : public android::widget::ResourceCursorTreeAdapter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleCursorTreeAdapter(const char *className, const char *sig, Ts...agv) : android::widget::ResourceCursorTreeAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleCursorTreeAdapter(QAndroidJniObject obj);
		
		// Constructors
		SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, jint arg5, jarray arg6, jintArray arg7);
		SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jarray arg7, jintArray arg8);
		SimpleCursorTreeAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jint arg7, jarray arg8, jintArray arg9);
		
		// Methods
		__JniBaseClass getViewBinder();
		void setViewBinder(__JniBaseClass arg0);
		void setViewText(android::widget::TextView arg0, jstring arg1);
	};
} // namespace android::widget

