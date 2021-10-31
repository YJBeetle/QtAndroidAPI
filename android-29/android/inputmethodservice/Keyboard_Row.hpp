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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Keyboard_Row(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Keyboard_Row(QAndroidJniObject obj);
		
		// Constructors
		Keyboard_Row(android::inputmethodservice::Keyboard arg0);
		Keyboard_Row(android::content::res::Resources arg0, android::inputmethodservice::Keyboard arg1, __JniBaseClass arg2);
		
		// Methods
	};
} // namespace android::inputmethodservice

