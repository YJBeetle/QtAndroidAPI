#pragma once

#include "../../JObject.hpp"

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
	class Keyboard_Row : public JObject
	{
	public:
		// Fields
		jint defaultHeight();
		jint defaultHorizontalGap();
		jint defaultWidth();
		jint mode();
		jint rowEdgeFlags();
		jint verticalGap();
		
		// QJniObject forward
		template<typename ...Ts> explicit Keyboard_Row(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Keyboard_Row(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Keyboard_Row(android::inputmethodservice::Keyboard arg0);
		Keyboard_Row(android::content::res::Resources arg0, android::inputmethodservice::Keyboard arg1, JObject arg2);
		
		// Methods
	};
} // namespace android::inputmethodservice

