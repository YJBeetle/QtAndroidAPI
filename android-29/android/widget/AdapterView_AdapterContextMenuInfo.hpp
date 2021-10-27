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
		QAndroidJniObject targetView();
		
		AdapterView_AdapterContextMenuInfo(QAndroidJniObject obj);
		// Constructors
		AdapterView_AdapterContextMenuInfo(android::view::View &arg0, jint &arg1, jlong &arg2);
		AdapterView_AdapterContextMenuInfo() = default;
		
		// Methods
	};
} // namespace android::widget

