#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class AdapterView_AdapterContextMenuInfo : public JObject
	{
	public:
		// Fields
		jlong id();
		jint position();
		android::view::View targetView();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdapterView_AdapterContextMenuInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdapterView_AdapterContextMenuInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdapterView_AdapterContextMenuInfo(android::view::View arg0, jint arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::widget

