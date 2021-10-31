#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class AdapterView_AdapterContextMenuInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong id();
		jint position();
		android::view::View targetView();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdapterView_AdapterContextMenuInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AdapterView_AdapterContextMenuInfo(QJniObject obj);
		
		// Constructors
		AdapterView_AdapterContextMenuInfo(android::view::View arg0, jint arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::widget

