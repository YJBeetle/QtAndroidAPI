#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::view
{
	class View;
}

namespace android::text
{
	class AutoText : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutoText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutoText(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring get(jstring arg0, jint arg1, jint arg2, android::view::View arg3);
		static jint getSize(android::view::View arg0);
	};
} // namespace android::text

