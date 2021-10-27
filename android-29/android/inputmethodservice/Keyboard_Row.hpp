#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::inputmethodservice
{
	class Keyboard;
}

namespace android::inputmethodservice
{
	class Keyboard_Row : public __JniBaseClass
	{
	public:
		// Fields
		jint defaultHeight();
		jint defaultHorizontalGap();
		jint defaultWidth();
		jint mode();
		jint rowEdgeFlags();
		jint verticalGap();
		
		Keyboard_Row(QAndroidJniObject obj);
		// Constructors
		Keyboard_Row(android::inputmethodservice::Keyboard &arg0);
		Keyboard_Row(android::content::res::Resources &arg0, android::inputmethodservice::Keyboard &arg1, __JniBaseClass &arg2);
		Keyboard_Row() = default;
		
		// Methods
	};
} // namespace android::inputmethodservice

