#pragma once

#include "./ResourceCursorTreeAdapter.hpp"

class JIntArray;
class JArray;
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
class JString;

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
		SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4, jint arg5, JArray arg6, JIntArray arg7);
		SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, jint arg6, JArray arg7, JIntArray arg8);
		SimpleCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, jint arg6, jint arg7, JArray arg8, JIntArray arg9);
		
		// Methods
		JObject getViewBinder();
		void setViewBinder(JObject arg0);
		void setViewText(android::widget::TextView arg0, JString arg1);
	};
} // namespace android::widget

