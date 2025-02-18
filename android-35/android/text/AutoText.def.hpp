#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}
class JString;
class JString;

namespace android::text
{
	class AutoText : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AutoText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutoText(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString get(JString arg0, jint arg1, jint arg2, android::view::View arg3);
		static jint getSize(android::view::View arg0);
	};
} // namespace android::text

