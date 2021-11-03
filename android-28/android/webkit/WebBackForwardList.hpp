#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebHistoryItem;
}
class JObject;

namespace android::webkit
{
	class WebBackForwardList : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebBackForwardList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebBackForwardList(QJniObject obj);
		
		// Constructors
		WebBackForwardList();
		
		// Methods
		jint getCurrentIndex();
		android::webkit::WebHistoryItem getCurrentItem();
		android::webkit::WebHistoryItem getItemAtIndex(jint arg0);
		jint getSize();
	};
} // namespace android::webkit

